int __fastcall sub_80E1934(unsigned __int8 a1)
{
  int *v1; // r3@1
  signed int v2; // r1@1
  __int16 v3; // r0@7
  __int16 v4; // r0@11
  __int16 v5; // r0@13
  __int16 v6; // r0@17
  int v7; // r0@18
  int v9; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    v5 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v5;
    if ( v5 > 1 )
    {
      *((_WORD *)v1 + 5) = 0;
      word_30041B0 = *((_WORD *)v1 + 6) & 1 ? *((_WORD *)v1 + 17) - *((_WORD *)v1 + 18) : *((_WORD *)v1 + 18)
                                                                                        + *((_WORD *)v1 + 17);
      v6 = *((_WORD *)v1 + 6) + 1;
      *((_WORD *)v1 + 6) = v6;
      if ( v6 == 4 )
      {
        *((_WORD *)v1 + 6) = 0;
        v7 = *((_WORD *)v1 + 18) - 1;
        *((_WORD *)v1 + 18) = v7;
        if ( !(v7 << 16) )
          goto _080E1A0C;
      }
    }
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      word_30041B0 = *((_WORD *)v1 + 17);
      move_anim_task_del(a1);
    }
  }
  else if ( !*((_WORD *)v1 + 4) )
  {
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    if ( v3 > 1 )
    {
      *((_WORD *)v1 + 5) = 0;
      word_30041B0 = *((_WORD *)v1 + 6) & 1 ? *((_WORD *)v1 + 17) - *((_WORD *)v1 + 19) : *((_WORD *)v1 + 19)
                                                                                        + *((_WORD *)v1 + 17);
      v4 = *((_WORD *)v1 + 6) + 1;
      *((_WORD *)v1 + 6) = v4;
      if ( v4 == *((_WORD *)v1 + 7) )
      {
        *((_WORD *)v1 + 6) = 0;
        --*((_WORD *)v1 + 18);
_080E1A0C:
        ++*((_WORD *)v1 + 4);
        return v9;
      }
    }
  }
  return v9;
}
