% Copyright (C) 2024, Advanced Micro Devices, Inc. All rights reserved.
% SPDX-License-Identifier: MIT
%
% Author: Bachir Berkane, Fidus Systems


function writeFiles(dir)
genSnapshotsDir = './Snapshots/GeneratedSnapshots';
sDirPath   = genSnapshotsDir;
sDirStruct = dir([genSnapshotsDir '/*.bin']);

nSnapshots = size(sDirStruct,1);
wDir = './ToPeifang';
for s=1: nSnapshots

    fileName     = strcat(sDirPath, '/snapshot_', num2str(s), ".bin");
    fileID       = fopen(fileName,'r');
    snapshotIQ   = fread(fileID, 'single');
    fclose(fileID);
    clear fileID;
    A = reshape (snapshotIQ,  2, []);
    A = single(A.');
    Acplx = complex(A(:,1), A(:,2));
    fileName = strcat(wDir, '/music_input_A_', num2str(s), ".txt");
    save2File(Acplx, fileName,  'col');
brk=1;
end


end
end
