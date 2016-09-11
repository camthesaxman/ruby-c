int __fastcall sub_80D54E0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  __int16 v4; // r0@4
  __int16 v5; // r0@5
  char *v6; // r0@6
  signed __int16 v7; // r1@6
  __int16 v8; // r0@10
  char *v9; // r0@11
  __int16 v10; // r0@14
  __int16 v11; // r0@21
  __int16 v12; // r0@22
  char *v13; // r0@23
  __int16 v14; // r1@23
  __int16 v15; // r0@26
  char *v16; // r0@31
  char *v17; // r0@34
  int v19; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 6 )
  {
    switch ( v3 )
    {
      case 0u:
        sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 256, 256, 224, 512, 32);
        ++*((_WORD *)v2 + 4);
        goto _080D5552;
      case 1u:
_080D5552:
        v4 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v4;
        if ( v4 > 1 )
        {
          *((_WORD *)v2 + 5) = 0;
          v5 = *((_WORD *)v2 + 6) + 1;
          *((_WORD *)v2 + 6) = v5;
          if ( v5 & 1 )
          {
            v6 = &gSprites[68 * *((_WORD *)v2 + 19)];
            v7 = 3;
          }
          else
          {
            v6 = &gSprites[68 * *((_WORD *)v2 + 19)];
            v7 = -3;
          }
          *((_WORD *)v6 + 18) = v7;
        }
        if ( *((_WORD *)v2 + 9) )
        {
          v8 = *((_WORD *)v2 + 7) + 1;
          *((_WORD *)v2 + 7) = v8;
          if ( v8 > 4 )
          {
            *((_WORD *)v2 + 7) = 0;
            v9 = &gSprites[68 * *((_WORD *)v2 + 19)];
            ++*((_WORD *)v9 + 17);
          }
        }
        if ( (unsigned __int8)sub_8079C74((int)v2) )
          return v19;
        sub_8079A64(*((_BYTE *)v2 + 38));
        *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = 0;
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = 0;
        *((_WORD *)v2 + 7) = 0;
        goto _080D57A0;
      case 2u:
        v10 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v10;
        if ( v10 <= 4 )
          return v19;
        if ( *((_WORD *)v2 + 9) )
          sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 224, 512, 384, 240, 6);
        else
          sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 224, 512, 384, 192, 6);
        *((_WORD *)v2 + 5) = 0;
        goto _080D57A0;
      case 3u:
        if ( sub_8079C74((int)v2) << 24 )
          return v19;
        sub_80D57C4(*((_WORD *)v2 + 19) & 0xFF, v1, 6);
        goto _080D57A0;
      case 4u:
        v11 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v11;
        if ( v11 > 1 )
        {
          *((_WORD *)v2 + 5) = 0;
          v12 = *((_WORD *)v2 + 6) + 1;
          *((_WORD *)v2 + 6) = v12;
          if ( v12 & 1 )
          {
            v13 = &gSprites[68 * *((_WORD *)v2 + 19)];
            v14 = *((_WORD *)v13 + 19) + 3;
          }
          else
          {
            v13 = &gSprites[68 * *((_WORD *)v2 + 19)];
            v14 = *((_WORD *)v13 + 19) - 3;
          }
          *((_WORD *)v13 + 19) = v14;
        }
        v15 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v15;
        if ( v15 <= 24 )
          return v19;
        if ( *((_WORD *)v2 + 9) )
          sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 384, 240, 256, 256, 8);
        else
          sub_8079C08((int)v2, *((_BYTE *)v2 + 38), 384, 192, 256, 256, 8);
        if ( *((_WORD *)v2 + 6) & 1 )
        {
          v16 = &gSprites[68 * *((_WORD *)v2 + 19)];
          *((_WORD *)v16 + 19) -= 3;
        }
        *((_WORD *)v2 + 5) = 0;
        *((_WORD *)v2 + 6) = 0;
        *((_WORD *)v2 + 7) = 0;
        goto _080D57A0;
      case 5u:
        if ( *((_WORD *)v2 + 9) )
        {
          v17 = &gSprites[68 * *((_WORD *)v2 + 19)];
          --*((_WORD *)v17 + 17);
        }
        if ( !(unsigned __int8)sub_8079C74((int)v2) )
        {
          *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 34] = *((_WORD *)v2 + 8);
          sub_8078F40(*((_BYTE *)v2 + 38));
          *((_WORD *)v2 + 6) = 0;
_080D57A0:
          ++*((_WORD *)v2 + 4);
        }
        break;
      case 6u:
        if ( !*((_WORD *)v2 + 10) )
          move_anim_task_del(v1);
        break;
      default:
        return v19;
    }
  }
  return v19;
}
