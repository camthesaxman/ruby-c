int __fastcall sub_8141C08(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  FreeSpriteTilesByTag(0x281Du);
  FreeSpritePaletteByTag(0x281Du);
  move_anim_task_del(v1);
  return v3;
}
