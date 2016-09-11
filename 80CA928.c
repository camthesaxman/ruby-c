int __fastcall sub_80CA928(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  __int16 v3; // r0@1
  char v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) - 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == -1 )
  {
    ++*((_WORD *)v2 + 5);
    *((_WORD *)v2 + 4) = 6;
    word_3004B00[0] = 15;
    word_3004B02 = 0;
    word_3004B04 = 80;
    word_3004B06 = 0;
    v4 = sub_8079E90(v202F7C9);
    CreateSpriteAndAnimate((int)"£'£'$ﬂ7\b–b=\b", 0, 0, v4 + 1);
  }
  if ( *((_WORD *)v2 + 5) == 15 )
    move_anim_task_del(v1);
  return v6;
}
