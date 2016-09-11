int sub_8047ACC()
{
  int *v0; // r4@1
  signed int v1; // r3@1
  signed int v2; // r2@1
  int v3; // r6@2
  int v4; // r7@2
  int v5; // r1@2
  int v6; // r6@2
  int v7; // r7@2
  int v8; // r1@2
  int v9; // r6@2
  int v10; // r7@2
  int v12; // [sp+10h] [bp-4h]@0

  v0 = &dword_30048A0;
  v1 = 33710356;
  v2 = 15;
  do
  {
    v3 = v0[1];
    v4 = v0[2];
    *(_DWORD *)v1 = *v0;
    *(_DWORD *)(v1 + 4) = v3;
    *(_DWORD *)(v1 + 8) = v4;
    v5 = v1 + 12;
    v6 = v0[4];
    v7 = v0[5];
    *(_DWORD *)v5 = v0[3];
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    v8 = v1 + 24;
    v9 = v0[7];
    v10 = v0[8];
    *(_DWORD *)v8 = v0[6];
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = v10;
    v0 += 9;
    v1 += 36;
    --v2;
  }
  while ( v2 >= 0 );
  return v12;
}
