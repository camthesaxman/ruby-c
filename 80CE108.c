int __fastcall sub_80CE108(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  int v3; // r0@1
  __int16 v4; // r0@5
  __int16 v5; // r1@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  if ( v3 == 1 )
  {
    word_3004B0E = -1;
_080CE16C:
    ++*((_WORD *)v2 + 6);
    return v7;
  }
  if ( v3 == 2 )
  {
    move_anim_task_del(v1);
  }
  else
  {
    v4 = *((_WORD *)v2 + 4) + 1;
    *((_WORD *)v2 + 4) = v4;
    if ( v4 == 4 )
    {
      *((_WORD *)v2 + 4) = 0;
      v5 = *((_WORD *)v2 + 5) + 1;
      *((_WORD *)v2 + 5) = v5;
      v4000052 = (v5 << 8) | (16 - v5);
      if ( *((_WORD *)v2 + 5) == 16 )
        goto _080CE16C;
    }
  }
  return v7;
}
