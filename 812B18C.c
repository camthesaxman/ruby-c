int __fastcall sub_812B18C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  char v3; // r6@1
  int v4; // r4@6
  _BYTE *v5; // r0@10
  int v6; // r2@17
  int v7; // r0@18
  unsigned int *v8; // r1@18
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = sub_8076F98(0xC0u);
  if ( sub_8076BE0() << 24 )
  {
    if ( word_3004B00[0] )
      move_anim_task_del(v1);
    else
      v2 = v2019348;
  }
  else
  {
    if ( word_3004B00[0] )
    {
      if ( word_3004B00[0] == 1 )
      {
        v4 = v202F7C9;
      }
      else
      {
        if ( word_3004B00[0] == 2 )
          v5 = (_BYTE *)33748936;
        else
          v5 = (_BYTE *)33748937;
        v4 = *v5 ^ 2;
      }
    }
    else
    {
      v4 = v202F7C8;
    }
    if ( (word_3004B00[0] == 1 || word_3004B00[0] == 3) && !(b_side_obj__get_some_boolean(v4) << 24) )
    {
      move_anim_task_del(v1);
      return v10;
    }
    if ( battle_side_get_owner(v4) << 24 )
    {
      v7 = 25 * *(_WORD *)(2 * v4 + 0x2024A6A);
      v8 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v7 = 25 * *(_WORD *)(2 * v4 + 0x2024A6A);
      v8 = dword_3004360;
    }
    v2 = GetMonData((int)&v8[v7], 11, v6) & 0xFFFF;
  }
  if ( v2 )
  {
    if ( word_3004B02 == 255 )
      cry_related(v2, v3);
    else
      sub_80750B4(v2, v3, word_3004B02);
  }
  move_anim_task_del(v1);
  return v10;
}
