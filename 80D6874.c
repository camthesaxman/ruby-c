int __fastcall sub_80D6874(int a1)
{
  int v1; // r9@1
  int v2; // r5@1
  signed int v3; // r7@1
  int *v4; // r0@1
  __int16 v5; // r4@1
  __int16 v6; // r6@1
  int v7; // r8@2
  signed int v8; // r2@2
  signed __int16 v9; // r12@2
  unsigned int v10; // r0@4
  void *v11; // r0@6
  __int16 v12; // r1@6
  __int16 v13; // r2@6
  int v14; // r3@6
  int v15; // r3@8
  char *v16; // r0@15
  __int16 v18; // [sp+0h] [bp-24h]@1
  int v19; // [sp+20h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = &dword_3004B20[10 * (unsigned __int8)a1];
  v18 = *((_BYTE *)v4 + 12);
  v5 = *((_WORD *)v4 + 4);
  v6 = *((_WORD *)v4 + 5);
  if ( *((_WORD *)v4 + 6) )
  {
    v9 = 16;
    v7 = 8;
    v8 = 4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
    v9 = 16;
  }
  v10 = LOWORD(dword_3004B20[10 * v1 + 7]);
  if ( v10 > 0xA )
  {
def_80D68DE:
    if ( v3 )
    {
      v16 = &gSprites[68 * v2];
      *((_WORD *)v16 + 2) = *((_WORD *)v16 + 2) & 0xFC00 | ((*((_WORD *)v16 + 2) & 0x3FF) + v7) & 0x3FF;
      *((_WORD *)v16 + 23) = v18;
      call_via_r1(v16, dword_2020020[17 * v2]);
    }
    ++LOWORD(dword_3004B20[10 * v1 + 7]);
  }
  else
  {
    switch ( v10 )
    {
      case 0u:
        v11 = &gSpriteTemplate_83D9938;
        v12 = v5;
        v13 = v6;
        HIWORD(v14) = 16;
        goto _080D6992;
      case 2u:
        HIWORD(v14) = 32;
        v7 = (v7 + v8) & 0xFFFF;
        v11 = &gSpriteTemplate_83D9938;
        v12 = v5;
        v13 = v6;
        goto _080D6992;
      case 4u:
        v15 = 3 * v9;
        v7 = (2 * v8 + v7) & 0xFFFF;
        goto _080D6986;
      case 6u:
        HIWORD(v14) = 64;
        v7 = (3 * v8 + v7) & 0xFFFF;
        v11 = &gSpriteTemplate_83D9938;
        v12 = v5;
        v13 = v6;
        goto _080D6992;
      case 8u:
        v15 = 5 * v9;
_080D6986:
        v11 = &gSpriteTemplate_83D9938;
        v12 = v5;
        v13 = v6;
        v14 = v15 << 16;
_080D6992:
        v2 = (unsigned __int8)CreateSprite((int)v11, v12, v13 + HIWORD(v14));
        v3 = 1;
        goto def_80D68DE;
      case 0xAu:
        move_anim_task_del(v1);
        break;
      default:
        goto def_80D68DE;
    }
  }
  return v19;
}
