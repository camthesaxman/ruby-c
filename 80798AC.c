int __fastcall sub_80798AC(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r2@1
  int *v4; // r0@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = IndexOfSpritePaletteTag(word_3004B00[0]);
  v3 = v2;
  if ( v2 == 255 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    v4 = &dword_3004B20[10 * v1];
    *((_WORD *)v4 + 4) = 16 * v3 + 257;
    sub_80797EC((int)v4);
  }
  return v6;
}
