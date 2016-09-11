int __fastcall sub_812FE20(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@4
  int v4; // r0@9
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) )
  {
    if ( *((_WORD *)v2 + 4) == 1 && !*((_WORD *)v2 + 6) )
      move_anim_task_del(a1);
  }
  else
  {
    v3 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v3;
    if ( v3 == 6 )
      sub_812FEB8(v1, 1);
    if ( *((_WORD *)v2 + 5) == 18 )
      sub_812FEB8(v1, 0);
    if ( !(unsigned __int8)sub_807992C((int)v2) )
    {
      v4 = *((_WORD *)v2 + 7) - 1;
      *((_WORD *)v2 + 7) = v4;
      if ( v4 << 16 )
      {
        *((_WORD *)v2 + 5) = 0;
        sub_80798F4((int)v2, *((_BYTE *)v2 + 38));
      }
      else
      {
        ++*((_WORD *)v2 + 4);
      }
    }
  }
  return v6;
}
