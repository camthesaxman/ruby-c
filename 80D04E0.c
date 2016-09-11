int __fastcall sub_80D04E0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  __int16 v5; // r0@14
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 6);
        if ( !*((_WORD *)v2 + 6) || v4 == 3 || v4 == 6 )
          sub_80D0614(v2, v1);
        ++*((_WORD *)v2 + 6);
        *((_WORD *)v2 + 8) += 40;
        obj_id_set_rotscale(*((_BYTE *)v2 + 8), *((_WORD *)v2 + 8), *((_WORD *)v2 + 8), 0);
        sub_8079A64(*((_BYTE *)v2 + 8));
        if ( *((_WORD *)v2 + 6) == 32 )
        {
          ++*((_WORD *)v2 + 9);
          goto _080D05E4;
        }
        break;
      case 1u:
        if ( !*((_WORD *)v2 + 10) )
        {
          if ( *((_WORD *)v2 + 9) == 3 )
          {
            *((_WORD *)v2 + 6) = 0;
            *((_WORD *)v2 + 5) = 3;
          }
          else
          {
            *((_WORD *)v2 + 6) = 0;
            *((_WORD *)v2 + 7) = 0;
            *((_WORD *)v2 + 8) = 256;
            obj_id_set_rotscale(*((_BYTE *)v2 + 8), 0x100u, 256, 0);
            sub_8079A64(*((_BYTE *)v2 + 8));
            *((_WORD *)v2 + 5) = 2;
          }
        }
        break;
      case 2u:
        *((_WORD *)v2 + 5) = 0;
        break;
      case 3u:
        v5 = *((_WORD *)v2 + 6) + 1;
        *((_WORD *)v2 + 6) = v5;
        if ( v5 > 32 )
          goto _080D05E0;
        break;
      case 4u:
        *((_WORD *)v2 + 6) += 2;
        *((_WORD *)v2 + 8) -= 80;
        obj_id_set_rotscale(*((_BYTE *)v2 + 8), *((_WORD *)v2 + 8), *((_WORD *)v2 + 8), 0);
        sub_8079A64(*((_BYTE *)v2 + 8));
        if ( *((_WORD *)v2 + 6) == 32 )
        {
_080D05E0:
          *((_WORD *)v2 + 6) = 0;
_080D05E4:
          ++*((_WORD *)v2 + 5);
        }
        break;
      case 5u:
        sub_8078F40(*((_BYTE *)v2 + 8));
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 38] = 0;
        move_anim_task_del(v1);
        break;
      default:
        return v7;
    }
  }
  return v7;
}
