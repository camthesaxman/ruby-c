int __fastcall sub_813003C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 5) )
  {
    BlendPalette(*((_WORD *)v2 + 6), 0x10u, 8u, gUnknown_084028E4[*((_WORD *)v2 + 4)]);
    v3 = *((_WORD *)v2 + 4) + 1;
    *((_WORD *)v2 + 4) = v3;
    if ( v3 > 23 )
      *((_WORD *)v2 + 4) = 0;
    --*((_WORD *)v2 + 5);
  }
  else
  {
    BlendPalette(*((_WORD *)v2 + 6), 0x10u, 0, 0);
    move_anim_task_del(v1);
  }
  return v5;
}
