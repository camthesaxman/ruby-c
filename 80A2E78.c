signed int __fastcall sub_80A2E78(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r7@1
  int v3; // r4@3
  int v4; // r1@3
  int v5; // r0@3
  int v6; // r2@3
  int v7; // r3@3
  int v8; // r4@3
  int v9; // r0@3
  int v10; // r2@3
  int v11; // r3@3
  int v12; // r4@3
  int v13; // r2@3
  int v14; // r3@3
  char v16; // [sp+0h] [bp-28h]@1
  char v17; // [sp+1h] [bp-27h]@1
  char v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@3

  v1 = a1;
  v16 = 0;
  v17 = 0;
  v18 = -1;
  v2 = 6;
  do
  {
    if ( !*(_WORD *)(36 * v2 + 0x20282A0) )
    {
      v3 = 36 * v2 + 33718912;
      v19 = 33718912;
      v4 = 36 * GetMonData(a1, 64, 33718912) + 33718912;
      v5 = *(_DWORD *)v4;
      v6 = *(_DWORD *)(v4 + 4);
      v7 = *(_DWORD *)(v4 + 8);
      v4 += 12;
      *(_DWORD *)v3 = v5;
      *(_DWORD *)(v3 + 4) = v6;
      *(_DWORD *)(v3 + 8) = v7;
      v8 = 36 * v2 + 33718924;
      v9 = *(_DWORD *)v4;
      v10 = *(_DWORD *)(v4 + 4);
      v11 = *(_DWORD *)(v4 + 8);
      v4 += 12;
      *(_DWORD *)v8 = v9;
      *(_DWORD *)(v8 + 4) = v10;
      *(_DWORD *)(v8 + 8) = v11;
      v12 = 36 * v2 + 33718936;
      v13 = *(_DWORD *)(v4 + 4);
      v14 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)v12 = *(_DWORD *)v4;
      *(_DWORD *)(v12 + 4) = v13;
      *(_DWORD *)(v12 + 8) = v14;
      *(_WORD *)(36 * GetMonData(v1, 64, v13) + 0x20282A0) = 0;
      SetMonData(v1, 64, (int)&v18);
      SetMonData(v1, 12, (int)&v16);
      return v2;
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return 255;
}
