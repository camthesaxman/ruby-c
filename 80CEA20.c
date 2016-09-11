int __fastcall sub_80CEA20(unsigned __int8 a1)
{
  unsigned __int8 v1; // r9@1
  int v2; // r3@1
  unsigned int v3; // r3@2
  unsigned int v4; // r2@2
  signed int v5; // r4@4
  int v6; // r3@5
  unsigned __int16 v7; // r12@5
  unsigned int v8; // r3@6
  unsigned int v9; // r2@6
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)IndexOfSpritePaletteTag(gUnknown_083D712C[0]);
  if ( v2 != 255 )
  {
    v3 = (unsigned int)((v2 << 20) + 0x1000000) >> 16;
    v4 = 1;
    do
    {
      *(_WORD *)(2 * (v3 + v4) + 0x202EEC8) = gUnknown_083D712C[v4];
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 5 );
  }
  v5 = 1;
  do
  {
    v6 = (unsigned __int8)AllocSpritePalette(gUnknown_083D712C[6 * v5]);
    v7 = v5 + 1;
    if ( v6 != 255 )
    {
      v8 = (unsigned int)((v6 << 20) + 0x1000000) >> 16;
      v9 = 1;
      do
      {
        *(_WORD *)(2 * (v8 + v9) + 0x202EEC8) = *(&gUnknown_083D712C[6 * v5] + v9);
        v9 = (v9 + 1) & 0xFFFF;
      }
      while ( v9 <= 5 );
    }
    v5 = (unsigned __int16)(v5 + 1);
  }
  while ( v7 <= 3u );
  move_anim_task_del(v1);
  return v11;
}
