int __fastcall sub_80E22CC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  char v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = IndexOfSpritePaletteTag(HIWORD(dword_3004B20[10 * a1 + 5]));
    BeginNormalPaletteFade(1 << (v2 + 16), 0, 0, 0, 0);
    move_anim_task_del(v1);
  }
  return v4;
}
