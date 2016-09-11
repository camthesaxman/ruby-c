int __fastcall sub_80D0D68(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  __int16 v3; // r0@4
  __int16 v4; // r0@6
  __int16 v5; // r1@7
  __int16 v6; // r0@7
  signed int v7; // r1@7
  __int16 v8; // r0@12
  int v9; // r0@15
  __int16 v10; // r0@17
  int v12; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 8) )
  {
    if ( *((_WORD *)v2 + 8) != 1 )
      return v12;
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    if ( v4 <= 3 )
      return v12;
    *((_WORD *)v2 + 5) = 0;
    v5 = *((_WORD *)v2 + 7);
    *((_WORD *)v2 + 6) = *((_WORD *)v2 + 7) & 3;
    v6 = *((_WORD *)v2 + 4) - v5;
    *((_WORD *)v2 + 9) = v6;
    v7 = *((_WORD *)v2 + 6);
    if ( v7 == 1 )
    {
      v8 = v6 - 2;
    }
    else
    {
      if ( v7 <= 1 || v7 != 2 && v7 != 3 )
        goto _080D0DE0;
      v8 = v6 + 1;
    }
    *((_WORD *)v2 + 9) = v8;
_080D0DE0:
    v9 = *((_WORD *)v2 + 9);
    if ( v9 >= 0 )
    {
      word_3004DE0[v9] = *((_WORD *)v2 + 10);
      word_3005560[*((_WORD *)v2 + 9)] = *((_WORD *)v2 + 10);
    }
    v10 = *((_WORD *)v2 + 7) + 1;
    *((_WORD *)v2 + 7) = v10;
    if ( v10 >= (signed int)*((_WORD *)v2 + 19) )
    {
      byte_3004DD5 = 3;
      move_anim_task_del(v1);
    }
    return v12;
  }
  v3 = *((_WORD *)v2 + 9) + 1;
  *((_WORD *)v2 + 9) = v3;
  if ( v3 > 20 )
    ++*((_WORD *)v2 + 8);
  return v12;
}
