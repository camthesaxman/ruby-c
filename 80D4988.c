int __fastcall sub_80D4988(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@5
  int v5; // r1@7
  __int16 v6; // r0@8
  __int16 v7; // r0@11
  int v8; // r0@13
  __int16 v9; // r0@15
  int v11; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 > 6 )
  {
def_80D49AA:
    move_anim_task_del(v1);
  }
  else
  {
    switch ( v3 )
    {
      case 0u:
        sub_80D4AD0(v2);
        if ( *((_WORD *)v2 + 14) )
          goto _080D4ABA;
        return v11;
      case 1u:
        sub_80D4AD0(v2);
        v4 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v4;
        if ( v4 <= 16 )
          return v11;
        *((_WORD *)v2 + 5) = 0;
        goto _080D4ABA;
      case 2u:
        sub_80D4AD0(v2);
        v5 = 6 * *((_WORD *)v2 + 11) + *((_WORD *)v2 + 9);
        *((_WORD *)v2 + 9) = v5;
        if ( (unsigned int)((v5 + 16) << 16) <= 0x1100000 )
          return v11;
        v6 = *((_WORD *)v2 + 16) + 1;
        *((_WORD *)v2 + 16) = v6;
        if ( v6 <= 2 )
        {
          *((_WORD *)v2 + 5) = 0;
_080D4ABA:
          ++*((_WORD *)v2 + 4);
        }
        else
        {
          *((_WORD *)v2 + 17) = 1;
          *((_WORD *)v2 + 4) = 6;
          *((_WORD *)v2 + 5) = 0;
        }
        break;
      case 3u:
        sub_80D4AD0(v2);
        *((_WORD *)v2 + 10) -= 2 * *((_WORD *)v2 + 11);
        v7 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v7;
        if ( v7 > 7 )
          goto _080D4ABA;
        return v11;
      case 4u:
        sub_80D4AD0(v2);
        v8 = *((_WORD *)v2 + 9) - 6 * *((_WORD *)v2 + 11);
        *((_WORD *)v2 + 9) = v8;
        if ( (unsigned int)((v8 + 16) << 16) <= 0x1100000 )
          return v11;
        ++*((_WORD *)v2 + 16);
        *((_WORD *)v2 + 5) = 0;
        goto _080D4ABA;
      case 5u:
        sub_80D4AD0(v2);
        *((_WORD *)v2 + 10) -= 2 * *((_WORD *)v2 + 11);
        v9 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v9;
        if ( v9 > 7 )
          *((_WORD *)v2 + 4) = 2;
        return v11;
      case 6u:
        if ( !*((_WORD *)v2 + 12) )
          goto _080D4ABA;
        break;
      default:
        goto def_80D49AA;
    }
  }
  return v11;
}
