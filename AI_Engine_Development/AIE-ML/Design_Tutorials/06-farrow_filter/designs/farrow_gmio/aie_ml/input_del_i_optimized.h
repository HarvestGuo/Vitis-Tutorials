//
// Copyright (C) 2024, Advanced Micro Devices, Inc. All rights reserved.
// SPDX-License-Identifier: MIT
//
// Author: Chandra Sekar Balakrishnan

int input_del_i[4096] = {-409010054,-221184390,
68228693,365291260,
0,0,
0,0,
-345958296,287513673,
-227083796,21562442,
0,0,
0,0,
-118154640,-449835505,
-269152063,405009119,
0,0,
0,0,
325194404,-54923826,
-260440195,461629399,
0,0,
0,0,
169871338,-288691721,
440729068,-62200629,
0,0,
0,0,
-156819848,49745532,
317777582,-126871366,
0,0,
0,0,
-524880699,-437253269,
454359606,-45620111,
0,0,
0,0,
-47775316,-173408704,
351205057,345571205,
0,0,
0,0,
434242099,-368319020,
298521319,492567514,
0,0,
0,0,
167043413,-459469558,
101781595,444535869,
0,0,
0,0,
239134093,362737200,
242283876,475394453,
0,0,
0,0,
476640672,161347051,
88142056,333249652,
0,0,
0,0,
14945851,-374661882,
332530670,401348205,
0,0,
0,0,
-530906845,-407967099,
522780455,-444994179,
0,0,
0,0,
348986357,74252131,
-520363358,157750815,
0,0,
0,0,
83491605,-404816001,
-445965279,-246019073,
0,0,
0,0,
-246804891,-72159795,
402987238,-465901252,
0,0,
0,0,
338228860,296284613,
-535433261,-29301495,
0,0,
0,0,
198178855,-386865243,
-53273568,-61012059,
0,0,
0,0,
-313715625,318904436,
474095224,52238431,
0,0,
0,0,
425453229,-453582805,
-66119696,-302253322,
0,0,
0,0,
441260452,80012170,
-303895661,386787936,
0,0,
0,0,
61348385,386198600,
364450943,184619326,
0,0,
0,0,
121838505,372379149,
789491,223802640,
0,0,
0,0,
-208338728,415163313,
-393738274,-349966630,
0,0,
0,0,
-326492765,158144999,
-520089322,235864353,
0,0,
0,0,
387646738,-344723967,
151855006,-62921571,
0,0,
0,0,
109843738,-282921054,
-512892690,-448789613,
0,0,
0,0,
370471342,-31720560,
-206838817,-449577606,
0,0,
0,0,
204610258,524290190,
122879260,480379451,
0,0,
0,0,
-403054273,449055742,
417405229,-264893467,
0,0,
0,0,
53274742,327020783,
142349207,212535718,
0,0,
0,0,
523238609,-198637310,
342692536,530844973,
0,0,
0,0,
-352646673,504307347,
466683915,146532712,
0,0,
0,0,
169079461,530976188,
-62517576,-370604363,
0,0,
0,0,
-451145786,17307321,
416420627,431692531,
0,0,
0,0,
6488991,-225833688,
204480160,-50992624,
0,0,
0,0,
-10937224,358288683,
325514375,-244578646,
0,0,
0,0,
-108991446,525211553,
17304902,447224616,
0,0,
0,0,
-133439152,-301733035,
-114819240,-468120084,
0,0,
0,0,
100006021,424287434,
511378326,306122120,
0,0,
0,0,
329978323,36432459,
-86770371,468130294,
0,0,
0,0,
232120536,516691691,
350283846,136713478,
0,0,
0,0,
63312978,-360973577,
-455280039,-130809549,
0,0,
0,0,
-442956869,-110366071,
-436475386,313981698,
0,0,
0,0,
-450950481,-370605935,
485032074,-515245481,
0,0,
0,0,
-136243634,422835906,
118623454,-82451732,
0,0,
0,0,
421796457,-327884041,
-185203561,-21622160,
0,0,
0,0,
-354819695,55382573,
-76022951,262988914,
0,0,
0,0,
-301992449,-28305260,
-2488932,247471058,
0,0,
0,0,
-181137408,-508027700,
-399308811,505082769,
0,0,
0,0,
434903658,-70911004,
415304735,388493007,
0,0,
0,0,
-9307505,151060314,
175905907,-481369290,
0,0,
0,0,
-259914618,-444531632,
113897695,-333505504,
0,0,
0,0,
6228928,-18809512,
151000741,305137888,
0,0,
0,0,
-455467612,326633811,
2091187,-282727546,
0,0,
0,0,
-17229688,-199619940,
231140766,-410516193,
0,0,
0,0,
230944539,507703724,
492764147,-344254482,
0,0,
0,0,
65664097,-403503443,
113840312,-185133359,
0,0,
0,0,
-536603453,464118343,
271588215,-319878124,
0,0,
0,0,
344780753,132247707,
321981393,-8520611,
0,0,
0,0,
360310300,387391061,
-73720404,-523112802,
0,0,
0,0,
354806215,-84287127,
524610597,-456387755,
0,0,
0,0,
-42463110,428536201,
308542296,60295444,
0,0,
0,0,
-444469237,127066611,
245895139,-367857903,
0,0,
0,0,
504698229,365357509,
-502013055,15006463,
0,0,
0,0,
-171177639,69928807,
499710144,515183103,
0,0,
0,0,
118222633,-53345037,
-333510877,-86047718,
0,0,
0,0,
-528424488,59577092,
217252254,-364638757,
0,0,
0,0,
310633069,115992302,
232060495,-307960891,
0,0,
0,0,
-123530326,231268863,
318245085,-421791970,
0,0,
0,0,
403311138,-136050240,
-114364168,-472245473,
0,0,
0,0,
-79555615,-508303882,
398256410,185198067,
0,0,
0,0,
386071226,35061552,
229580713,157292242,
0,0,
0,0,
31002269,514715295,
-519171729,-102556625,
0,0,
0,0,
-108208100,402988194,
-395581770,254934241,
0,0,
0,0,
264372054,-111807531,
13299090,-311419508,
0,0,
0,0,
293540506,-346358442,
278324034,-441325915,
0,0,
0,0,
135000155,389086448,
-81200337,-451216728,
0,0,
0,0,
278199778,400096539,
-355001545,446755256,
0,0,
0,0,
-26936239,502071176,
-459218295,-35855801,
0,0,
0,0,
-249423899,258466616,
56823255,-73656871,
0,0,
0,0,
-416021701,356520512,
-17825720,282592769,
0,0,
0,0,
-496239188,232787863,
-403825156,472714864,
0,0,
0,0,
-460853282,187761886,
314569706,5897396,
0,0,
0,0,
-359990679,-410586057,
268504607,527897590,
0,0,
0,0,
137623020,258610526,
345642066,433328492,
0,0,
0,0,
-360973011,-443020847,
-350096325,-235084593,
0,0,
0,0,
457371313,199693293,
37227161,167254503,
0,0,
0,0,
189602641,533722538,
458624461,-366415229,
0,0,
0,0,
-125836957,291705243,
-463142806,342095822,
0,0,
0,0,
97582842,424732769,
-278457838,-331619914,
0,0,
0,0,
-332465282,279381956,
222233521,-446826813,
0,0,
0,0,
-304679672,-249109216,
-260046133,-186654566,
0,0,
0,0,
391573879,-460854351,
-453371215,265547612,
0,0,
0,0,
-100196922,-408676598,
492631761,-133688433,
0,0,
0,0,
225181259,272107190,
-411574246,272167060,
0,0,
0,0,
433658448,296413078,
-116777862,-435425346,
0,0,
0,0,
-234684154,209853697,
107027052,1577790,
0,0,
0,0,
331485318,20838780,
86968213,-119479451,
0,0,
0,0,
250417942,-227078958,
308543332,-403440936,
0,0,
0,0,
-528738326,455801679,
-173218606,524750711,
0,0,
0,0,
325511941,255452604,
76221521,132835745,
0,0,
0,0,
-248253138,-470882626,
50915371,-83100481,
0,0,
0,0,
-444595988,436661677,
331473045,374542018,
0,0,
0,0,
136646435,357622188,
55965939,479263342,
0,0,
0,0,
439290932,-420871593,
-399578258,-10025363,
0,0,
0,0,
-114880630,3867504,
-86377119,-320470461,
0,0,
0,0,
490014159,16313001,
347013473,382796710,
0,0,
0,0,
-497279652,390729532,
135394295,-221644769,
0,0,
0,0,
293205408,460647901,
362540431,530187796,
0,0,
0,0,
-190966380,-440471554,
-118487781,509608066,
0,0,
0,0,
-203422897,221770926,
-291248169,-469374627,
0,0,
0,0,
-233303818,210836784,
145555734,-213314740,
0,0,
0,0,
429647048,231018821,
121763136,434171648,
0,0,
0,0,
222691980,391118628,
-17628299,-58652167,
0,0,
0,0,
-175967671,454625597,
-457708891,535236867,
0,0,
0,0,
-123862706,-111217096,
-250415983,-80680442,
0,0,
0,0,
-464511522,35194188,
240056417,-169548340,
0,0,
0,0,
135796597,60887642,
431755980,392498046,
0,0,
0,0,
1711554,325908814,
49875345,173936594,
0,0,
0,0,
-174583986,36767507,
-84734099,46007654,
0,0,
0,0,
-12578153,-40958706,
-227999998,290720228,
0,0,
0,0,
113698096,-408556587,
-287181241,1631887,
0,0,
0,0,
-245365502,461568763,
319941721,-401862083,
0,0,
0,0,
-308351963,-467869343,
34084793,-419296119,
0,0,
0,0,
485365558,-69672591,
180620740,-527493339,
0,0,
0,0,
277407814,359271097,
-515113174,-176621097,
0,0,
0,0,
331674891,-978795,
188875294,240579051,
0,0,
0,0,
405071535,425714948,
51188646,206628744,
0,0,
0,0,
172946925,-133619976,
328011971,-126030788,
0,0,
0,0,
251981080,-379511557,
532016917,277410614,
0,0,
0,0,
-301463301,273211613,
107020820,-31392699,
0,0,
0,0,
3536355,200930339,
-437185976,505740368,
0,0,
0,0,
-194766798,-347345858,
-86375352,-491328431,
0,0,
0,0,
119728050,389735031,
-22878761,-305663425,
0,0,
0,0,
-405534059,447156093,
-424218778,135193781,
0,0,
0,0,
262343206,-501612065,
280166419,-458157390,
0,0,
0,0,
-219876359,-127468976,
154475790,187112165,
0,0,
0,0,
459076230,156427895,
429005377,-219933032,
0,0,
0,0,
-279780444,-287570202,
470870656,-260109280,
0,0,
0,0,
-440791211,-308408193,
-416545160,-82047601,
0,0,
0,0,
-327672060,-151314982,
-459998227,269608237,
0,0,
0,0,
-169013502,348065263,
506926324,12255771,
0,0,
0,0,
-524352286,-66849072,
51190391,13769610,
0,0,
0,0,
384900865,-189138845,
267385181,-190309436,
0,0,
0,0,
408809172,-293343061,
14555382,-135192670,
0,0,
0,0,
-386733818,-304749564,
-294255527,142532877,
0,0,
0,0,
-8315468,347801969,
408413236,355726881,
0,0,
0,0,
259714311,-137301164,
267514416,169476030,
0,0,
0,0,
26285174,-72948320,
-52889696,-395829986,
0,0,
0,0,
-253814781,-225770730,
-211097373,13887834,
0,0,
0,0,
130357792,-282913856,
-85396609,140242635,
0,0,
0,0,
-214955937,-334888179,
-96463333,271583255,
0,0,
0,0,
-261746759,292162292,
89843215,137362892,
0,0,
0,0,
426971400,-400352136,
-41806610,357163357,
0,0,
0,0,
-269878817,50797283,
-238162605,-286329710,
0,0,
0,0,
134347455,235733859,
-408221110,457702828,
0,0,
0,0,
-246680326,163710638,
-50063074,-448852178,
0,0,
0,0,
-164959857,-503519246,
-515507663,221641945,
0,0,
0,0,
101908624,20707741,
-134410841,452324468,
0,0,
0,0,
-155712285,-403366007,
-268176491,-510525822,
0,0,
0,0,
-489417164,452517960,
-529069456,-347208528,
0,0,
0,0,
-12972656,179372587,
450428484,176165336,
0,0,
0,0,
63627774,-79043974,
-170386172,-260366578,
0,0,
0,0,
-36371181,-435491452,
-324345641,-107470890,
0,0,
0,0,
-225178236,-59962254,
270722366,-14542632,
0,0,
0,0,
344384902,500371360,
-45342972,57403714,
0,0,
0,0,
-468709141,-391448481,
63117261,-427562722,
0,0,
0,0,
-134748197,-188420229,
-142218775,-161606400,
0,0,
0,0,
473694940,65207732,
-172562428,304156495,
0,0,
0,0,
33167813,-83031651,
268508251,133168951,
0,0,
0,0,
136116193,285409930,
413076692,-315560304,
0,0,
0,0,
364059952,-440734562,
-188217249,-398584873,
0,0,
0,0,
268430136,-253167089,
34662255,419436386,
0,0,
0,0,
483917338,501086275,
456138405,126945394,
0,0,
0,0,
-371462422,-412814986,
-472319179,55371255,
0,0,
0,0,
-382992052,-474610047,
258739514,271587591,
0,0,
0,0,
-515637867,-50457931,
-96278584,279964299,
0,0,
0,0,
-486335661,-324658992,
-392038826,216725426,
0,0,
0,0,
-206511005,-338761755,
-214100148,-274664342,
0,0,
0,0,
-474026797,-9233451,
-215547898,-438050744,
0,0,
0,0,
176360704,148564866,
59378477,-267383228,
0,0,
0,0,
360841991,173924508,
294915248,-209517375,
0,0,
0,0,
342030706,-105509103,
93514006,189665840,
0,0,
0,0,
-215747653,111153589,
-236850370,-117434458,
0,0,
0,0,
-88414389,-263189417,
-434445971,536537144,
0,0,
0,0,
254802614,-25236488,
-25499958,53995256,
0,0,
0,0,
-335545328,-73726414,
16508544,-468583884,
0,0,
0,0,
-276699271,-342756741,
127736118,-384959214,
0,0,
0,0,
-229828959,-116721106,
-446494681,-180686257,
0,0,
0,0,
-335932972,-8978364,
67377812,-193533759,
0,0,
0,0,
-90237984,-8002667,
143581718,-364901020,
0,0,
0,0,
320333910,-98897420,
376366784,-203952341,
0,0,
0,0,
50130206,229708129,
-365359994,-68289121,
0,0,
0,0,
-358806064,-405998878,
-375384171,-404939606,
0,0,
0,0,
-414117720,-368179271,
-68878985,-497950458,
0,0,
0,0,
145889455,55513079,
-12445718,158525594,
0,0,
0,0,
206968330,438890613,
-122294036,527167648,
0,0,
0,0,
192672228,479065981,
-474153885,-24441980,
0,0,
0,0,
-74775064,148315041,
445775534,-292290030,
0,0,
0,0,
117113766,481169033,
15265598,465900972,
0,0,
0,0,
-94965889,315358269,
-466224650,-92999278,
0,0,
0,0,
-533206881,344451234,
218821515,420879409,
0,0,
0,0,
-285085906,-252703673,
282717189,-131064837,
0,0,
0,0,
163570583,239207487,
339735477,-268766939,
0,0,
0,0,
-272760096,-172354028,
59313457,-430052670,
0,0,
0,0,
344591265,-192150876,
476185978,-414062248,
0,0,
0,0,
24504103,108195349,
245829366,493614740,
0,0,
0,0,
-196409498,-397347941,
347401723,-475918181,
0,0,
0,0,
252769643,377951517,
-296557117,-265482864,
0,0,
0,0,
-122033972,-113384481,
-525461132,-430317352,
0,0,
0,0,
-497815254,514580573,
-413067908,48699529,
0,0,
0,0,
-208540981,-84479103,
249371299,-401608921,
0,0,
0,0,
-84410355,123336670,
116129471,-75493422,
0,0,
0,0,
357098646,83160910,
-105448910,-318562567,
0,0,
0,0,
462363891,-282787152,
-223287116,486400852,
0,0,
0,0,
-330700783,-344384151,
-156827998,-290062754,
0,0,
0,0,
422380463,-199299316,
-348262998,52032887,
0,0,
0,0,
87885204,221640914,
-212343090,37422251,
0,0,
0,0,
480968792,442764785,
-346356544,-39198038,
0,0,
0,0,
-318371621,6480625,
-85519816,-318236907,
0,0,
0,0,
-303958825,462484881,
447154034,-494869051,
0,0,
0,0,
224192594,-141161337,
-221255495,-782685,
0,0,
0,0,
-111874790,-263583922,
-529590468,-314172767,
0,0,
0,0,
129896778,135796386,
-305389985,164891192,
0,0,
0,0,
-515836432,107216936,
306518166,-303297601,
0,0,
0,0,
-295441084,482669778,
91823221,326769870,
0,0,
0,0,
-335470837,252971667,
503324346,28908147,
0,0,
0,0,
-83944681,-187567162,
-459399540,340925856,
0,0,
0,0,
-283838068,-324595416,
7725806,121830395,
0,0,
0,0,
327224863,-320799638,
494659573,-982101,
0,0,
0,0,
223469982,-376182332,
-138279233,-443349648,
0,0,
0,0,
471590629,-224649625,
-472441342,-84481917,
0,0,
0,0,
-125899936,-215220448,
-267973966,456005042,
0,0,
0,0,
521083680,-253500932,
177280316,-374867925,
0,0,
0,0,
-148571921,-464448576,
479983072,427418516,
0,0,
0,0,
329448123,376905471,
-169937523,-167773846,
0,0,
0,0,
261940772,254731611,
-59769266,312669507,
0,0,
0,0,
-419630276,-186321884,
-437585060,57538905,
0,0,
0,0,
460916341,433251153,
183956460,-358740144,
0,0,
0,0,
-109704317,-441651911,
-271184198,-1314945,
0,0,
0,0,
112268976,-93776081,
-192343604,-444202543,
0,0,
0,0,
-36956927,-531044149,
261616135,84871597,
0,0,
0,0,
-456722397,517074058,
36047269,512234078,
0,0,
0,0,
-204804113,397744328,
262606365,84607574,
0,0,
0,0,
-164889958,-10939576,
118094790,-114890320,
0,0,
0,0,
-253821262,-129563607,
-413136583,370336727,
0,0,
0,0,
-58984228,-492365107,
131049,-201786072,
0,0,
0,0,
162460842,-115600804,
-125964683,241304099,
0,0,
0,0,
117446972,484963250,
476838870,-6154503,
0,0,
0,0,
528147249,386402168,
131523961,-40701461,
0,0,
0,0,
419824678,362211399,
-145690769,481559213,
0,0,
0,0,
-31388587,-136576512,
-427094982,85648107,
0,0,
0,0,
-78646598,270793572,
189657731,-455547341,
0,0,
0,0,
-106619328,41488166,
-422114616,342626976,
0,0,
0,0,
-535553173,-9628968,
175182082,157746403,
0,0,
0,0,
535421394,163963408,
263853066,383387857,
0,0,
0,0,
122417529,296421568,
-49475748,513018085,
0,0,
0,0,
-253293397,-125373171,
-221506287,-389474057,
0,0,
0,0,
128052409,-433519828,
-449707389,104325440,
0,0,
0,0,
-378539951,365950003,
-505090709,393800199,
0,0,
0,0,
197980566,159645131,
518578838,-55381699,
0,0,
0,0,
-382793993,-244310577,
198903981,242149741,
0,0,
0,0,
172287222,-204009564,
-169416619,312155709,
0,0,
0,0,
242552225,-359865096,
141489088,399711100,
0,0,
0,0,
-276303544,382343153,
-318500871,497291809,
0,0,
0,0,
-524883088,-173342136,
42405357,188219905,
0,0,
0,0,
-469570529,30474096,
-276431108,32570725,
0,0,
0,0,
226694578,-308025279,
517465219,-33161062,
0,0,
0,0,
-240312871,-159452291,
-68950357,293922912,
0,0,
0,0,
145090799,33747068,
27452374,531491126,
0,0,
0,0,
252503930,-362351603,
193849583,-9763804,
0,0,
0,0,
527038650,236062729,
-24572723,-45675621,
0,0,
0,0,
152048774,514465751,
476840693,228262953,
0,0,
0,0,
85594972,-78245185,
518985475,114486413,
0,0,
0,0,
-330428394,-130092412,
-163968527,-396886266,
0,0,
0,0,
323488099,-437651011,
-323225572,-250156123,
0,0,
0,0,
331881887,-357624586,
-310837162,-348654911,
0,0,
0,0,
-84864874,-216401144,
249166177,268493882,
0,0,
0,0,
-36632755,-100864940,
513142225,12257372,
0,0,
0,0,
-15855761,-466876551,
56753720,-122422699,
0,0,
0,0,
-33690514,27589741,
-155786031,-208279557,
0,0,
0,0,
-145488923,327882255,
506065911,-198184262,
0,0,
0,0,
415501894,-183168474,
421390822,124263447,
0,0,
0,0,
-146670684,-366734521,
-464840789,-461510592,
0,0,
0,0,
-274852365,65338366,
-27194227,-109967216,
0,0,
0,0,
-238877953,446631940,
-428469588,-46860315,
0,0,
0,0,
-410131299,256504007,
2554207,459989465,
0,0,
0,0,
-457903998,-462162358,
417792731,424665777,
0,0,
0,0,
49028957,-489810429,
-469230030,249961529,
0,0,
0,0,
-399838063,-200205802,
-362618834,172427474,
0,0,
0,0,
500368187,230168075,
-391637556,196016982,
0,0,
0,0,
-49612188,-516747331,
225510175,-285019211,
0,0,
0,0,
302972618,-396039729,
292746609,352262454,
0,0,
0,0,
506720887,-251650437,
454096750,-314050003,
0,0,
0,0,
229969995,167909282,
-476575686,123400325,
0,0,
0,0,
-413932129,-30285599,
409734471,-254338895,
0,0,
0,0,
-122417719,-473294258,
510658227,461963204,
0,0,
0,0,
-434705417,228134396,
-116661899,5766493,
0,0,
0,0,
-304539494,76804180,
-317721207,-266072794,
0,0,
0,0,
46197099,267256784,
488243031,-248577987,
0,0,
0,0,
-225116517,211877671,
318048371,-479589243,
0,0,
0,0,
119016624,193532908,
104789250,515770620,
0,0,
0,0,
61379,514525234,
151249387,-126222280,
0,0,
0,0,
-477951445,-298574282,
-387585726,-145356601,
0,0,
0,0,
-115800710,-302647905,
-268103225,-158722977,
0,0,
0,0,
457504508,-382925931,
270920694,205649035,
0,0,
0,0,
74259935,214367290,
37748023,-221843939,
0,0,
0,0,
63432983,-213257458,
-526253228,525271632,
0,0,
0,0,
-94045169,199099467,
372180410,189858685,
0,0,
0,0,
122876203,-390535153,
-515247939,-82445259,
0,0,
0,0,
-28770463,-59109341,
459996266,443159576,
0,0,
0,0,
16906525,244061661,
-89253045,-216400309,
0,0,
0,0,
-200868871,-9822539,
-25498566,-504628266,
0,0,
0,0,
-176620802,-523500210,
-266858192,154656909,
0,0,
0,0,
-463207223,-350551392,
400945234,-173539231,
0,0,
0,0,
-2887011,-425199212,
-328859788,535687246,
0,0,
0,0,
120976185,302050914,
-298580247,39914507,
0,0,
0,0,
-489821384,-32118641,
411757816,144900345,
0,0,
0,0,
301273828,-72476440,
44957338,-27532435,
0,0,
0,0,
511047230,238032935,
-9505574,190833276,
0,0,
0,0,
231869042,-526060024,
86045040,-326430609,
0,0,
0,0,
429191842,112520045,
-397941675,279176959,
0,0,
0,0,
262348607,30602983,
-91684132,-238877595,
0,0,
0,0,
-249821290,-492572633,
20842296,-447355805,
0,0,
0,0,
-51322522,312740620,
-146403282,380498387,
0,0,
0,0,
-110165562,260054736,
152561190,-149885345,
0,0,
0,0,
-45477022,-231476293,
-390731492,-409346021,
0,0,
0,0,
268306852,306192358,
528615778,139925320,
0,0,
0,0,
401607027,-150804399,
24052402,-346690010,
0,0,
0,0,
314505572,-469043252,
-4069958,254344968,
0,0,
0,0,
-385748122,347136086,
3926034,297931760,
0,0,
0,0,
-301859030,-283043489,
-5110758,-508030465,
0,0,
0,0,
-113177978,-49995811,
23782492,-124642680,
0,0,
0,0,
-273680461,-295564953,
-419487913,36707312,
0,0,
0,0,
377363593,481236700,
145428572,-144440669,
0,0,
0,0,
-182444033,508500606,
216265081,197652852,
0,0,
0,0,
163838013,-323285071,
-142017417,-172229951,
0,0,
0,0,
313653246,303292908,
-268039063,-226681708,
0,0,
0,0,
522384643,-351866899,
535298399,-294446774,
0,0,
0,0,
-11800403,268888299,
493754007,-323948758,
0,0,
0,0,
372313265,-317389929,
-299032649,43514476,
0,0,
0,0,
252443886,386537757,
153553242,318774022,
0,0,
0,0,
-412156252,-498329374,
115139823,404807773,
0,0,
0,0,
-424473006,24318824,
-34728322,103160517,
0,0,
0,0,
-295638324,-117042921,
-448981163,-332275279,
0,0,
0,0,
87689019,497025616,
-459273715,-426369283,
0,0,
0,0,
203753265,-292423497,
-421193512,-284562462,
0,0,
0,0,
257560665,423041897,
65538716,163504922,
0,0,
0,0,
462879518,408160529,
26798122,402190500,
0,0,
0,0,
-518655195,-43708221,
-405464342,510074518,
0,0,
0,0,
512560941,78059691,
-281877724,132776194,
0,0,
0,0,
93457818,-63563114,
-309468547,70650437,
0,0,
0,0,
-260243622,50469319,
-114157639,122750559,
0,0,
0,0,
-11659400,191040040,
-373879393,-462676857,
0,0,
0,0,
-86907725,-189273340,
-93316185,125900169,
0,0,
0,0,
481564901,447156721,
-401742519,-2102672,
0,0,
0,0,
81388749,168235580,
100205401,8778826,
0,0,
0,0,
-525930233,-284944516,
-119274338,-423096418,
0,0,
0,0,
162004610,-167902444,
-532547628,520679718,
0,0,
0,0,
-199883430,393077820,
283896354,-358093366,
0,0,
0,0,
192939358,150467467,
348185118,127788280,
0,0,
0,0,
469040503,-536284798,
-325781066,92208758,
0,0,
0,0,
423692307,-487193536,
-367001715,-142207477,
0,0,
0,0,
99677945,33492761,
-390204013,137171821,
0,0,
0,0,
-89318518,-10422353,
48098278,-36563265,
0,0,
0,0,
159978182,-239140856,
-237113742,-395831087,
0,0,
0,0,
-247207164,430642690,
184805482,5902111,
0,0,
0,0,
512171078,-368777165,
365683176,-180615478,
0,0,
0,0,
-27520763,214171582,
-89329934,-445571714,
0,0,
0,0,
-353435899,-356114987,
-312809758,-168040265,
0,0,
0,0,
58657932,-213911779,
366609971,-175894451,
0,0,
0,0,
-95753401,243073159,
230431758,-505671912,
0,0,
0,0,
284499095,369555157,
189063194,491199431,
0,0,
0,0,
-158604658,-194512048,
-257038683,-326043148,
0,0,
0,0,
-232450038,-349374912,
-512816444,368971085,
0,0,
0,0,
160360590,-364830726,
-348985805,-319548030,
0,0,
0,0,
195030800,-483851540,
-244247358,-132967064,
0,0,
0,0,
-329256976,75107389,
231537529,-242870460,
0,0,
0,0,
348781917,-170850330,
-56943944,-393941240,
0,0,
0,0,
261684556,-170138452,
-448202007,430119521,
0,0,
0,0,
-178000256,-155449121,
508887681,-354738342,
0,0,
0,0,
-478216703,-424483862,
-61013607,447998097,
0,0,
0,0,
205069568,-121237503,
-396297291,-241441277,
0,0,
0,0,
36241699,465701524,
97457697,-491250334,
0,0,
0,0,
-316608342,185867324,
321985988,-394846915,
0,0,
0,0,
-451470352,475201700,
287433124,28635087,
0,0,
0,0,
-522779113,-479265646,
451604727,-144380094,
0,0,
0,0,
373032840,291375801,
-200875300,252895862,
0,0,
0,0,
196667475,-311630487,
-158982306,11076543,
0,0,
0,0,
-389737370,504041520,
405011312,53155232,
0,0,
0,0,
302325020,120918150,
334437135,-377295811,
0,0,
0,0,
-382659625,12313500,
-512693986,415107625,
0,0,
0,0,
-81003500,-286850159,
443220140,64161106,
0,0,
0,0,
-385816770,-210362993,
127066789,310834549,
0,0,
0,0,
220922025,-208084436,
-230102480,-400432956,
0,0,
0,0,
-265621943,40563770,
86382461,-352918188,
0,0,
0,0,
-517084913,-343274590,
496826907,259452464,
0,0,
0,0,
-14947279,-127079293,
-367066497,499443824,
0,0,
0,0,
-481817074,44035619,
-151381987,-56430370,
0,0,
0,0,
-476382206,284037114,
-525277558,-500563165,
0,0,
0,0,
-146152428,-151054514,
-88539431,78977017,
0,0,
0,0,
-355330276,351607333,
-271970917,453053327,
0,0,
0,0,
-196797,114958299,
140244029,275452449,
0,0,
0,0,
209657006,-341578386,
16113685,-448666357,
0,0,
0,0,
281408099,-175310912,
31923505,-409140766,
0,0,
0,0,
194843332,408871318,
-104197908,-276695926,
0,0,
0,0,
-183429711,15270241,
-82970704,-398128627,
0,0,
0,0,
-509600141,288823771,
531622432,-275906037,
0,0,
0,0,
-272306924,-253749414,
338820608,418714853,
0,0,
0,0,
-136835982,458623031,
-323355860,395047091,
0,0,
0,0,
472905095,-342885365,
265165214,363136625,
0,0,
0,0,
478146407,494534384,
-17227860,206378790,
0,0,
0,0,
-242280423,-452136640,
137043911,424086348,
0,0,
0,0,
-193062227,298916532,
37810929,-473489769,
0,0,
0,0,
-221374148,-461234486,
528220515,-165945147,
0,0,
0,0,
422112101,319949303,
1439317,-31261011,
0,0,
0,0,
258871557,288814221,
-44426971,216269552,
0,0,
0,0,
-190060552,-301199668,
499180216,-49147720,
0,0,
0,0,
-353034687,213580084,
352125629,-502272222,
0,0,
0,0,
239344723,-403375141,
112860766,462096000,
0,0,
0,0,
-347864858,-225175779,
159966775,247534835,
0,0,
0,0,
-264890070,-128064538,
261682774,431487537,
0,0,
0,0,
78842951,-336532915,
7346873,420275508,
0,0,
0,0,
109962080,-9957467,
324331942,-275062461,
0,0,
0,0,
-120983160,-5183005,
-31856064,-109449572,
0,0,
0,0,
-9838580,-453842502,
166127325,-1632081,
0,0,
0,0,
-320213950,-149026272,
460192192,-134810682,
0,0,
0,0,
122625152,-284818375,
-290849083,-476976311,
0,0,
0,0,
-169875062,-408549739,
98506545,-171574912,
0,0,
0,0,
-312680118,-17425704,
-46667619,163779487,
0,0,
0,0,
-69797106,15794523,
531424322,-161486001,
0,0,
0,0,
-196207438,296553860,
-531820312,-535233306,
0,0,
0,0,
-131917188,-242937894,
89979149,536813070,
0,0,
0,0,
-478606468,37755203,
-459279885,-251135531,
0,0,
0,0,
289146063,299310932,
-284692153,23130527,
0,0,
0,0,
-87035834,-312860990,
-484566511,162391709,
0,0,
0,0,
-334428977,-318964684,
446107965,-93396774,
0,0,
0,0,
507963306,230885318,
387511698,524942634,
0,0,
0,0,
-129040095,135994753,
387575983,-154473598,
0,0,
0,0,
-369354294,480241550,
-33677799,-45089616,
0,0,
0,0,
384819744,158396744,
373366274,-456658477,
0,0,
0,0,
372571795,62463695,
-27463522,-287172549,
0,0,
0,0,
-299760168,-528881375,
146340894,175826193,
0,0,
0,0,
-184423335,360183372,
-245559857,-119794703,
0,0,
0,0,
-387651035,-224927705,
278663410,-335942905,
0,0,
0,0,
-442105485,-57808548,
524678557,210238163,
0,0,
0,0,
-284551385,62906943,
-454300825,498798108,
0,0,
0,0,
-339672420,328793466,
232254275,-50797957,
0,0,
0,0,
-129753555,-226236228,
-498343147,-172427492,
0,0,
0,0,
398594114,42201388,
-121037877,-217651142,
0,0,
0,0,
-275322969,-333316167,
-317645325,4254603,
0,0,
0,0,
214830351,16057473,
532149187,186190660,
0,0,
0,0,
490730516,397015771,
-227012831,158997327,
0,0,
0,0,
-283110161,458035159,
-92084107,-236190003,
0,0,
0,0,
-292089393,456852973,
67757087,-467722412,
0,0,
0,0,
329583502,267187630,
-312141850,-7006687,
0,0,
0,0,
287370665,-387387499,
-121961716,123400127,
0,0,
0,0,
267185978,-458563359,
-96342443,-204272636,
0,0,
0,0,
68226502,500427666,
68749928,-480375289,
0,0,
0,0,
-336459949,467198896,
-475588505,81072984,
0,0,
0,0,
-432272519,106491202,
-323358195,-173346179,
0,0,
0,0,
-92929273,169146134,
-352851002,-272032123,
0,0,
0,0,
94370692,364769775,
-462089132,438564220,
0,0,
0,0,
473500091,277013388,
-334044555,494468971,
0,0,
0,0,
427433036,-228786644,
284549265,28372646,
0,0,
0,0,
267715941,-20649397,
4135093,-396230470,
0,0,
0,0,
-35315933,-28317935,
148314259,112659330,
0,0,
0,0,
-469558439,-444469819,
-254809089,-77915912,
0,0,
0,0,
-400482377,-269285854,
-453763251,268566739,
0,0,
0,0,
171115476,213115876,
8985879,26534030,
0,0,
0,0,
-187304145,185593402,
495380203,-105178503,
0,0,
0,0,
-95674818,-337579679,
-393549966,402383699,
0,0,
0,0,
-328142316,263061710,
128256371,-54322480,
0,0,
0,0,
-106698636,474419948,
-106891640,-415753704,
0,0,
0,0,
306249030,520030441,
-127399264,-162064766,
0,0,
0,0,
366943947,-494530262,
380574450,483847979,
0,0,
0,0,
-310567532,350879036,
166727789,371519332,
0,0,
0,0,
122612488,-138743786,
-523169242,-434761227,
0,0,
0,0,
-270010447,-135005229,
-89318618,-145091489,
0,0,
0,0,
110683030,19272691,
-165939809,-18608968,
0,0,
0,0,
-99032233,299566545,
381030963,102823654,
0,0,
0,0,
-83493884,-90308262,
475270195,522119763,
0,0,
0,0,
493283497,-472713695,
-86503694,-142676612,
0,0,
0,0,
103423966,176299013,
-146476473,220524736,
0,0,
0,0,
79292435,413069852,
-413338436,-412950326,
0,0,
0,0,
58515544,-250281535,
332456297,-416352941,
0,0,
0,0,
-377089270,-490011689,
75571048,-287959428,
0,0,
0,0,
513795820,244585690,
-246283835,416287333,
0,0,
0,0,
-223281759,-223278493,
490214389,-384567644,
0,0,
0,0,
-273278702,-525731645,
-415570299,-33231606,
0,0,
0,0,
-178328496,-485953140,
500101963,-193926914,
0,0,
0,0,
-226755681,238092323,
527834690,223480339,
0,0,
0,0,
168885427,166390964,
-4055060,-167372230,
0,0,
0,0,
-374873277,295312314,
338949206,-220785550,
0,0,
0,0,
498342216,3468881,
-404809108,-74325924,
0,0,
0,0,
26156058,71835049,
-308670898,145950452,
0,0,
0,0,
290263770,6027888,
-355920563,-297528516,
0,0,
0,0,
319749871,45803034,
439089377,-59106647,
0,0,
0,0,
275324806,-475327271,
72872288,-468777535,
0,0,
0,0,
40894937,370342613,
95549037,-443095640,
0,0,
0,0,
24644529,-110356079,
284693297,36307661,
0,0,
0,0,
404689254,201325168,
426057373,505670577,
0,0,
0,0,
210038773,-22411757,
204469253,-332728361,
0,0,
0,0,
-507181615,-309725549,
303964060,-486868185,
0,0,
0,0,
-501539806,226165028,
-217709828,390140553,
0,0,
0,0,
-340062506,422700853,
-210631318,-460717096,
0,0,
0,0,
-164829509,287498962,
-219943347,159121631,
0,0,
0,0,
-142076411,371127242,
-219670806,-158732454,
0,0,
0,0,
412226656,45809511,
82830116,416219376,
0,0,
0,0,
224518802,-396101059,
-351528698,-132904367,
0,0,
0,0};