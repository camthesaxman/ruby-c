int __fastcall sub_80DF9F4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  int *v2; // r2@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@3
  __int16 v5; // r0@4
  __int16 v6; // r0@6
  __int16 v7; // r0@8
  int v8; // r0@9
  int v10; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 11) + 1;
        *((_WORD *)v2 + 11) = v4;
        if ( v4 <= 1 )
          goto _080DFA8A;
        *((_WORD *)v2 + 11) = 0;
        v5 = *((_WORD *)v2 + 10) + 1;
        *((_WORD *)v2 + 10) = v5;
        if ( v5 != 3 )
          goto _080DFA8A;
        goto _080DFA84;
      case 1u:
        v6 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v6;
        if ( v6 > 60 )
          goto _080DFA84;
        goto _080DFA8A;
      case 2u:
        v7 = *((_WORD *)v2 + 11) + 1;
        *((_WORD *)v2 + 11) = v7;
        if ( v7 > 1 )
        {
          *((_WORD *)v2 + 11) = 0;
          v8 = *((_WORD *)v2 + 10) - 1;
          *((_WORD *)v2 + 10) = v8;
          if ( !(v8 << 16) )
_080DFA84:
            ++*((_WORD *)v2 + 4);
        }
_080DFA8A:
        sub_80DFAB0(v2);
        break;
      case 3u:
        byte_3004DD5 = 3;
        ++*((_WORD *)v2 + 4);
        break;
      case 4u:
        move_anim_task_del(v1);
        break;
      default:
        return v10;
    }
  }
  return v10;
}
