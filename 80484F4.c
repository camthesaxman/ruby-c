int __fastcall sub_80484F4(int a1, int a2, int a3, int a4)
{
  char *v4; // r0@1
  int v5; // r0@3
  char v6; // r0@3
  int v7; // r0@3
  int v8; // r0@3
  signed int v9; // r6@3
  char *v10; // r1@6
  char *v11; // r1@7
  signed int v12; // r6@11
  char *v13; // r7@12
  int v14; // r5@13
  int v15; // r2@13
  char v16; // r0@13
  signed int v17; // r6@14
  char *v18; // r7@15
  int v19; // r5@16
  int v20; // r2@16
  char v21; // r0@16
  int v22; // r3@18
  int v23; // r0@22
  char v24; // r0@26
  char v25; // r0@28
  int v26; // r0@39
  int v28; // [sp+1Ch] [bp-4h]@0

  v4 = (char *)(unsigned __int8)byte_3001BAC;
  if ( (unsigned __int8)byte_3001BAC <= 0x15u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        dword_3004824 = 33648640;
        ResetSpriteData();
        v5 = FreeAllSpritePalettes();
        ResetTasks(v5);
        sub_804A964(dword_3004824 + 200, 100673536);
        SetVBlankCallback((int)sub_80489F4);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        SetUpWindowConfig((int)&gWindowConfig_81E6F84);
        InitWindowFromConfig(dword_3004824 + 4, (int)&gWindowConfig_81E6F84);
        v6 = SetTextWindowBaseTileNum(20);
        *(_BYTE *)(dword_3004824 + 122) = v6;
        v7 = LoadTextWindowGraphics(dword_3004824 + 4);
        v8 = MenuZeroFillScreen(v7);
        sub_809D51C(v8);
        *(_BYTE *)(dword_3004824 + 117) = 0;
        *(_BYTE *)(dword_3004824 + 123) = 0;
        *(_BYTE *)(dword_3004824 + 124) = 0;
        *(_BYTE *)(dword_3004824 + 128) = 0;
        *(_BYTE *)(dword_3004824 + 129) = 0;
        *(_BYTE *)(dword_3004824 + 134) = 0;
        *(_BYTE *)(dword_3004824 + 135) = 0;
        *(_BYTE *)(dword_3004824 + 180) = 0;
        byte_3000508 = 0;
        ++byte_3001BAC;
        v9 = 33676288;
        v4 = (char *)33724156;
        do
        {
          *(_DWORD *)v4 = v9;
          v9 -= 256;
          v4 -= 4;
        }
        while ( (signed int)v4 >= 33724108 );
        break;
      case 1:
        v10 = &byte_3001BAC;
        goto _0804883E;
      case 2:
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 3:
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 4:
        calc_player_party_count();
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 5:
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 6:
        calc_enemy_party_count();
        v4000000 = 0;
        *(_BYTE *)(dword_3004824 + 66) = byte_3004350;
        *(_BYTE *)(dword_3004824 + 67) = byte_30045B8;
        sub_804A41C(0);
        sub_804A41C(1);
        v12 = 0;
        if ( (signed int)*(_BYTE *)(dword_3004824 + 66) > 0 )
        {
          v13 = gTradeMonSpriteCoords;
          do
          {
            v14 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v12], 65, 0);
            GetMonData((int)&dword_3004360[25 * v12], 0, v15);
            v16 = sub_809D2FC(
                    v14,
                    sub_809D62C,
                    (((unsigned __int8)*v13 << 19) + 917504) >> 16,
                    (((unsigned __int8)v13[1] << 19) - 786432) >> 16);
            *(_BYTE *)(dword_3004824 + 52 + v12) = v16;
            v13 += 2;
            ++v12;
          }
          while ( v12 < *(_BYTE *)(dword_3004824 + 66) );
        }
        v17 = 0;
        if ( (signed int)*(_BYTE *)(dword_3004824 + 67) > 0 )
        {
          v18 = &byte_820C2A8;
          do
          {
            v19 = (unsigned __int16)GetMonData((int)&unk_30045C0 + 100 * v17, 65, 0);
            GetMonData((int)&unk_30045C0 + 100 * v17, 0, v20);
            v21 = sub_809D2FC(
                    v19,
                    sub_809D62C,
                    (((unsigned __int8)*v18 << 19) + 917504) >> 16,
                    (((unsigned __int8)v18[1] << 19) - 786432) >> 16);
            *(_BYTE *)(dword_3004824 + 58 + v17) = v21;
            v18 += 2;
            ++v17;
          }
          while ( v17 < *(_BYTE *)(dword_3004824 + 67) );
        }
        nullsub_5(2, 0);
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 7:
        sub_806DA98();
        sub_806DB90(dword_3004824 + 66, dword_3004824 + 52, 0, v22);
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 8:
        sub_806DB90(dword_3004824 + 66, dword_3004824 + 52, 1, a4);
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 9:
        sub_8047CE8();
        v10 = &byte_3001BAC;
_0804883E:
        ++*v10;
        v4 = (char *)(dword_3004824 + 180);
        *(_BYTE *)(dword_3004824 + 180) = 0;
        break;
      case 0xA:
        v23 = nullsub_5(4, 0);
        v4 = (char *)(sub_804ABF8(v23) << 24);
        if ( !v4 )
          break;
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0xB:
        sub_8047D58();
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0xC:
        sub_8047E44();
        if ( (unsigned int)*(_BYTE *)(dword_3004824 + 65) > 5 )
          v24 = v2018009 + 6;
        else
          v24 = v2018009;
        *(_BYTE *)(dword_3004824 + 65) = v24;
        v25 = CreateSprite(
                (int)&gSpriteTemplate_820C134,
                (((unsigned int)(unsigned __int8)gTradeMonSpriteCoords[2 * *(_BYTE *)(dword_3004824 + 65)] << 19)
               + 0x200000) >> 16,
                8 * (unsigned __int8)byte_820C29D[2 * *(_BYTE *)(dword_3004824 + 65)]);
        *(_BYTE *)(dword_3004824 + 64) = v25;
        byte_3001BAC = 15;
        v4 = (char *)nullsub_5(6, 0);
        break;
      case 0xF:
        sub_8048B0C(0);
        goto _08048998;
      case 0x10:
        sub_8048B0C(1);
        *(_BYTE *)dword_3004824 = 0;
        *(_BYTE *)(dword_3004824 + 1) = 0;
        sub_8048C70();
        nullsub_5(7, 0);
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0x11:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0x12:
        v4000000 = 8000;
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0x13:
        v11 = &byte_3001BAC;
        goto _0804899E;
      case 0x14:
        sub_804AF10((unsigned __int8)byte_3001BAC);
_08048998:
        v11 = &byte_3001BAC;
_0804899E:
        v4 = (char *)((unsigned __int8)*v11 + 1);
        *v11 = (char)v4;
        break;
      case 0x15:
        v4 = (char *)((unsigned __int8)(v202F38F & 0x80) << 24);
        if ( !(v202F38F & 0x80) )
        {
          SetMainCallback2((int)sub_8048AB4);
          v4 = &byte_3000508;
          byte_3000508 = 0;
        }
        break;
      default:
        break;
    }
  }
  RunTasks(v4);
  AnimateSprites();
  v26 = BuildOamBuffer();
  UpdatePaletteFade(v26);
  return v28;
}
