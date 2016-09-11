int __fastcall sub_80D4150(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@4
  __int16 v5; // r0@5
  char *v6; // r0@6
  unsigned __int8 v7; // r0@8
  __int16 v8; // r5@8
  __int16 v9; // r0@10
  __int16 v10; // r0@15
  __int16 v11; // r0@16
  char *v12; // r0@17
  __int16 v13; // r1@17
  char *v14; // r0@21
  unsigned __int8 v15; // r0@21
  int v17; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 7 )
  {
    switch ( v3 )
    {
      case 0u:
        sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 256, 256, 224, 512, 32);
        ++*((_WORD *)v2 + 4);
        goto _080D41C6;
      case 1u:
_080D41C6:
        v4 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v4;
        if ( v4 > 1 )
        {
          *((_WORD *)v2 + 7) = 0;
          v5 = *((_WORD *)v2 + 8) + 1;
          *((_WORD *)v2 + 8) = v5;
          if ( v5 & 1 )
          {
            *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = 3;
            v6 = &gSprites[68 * *((_WORD *)v2 + 19)];
            ++*((_WORD *)v6 + 17);
          }
          else
          {
            *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = -3;
          }
        }
        v7 = sub_8079C74((int)v2);
        v8 = v7;
        if ( v7 )
          return v17;
        sub_8079A64(*((_BYTE *)v2 + 38));
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = 0;
        *((_WORD *)v2 + 7) = 0;
        goto _080D436C;
      case 2u:
        v9 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v9;
        if ( v9 <= 4 )
          return v17;
        sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 224, 512, 384, 224, 8);
        *((_WORD *)v2 + 7) = 0;
        goto _080D436E;
      case 3u:
        if ( (unsigned __int8)sub_8079C74((int)v2) )
          return v17;
        *((_WORD *)v2 + 7) = 0;
        *((_WORD *)v2 + 8) = 0;
        goto _080D436E;
      case 4u:
        sub_80D4418(v2, v1);
        ++*((_WORD *)v2 + 4);
        goto _080D42B0;
      case 5u:
_080D42B0:
        v10 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v10;
        if ( v10 <= 1 )
          return v17;
        *((_WORD *)v2 + 7) = 0;
        v11 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v11;
        if ( v11 & 1 )
        {
          v12 = &gSprites[68 * *((_WORD *)v2 + 19)];
          v13 = *((_WORD *)v12 + 19) + 2;
        }
        else
        {
          v12 = &gSprites[68 * *((_WORD *)v2 + 19)];
          v13 = *((_WORD *)v12 + 19) - 2;
        }
        *((_WORD *)v12 + 19) = v13;
        if ( *((_WORD *)v2 + 8) != 10 )
          return v17;
        sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 384, 224, 256, 256, 8);
        *((_WORD *)v2 + 7) = 0;
        *((_WORD *)v2 + 8) = 0;
        goto _080D436E;
      case 6u:
        v14 = &gSprites[68 * *((_WORD *)v2 + 19)];
        --*((_WORD *)v14 + 17);
        v15 = sub_8079C74((int)v2);
        v8 = v15;
        if ( !v15 )
        {
          sub_8078F40(*((_BYTE *)v2 + 38));
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 34] = *((_WORD *)v2 + 9);
_080D436C:
          *((_WORD *)v2 + 8) = v8;
_080D436E:
          ++*((_WORD *)v2 + 4);
        }
        break;
      case 7u:
        if ( !*((_WORD *)v2 + 6) )
          move_anim_task_del(v1);
        break;
      default:
        return v17;
    }
  }
  return v17;
}
