int sub_8075CB0()
{
  signed int v0; // r5@10
  __int16 *v1; // r4@10
  int v2; // r0@11
  bool v3; // zf@12
  int v4; // r0@14
  int v6; // [sp+14h] [bp-4h]@0

  if ( v202F7B2 || v202F7B3 || v202F7C2 != 255 || v202F7C3 != 255 )
  {
    word_3004AF0 = 0;
_08075D0A:
    v202F7B0 = 1;
    return v6;
  }
  if ( mplay_has_finished_maybe() << 24 )
  {
    if ( (unsigned __int16)++word_3004AF0 <= 0x5Au )
      goto _08075D0A;
    m4aMPlayStop(&unk_30073C0);
    m4aMPlayStop(&unk_3007400);
  }
  word_3004AF0 = 0;
  v0 = 0;
  v1 = &word_3004B10;
  do
  {
    v2 = (unsigned __int16)*v1;
    if ( v2 != 0xFFFF )
    {
      FreeSpriteTilesByTag(*(_WORD *)&gBattleAnimPicTable[8 * v2 + 6]);
      FreeSpritePaletteByTag(*(_WORD *)&gBattleAnimPicTable[8 * (unsigned __int16)*v1 + 6]);
      v3 = ((unsigned __int16)*v1 | 0xFFFF) == 0;
      *v1 = -1;
    }
    ++v1;
    ++v0;
  }
  while ( v0 <= 7 );
  v4 = m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
  if ( !(sub_8076BE0(v4) << 24) )
  {
    sub_8079E24();
    sub_8043EB4(1);
  }
  v202F7B1 = 0;
  return v6;
}
