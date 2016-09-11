int __fastcall sub_80D1ADC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  signed int v2; // r5@1
  signed int v3; // r5@3
  signed int v4; // r0@5
  char v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+14h] [bp-4h]@8

  v1 = a1;
  v6 = IndexOfSpritePaletteTag(0x27DEu);
  v2 = 1;
  do
  {
    *(&v6 + v2) = AllocSpritePalette(10000 - v2);
    ++v2;
  }
  while ( v2 <= 4 );
  sub_8076BE0();
  sub_800D238();
  v3 = 0;
  do
  {
    if ( sub_8076BE0() << 24 )
      v4 = 33638400;
    else
      v4 = 33652736;
    LoadPalette(32 * v3 + v4, (((unsigned int)(unsigned __int8)*(&v6 + v3) << 20) + 0x1000000) >> 16, 32);
    ++v3;
  }
  while ( v3 <= 4 );
  move_anim_task_del(v1);
  return v7;
}
