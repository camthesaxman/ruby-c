int __fastcall sub_80D72DC(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r5@1
  unsigned int v3; // r0@1
  signed __int16 v4; // r0@3
  int v5; // r0@4
  signed __int16 v6; // r0@7
  __int16 v7; // r1@10
  __int16 v8; // r0@14
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        *((_WORD *)v2 + 10) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
        *((_WORD *)v2 + 11) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
        *((_WORD *)v2 + 12) = 4;
        *((_WORD *)v2 + 14) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
        *((_WORD *)v2 + 13) = (*((_WORD *)v2 + 14) - (signed int)*((_WORD *)v2 + 10)) / 5;
        *((_WORD *)v2 + 8) = 7;
        *((_WORD *)v2 + 9) = -1;
        *((_WORD *)v2 + 15) = 12;
        *((_WORD *)v2 + 16) = (char)sub_8076F98(0xC0u);
        *((_WORD *)v2 + 17) = (char)sub_8076F98(0x3Fu);
        *((_WORD *)v2 + 18) = *((_WORD *)v2 + 16);
        *((_WORD *)v2 + 19) = (*((_WORD *)v2 + 17) - (signed int)*((_WORD *)v2 + 16)) / 3;
        v4 = *((_WORD *)v2 + 4) + 1;
        goto _080D7466;
      case 1u:
        v5 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v5;
        if ( v5 << 16 > 0 )
        {
          *((_WORD *)v2 + 5) = 0;
          if ( sub_80D7470(v2, v1) << 24 )
          {
            if ( *((_WORD *)v2 + 6) == 5 )
              v6 = 3;
            else
              v6 = *((_WORD *)v2 + 4) + 1;
            *((_WORD *)v2 + 4) = v6;
          }
        }
        v7 = *((_WORD *)v2 + 15);
        if ( *((_WORD *)v2 + 15) )
          goto _080D745E;
        return v10;
      case 2u:
        if ( *((_WORD *)v2 + 15) )
          --*((_WORD *)v2 + 15);
        v8 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v8;
        if ( v8 <= 4 )
          return v10;
        *((_WORD *)v2 + 5) = 0;
        if ( *((_WORD *)v2 + 6) & 1 )
        {
          *((_WORD *)v2 + 11) = 4;
          *((_WORD *)v2 + 12) = 68;
          *((_WORD *)v2 + 8) = 0;
          *((_WORD *)v2 + 9) = 1;
        }
        else
        {
          *((_WORD *)v2 + 11) = 68;
          *((_WORD *)v2 + 12) = 4;
          *((_WORD *)v2 + 8) = 7;
          *((_WORD *)v2 + 9) = -1;
        }
        if ( !*((_WORD *)v2 + 15) )
          goto _080D7464;
        v4 = 4;
        goto _080D7466;
      case 3u:
        if ( !*((_WORD *)v2 + 7) )
          move_anim_task_del(v1);
        break;
      case 4u:
        v7 = *((_WORD *)v2 + 15);
        if ( *((_WORD *)v2 + 15) )
        {
_080D745E:
          *((_WORD *)v2 + 15) = v7 - 1;
        }
        else
        {
_080D7464:
          v4 = 1;
_080D7466:
          *((_WORD *)v2 + 4) = v4;
        }
        break;
      default:
        return v10;
    }
  }
  return v10;
}
