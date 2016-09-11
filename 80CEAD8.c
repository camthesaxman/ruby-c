int __fastcall sub_80CEAD8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 1;
  do
  {
    FreeSpritePaletteByTag(gUnknown_083D712C[6 * v2]);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 3 );
  move_anim_task_del(v1);
  return v4;
}
