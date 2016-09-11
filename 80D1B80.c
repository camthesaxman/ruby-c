int __fastcall sub_80D1B80(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  unsigned __int16 *v2; // r5@1
  signed int v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16 *)&gUnknown_083D7A5C;
  v3 = 4;
  do
  {
    FreeSpritePaletteByTag(*v2);
    ++v2;
    --v3;
  }
  while ( v3 >= 0 );
  move_anim_task_del(v1);
  return v5;
}
