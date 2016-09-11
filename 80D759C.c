int __fastcall sub_80D759C(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r5@1
  signed int v3; // r0@1
  int v4; // r0@7
  int v5; // r2@8
  int v6; // r1@9
  __int16 v7; // r0@12
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    v7 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v7;
    if ( v7 > 1 )
    {
      *((_WORD *)v2 + 5) = 0;
      if ( sub_80D7654(v2, v1) << 24 )
      {
_080D7638:
        ++*((_WORD *)v2 + 4);
        return v9;
      }
    }
  }
  else
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v9;
      v4 = (unsigned __int8)sub_8077ABC(v202F7C9, 1u) + 32;
      *((_WORD *)v2 + 19) = v4;
      *((_WORD *)v2 + 18) = v4;
      if ( v4 > 16 )
      {
        v5 = v4;
        do
        {
          v6 = v5 - 32;
          v5 = v6;
        }
        while ( (signed __int16)v6 > 16 );
        *((_WORD *)v2 + 18) = v6;
      }
      *((_WORD *)v2 + 17) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
      *((_WORD *)v2 + 16) = (unsigned __int8)sub_8079E90(v202F7C9) - 2;
      goto _080D7638;
    }
    if ( v3 == 2 && !*((_WORD *)v2 + 14) )
      move_anim_task_del(v1);
  }
  return v9;
}
