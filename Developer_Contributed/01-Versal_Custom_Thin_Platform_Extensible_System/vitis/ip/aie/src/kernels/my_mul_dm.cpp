// /**********
// © Copyright 2023 Advanced Micro Devices (AMD), Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// **********/

#pragma once

#include <adf.h>
#include <aie_api/aie.hpp>
#include "kernels.hpp"

// Constructor
template <typename TT_DATA, size_t BUF_SIZE>
my_mul_dm<TT_DATA, BUF_SIZE>::my_mul_dm()
{
}
// Run:
template <typename TT_DATA, size_t BUF_SIZE>
void __attribute__ ((noinline)) my_mul_dm<TT_DATA, BUF_SIZE>::run(adf::input_buffer<TT_DATA, adf::extents<BUF_SIZE>> & __restrict sig_i, adf::output_buffer<TT_DATA, adf::extents<BUF_SIZE>> & __restrict sig_o )
{
  const int shift = 0; //MOVER_SHIFT ;
  int my_size = sig_o.size();

  // vector of ones
  const cint16 one_vector[8] = {{1, 0},{1, 0},{1, 0},{1, 0}, {1, 0},{1, 0},{1, 0},{1, 0}};
  aie::vector<cint16, 8> coe = aie::load_v<8>(one_vector);

  // Declare iterators
  auto in_iter =  aie::begin_vector<8>(sig_i);
  auto out_iter =  aie::begin_vector<8>(sig_o);

  for (int i = 0; i < my_size/8; i++)
  {
    *out_iter++ = aie::to_vector<cint16>(aie::mul(*in_iter++, coe), 0);
  }
}
