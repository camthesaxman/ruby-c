int sub_80B2D1C()
{
  void *v0; // r4@1
  signed int v1; // r3@1
  signed int v2; // r2@1
  int v3; // r6@2
  int v4; // r7@2
  int v5; // r1@2
  int v6; // r6@2
  int v7; // r7@2
  int v8; // r1@2
  int v9; // r6@2
  int v11; // [sp+10h] [bp-4h]@0

  v0 = &gUnknown_083CC5D0;
  v1 = 33719600;
  v2 = 7;
  do
  {
    v3 = *((_DWORD *)v0 + 1);
    v4 = *((_DWORD *)v0 + 2);
    *(_DWORD *)v1 = *(_DWORD *)v0;
    *(_DWORD *)(v1 + 4) = v3;
    *(_DWORD *)(v1 + 8) = v4;
    v5 = v1 + 12;
    v6 = *((_DWORD *)v0 + 4);
    v7 = *((_DWORD *)v0 + 5);
    *(_DWORD *)v5 = *((_DWORD *)v0 + 3);
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    v8 = v1 + 24;
    v9 = *((_DWORD *)v0 + 7);
    *(_DWORD *)v8 = *((_DWORD *)v0 + 6);
    *(_DWORD *)(v8 + 4) = v9;
    v0 = (char *)v0 + 32;
    v1 += 32;
    --v2;
  }
  while ( v2 >= 0 );
  return v11;
}
