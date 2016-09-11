int sub_8123740()
{
  unsigned int v0; // r4@1
  signed int v1; // r2@3
  unsigned int v2; // r3@3
  signed int v3; // r3@5
  unsigned int v4; // r4@5
  int v6; // [sp+0h] [bp-20h]@4
  __int16 v7; // [sp+4h] [bp-1Ch]@6
  int v8; // [sp+1Ch] [bp-4h]@7

  v0 = 0;
  sub_8123FBC(0);
  gSpriteCoordOffsetX = 0;
  sub_807C9B4(0);
  do
  {
    *(_DWORD *)(4 * v0 + 0x202F8D8) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x13 );
  ResetTasks();
  ResetSpriteData();
  ResetPaletteFade();
  v1 = 0x2000000;
  v2 = 0x20000;
  do
  {
    v6 = 0;
    v40000D4 = &v6;
    v40000D8 = v1;
    v40000DC = -2063596544;
    v1 += 4096;
    v2 -= 4096;
  }
  while ( v2 > 0x1000 );
  v6 = 0;
  v40000D4 = &v6;
  v40000D8 = v1;
  v40000DC = (v2 >> 2) | 0x85000000;
  v2039274 = 0;
  v3 = 100663296;
  v4 = 98304;
  do
  {
    v7 = 0;
    v40000D4 = &v7;
    v40000D8 = v3;
    v40000DC = -2130704384;
    v3 += 4096;
    v4 -= 4096;
  }
  while ( v4 > 0x1000 );
  v6 = 0;
  v7 = 0;
  v40000D4 = &v7;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  warp_in();
  dword_300485C = 0;
  SetMainCallback2((int)c2_load_new_map);
  return v8;
}
