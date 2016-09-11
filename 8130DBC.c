int __fastcall sub_8130DBC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r3@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@3
  char *v5; // r1@5
  __int16 v6; // r0@5
  char *v7; // r1@7
  __int16 v8; // r0@7
  __int16 v9; // r0@9
  __int16 v10; // r1@10
  char *v11; // r0@12
  __int16 v12; // r0@14
  char *v13; // r1@16
  __int16 v14; // r0@16
  __int16 v15; // r0@18
  int v17; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 8 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v4;
        if ( v4 == 13 )
          goto _08130F28;
        break;
      case 1u:
        v5 = &gSprites[68 * *((_WORD *)v2 + 19)];
        *((_WORD *)v5 + 18) -= 3 * *((_WORD *)v2 + 18);
        v6 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v6;
        if ( v6 == 6 )
          goto _08130F28;
        break;
      case 2u:
        v7 = &gSprites[68 * *((_WORD *)v2 + 19)];
        *((_WORD *)v7 + 18) += 3 * *((_WORD *)v2 + 18);
        v8 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v8;
        if ( v8 == 6 )
          goto _08130F28;
        break;
      case 3u:
        v9 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v9;
        if ( v9 == 2 )
        {
          *((_WORD *)v2 + 5) = 0;
          v10 = *((_WORD *)v2 + 6);
          if ( *((_WORD *)v2 + 6) )
            goto _08130F2C;
          *((_WORD *)v2 + 6) = 1;
          *((_WORD *)v2 + 4) = 1;
        }
        break;
      case 4u:
        v11 = &gSprites[68 * *((_WORD *)v2 + 19)];
        *((_WORD *)v11 + 18) += *((_WORD *)v2 + 18);
        LOWORD(v11) = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = (_WORD)v11;
        if ( (signed __int16)v11 == 3 )
          goto _08130F28;
        break;
      case 5u:
        v12 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v12;
        if ( v12 == 6 )
          goto _08130F28;
        break;
      case 6u:
        v13 = &gSprites[68 * *((_WORD *)v2 + 19)];
        v14 = *((_WORD *)v13 + 18) - 4 * *((_WORD *)v2 + 18);
        goto _08130F18;
      case 7u:
        v13 = &gSprites[68 * *((_WORD *)v2 + 19)];
        v14 = 4 * *((_WORD *)v2 + 18) + *((_WORD *)v13 + 18);
_08130F18:
        *((_WORD *)v13 + 18) = v14;
        v15 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v15;
        if ( v15 == 5 )
        {
_08130F28:
          *((_WORD *)v2 + 5) = 0;
_08130F2C:
          ++*((_WORD *)v2 + 4);
        }
        break;
      case 8u:
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = 0;
        move_anim_task_del(v1);
        break;
      default:
        return v17;
    }
  }
  return v17;
}
