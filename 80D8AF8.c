int __fastcall sub_80D8AF8(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r5@1
  __int16 v3; // r0@7
  __int16 v4; // r0@12
  __int16 v5; // r0@13
  int v7; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( *((_WORD *)v1 + 9) )
    {
      --*((_WORD *)v1 + 9);
      return v7;
    }
    if ( sub_80D8BA8(BYTE2(dword_3004B20[10 * a1 + 3]), LOBYTE(dword_3004B20[10 * a1 + 3])) << 24 )
      ++*((_WORD *)v1 + 5);
    v4 = *((_WORD *)v1 + 6) + 1;
    *((_WORD *)v1 + 6) = v4;
    if ( v4 != 3 )
    {
      *((_WORD *)v1 + 9) = 1;
      return v7;
    }
    v5 = *((_WORD *)v1 + 7) + 1;
    *((_WORD *)v1 + 7) = v5;
    if ( v5 != 10 )
    {
      --*((_WORD *)v1 + 4);
      return v7;
    }
    goto _080D8B78;
  }
  if ( v2 > 1 )
  {
    if ( v2 == 2 && !*((_WORD *)v1 + 5) )
      move_anim_task_del(a1);
  }
  else if ( !*((_WORD *)v1 + 4) )
  {
    v3 = *((_WORD *)v1 + 8) + 1;
    *((_WORD *)v1 + 8) = v3;
    if ( v3 > 2 )
    {
      *((_WORD *)v1 + 8) = 0;
      *((_WORD *)v1 + 9) = 0;
      *((_WORD *)v1 + 6) = 0;
_080D8B78:
      ++*((_WORD *)v1 + 4);
      return v7;
    }
  }
  return v7;
}
