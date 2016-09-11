int __fastcall sub_80CDB60(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r2@4
  signed __int16 v5; // r1@5
  signed __int16 v6; // r1@10
  char *v7; // r0@17
  __int16 v8; // r1@17
  signed __int16 v9; // r1@23
  int v11; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        if ( *((_WORD *)v2 + 7) )
        {
          v4 = *((_WORD *)v2 + 9) + *((_WORD *)v2 + 8);
          goto _080CDCF6;
        }
        *((_WORD *)v2 + 7) = 8;
        *((_WORD *)v2 + 8) = 0;
        v5 = 192;
        if ( !*((_WORD *)v2 + 5) )
          v5 = -192;
        *((_WORD *)v2 + 9) = v5;
        sub_8078E70(*((_BYTE *)v2 + 8), 0);
        goto _080CDCDC;
      case 1u:
        if ( *((_WORD *)v2 + 7) )
        {
          *((_WORD *)v2 + 8) += *((_WORD *)v2 + 9);
          obj_id_set_rotscale(*((_BYTE *)v2 + 8), 0x100u, 256, *((_WORD *)v2 + 8));
          sub_8078F9C(*((_BYTE *)v2 + 8));
          goto _080CDD08;
        }
        *((_WORD *)v2 + 7) = 8;
        *((_WORD *)v2 + 8) = *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 36];
        v6 = -2;
        if ( !*((_WORD *)v2 + 5) )
          v6 = 2;
        *((_WORD *)v2 + 9) = v6;
        *((_WORD *)v2 + 10) = 1;
        goto _080CDCDC;
      case 2u:
        if ( !*((_WORD *)v2 + 7) )
        {
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 36] = *((_WORD *)v2 + 8);
          *((_WORD *)v2 + 7) = 12;
          goto _080CDCDC;
        }
        if ( *((_WORD *)v2 + 10) )
        {
          --*((_WORD *)v2 + 10);
          return v11;
        }
        if ( *((_WORD *)v2 + 7) & 1 )
        {
          v7 = &gSprites[68 * *((_WORD *)v2 + 4)];
          v8 = *((_WORD *)v2 + 9) + *((_WORD *)v2 + 8);
        }
        else
        {
          v7 = &gSprites[68 * *((_WORD *)v2 + 4)];
          v8 = *((_WORD *)v2 + 8) - *((_WORD *)v2 + 9);
        }
        *((_WORD *)v7 + 18) = v8;
        *((_WORD *)v2 + 10) = 1;
        goto _080CDD08;
      case 3u:
        if ( *((_WORD *)v2 + 7) )
        {
          --*((_WORD *)v2 + 7);
        }
        else
        {
          *((_WORD *)v2 + 7) = 3;
          *((_WORD *)v2 + 8) = *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 36];
          v9 = -8;
          if ( !*((_WORD *)v2 + 5) )
            v9 = 8;
          *((_WORD *)v2 + 9) = v9;
_080CDCDC:
          ++*((_WORD *)v2 + 6);
        }
        break;
      case 4u:
        if ( *((_WORD *)v2 + 7) )
        {
          v4 = *((_WORD *)v2 + 9) + *((_WORD *)v2 + 8);
_080CDCF6:
          *((_WORD *)v2 + 8) = v4;
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 36] = v4;
_080CDD08:
          --*((_WORD *)v2 + 7);
        }
        else
        {
          move_anim_task_del(v1);
        }
        break;
      default:
        return v11;
    }
  }
  return v11;
}
