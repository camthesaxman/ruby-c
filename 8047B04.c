int save_deserialize_npcs()
{
  signed int v0; // r4@1
  int *v1; // r3@1
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

  v0 = 33710356;
  v1 = &dword_30048A0;
  v2 = 15;
  do
  {
    v3 = *(_DWORD *)(v0 + 4);
    v4 = *(_DWORD *)(v0 + 8);
    *v1 = *(_DWORD *)v0;
    v1[1] = v3;
    v1[2] = v4;
    v5 = (int)(v1 + 3);
    v6 = *(_DWORD *)(v0 + 16);
    v7 = *(_DWORD *)(v0 + 20);
    *(_DWORD *)v5 = *(_DWORD *)(v0 + 12);
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    v8 = (int)(v1 + 6);
    v9 = *(_DWORD *)(v0 + 28);
    v10 = *(_DWORD *)(v0 + 32);
    *(_DWORD *)v8 = *(_DWORD *)(v0 + 24);
    *(_DWORD *)(v8 + 4) = v9;
    *(_DWORD *)(v8 + 8) = v10;
    v0 += 36;
    v1 += 9;
    --v2;
  }
  while ( v2 >= 0 );
  return v12;
}
