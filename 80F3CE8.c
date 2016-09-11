int __fastcall sub_80F3CE8(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  move_anim_execute(a1);
  FreeSpriteTilesByTag(0x17u);
  FreeSpritePaletteByTag(0xFu);
  return v2;
}
