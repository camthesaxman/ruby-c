int __fastcall sub_811240C(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r3@1
  int v3; // r9@1
  int *v4; // r1@4
  unsigned int v5; // r0@6
  int *v6; // r1@8
  int v7; // r0@11
  int v8; // r0@22
  int *v9; // r4@27
  _BOOL4 v10; // r0@30
  int *v11; // r4@34
  unsigned __int16 v12; // r0@34
  unsigned __int16 v13; // r0@34
  int *v14; // r5@36
  int v15; // r6@36
  int *v16; // r4@44
  int *v17; // r0@56
  int *v18; // r1@63
  int v19; // r0@63
  unsigned int v20; // r0@65
  int *v21; // r1@69
  signed __int16 v22; // r0@69
  int *v23; // r1@75
  __int16 v24; // r2@86
  int *v25; // r1@88
  __int16 v26; // r0@88
  int *v27; // r5@93
  int v28; // r2@96
  int v29; // r6@96
  unsigned int v30; // r0@98
  unsigned int v31; // r4@98
  int *v32; // r0@107
  char v34; // [sp+4h] [bp-30h]@38
  int v35; // [sp+30h] [bp-4h]@114

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) | (*((_WORD *)v2 + 6) << 16);
  if ( word_300179C == 2 && *((_WORD *)v2 + 4) == 8 )
  {
    if ( *((_WORD *)v2 + 9) & 1 )
    {
      *((_WORD *)v2 + 4) = 16;
      v4 = &dword_3004B20[10 * v2024D20];
      if ( *((_BYTE *)v4 + 4) )
        *((_WORD *)v4 + 12) = 1;
    }
  }
  v5 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v5 <= 0x15 )
  {
    switch ( v5 )
    {
      case 0u:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        gSprites[68 * v2014800 + 62] &= 0xFBu;
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 1u:
        if ( v202F38F & 0x80 )
          return v35;
        StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_08400C4A);
        sub_8002EB0((int)&unk_3004210, (int)gStringVar4, 144, 2, 0xFu);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 2u:
        v7 = (unsigned __int16)word_3004226;
        goto _0811297C;
      case 3u:
        if ( !(sub_8075374() << 24) )
          return v35;
        audio_play(0x178u);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 4u:
        if ( !(unsigned __int8)mplay_has_finished_maybe() )
        {
          current_map_music_set(377);
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
          BeginNormalPaletteFade(28, 4, 0, 0x10u, 0);
        }
        return v35;
      case 5u:
        if ( v202F38F & 0x80 )
          return v35;
        v2024D20 = sub_8149970(17);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 6u:
        if ( !LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
        {
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
          v2014803 = 1;
          v2024D20 = sub_8149A90();
        }
        return v35;
      case 7u:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v35;
        v2024D20 = sub_8149E7C(v2014800, v2014801);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 8u:
        v8 = v2014803 - 1;
        --v2014803;
        if ( v8 << 24 )
          return v35;
        v2014803 = 3;
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v35;
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 9u:
        v2024D20 = sub_8149B44();
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 0xAu:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v35;
        v9 = &dword_3004B20[10 * v1];
        v2024D20 = sub_8149C20(*((_WORD *)v9 + 8));
        goto _08112992;
      case 0xBu:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v35;
        audio_play(0x21u);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 0xCu:
        v10 = mplay_has_finished_maybe() << 24;
        if ( !v10 )
          return v35;
        m4aMPlayAllStop(v10);
        v9 = &dword_3004B20[10 * v1];
        cry_related(*((_WORD *)v9 + 8), 0);
        memcpy(33745672, (const char *)0x2009000, 96);
        BeginNormalPaletteFade(28, 0, 0x10u, 0, 0);
        goto _08112992;
      case 0xDu:
        if ( sub_8075374() << 24 && !(v202F38F & 0x80) )
        {
          StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"½ãâÛæÕèéàÕèÝãâç«");
          sub_8002EB0((int)&unk_3004210, (int)gStringVar4, 144, 2, 0xFu);
          sub_8075474(0x173u);
          v11 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v11 + 4);
          SetMonData(v3, 11, (int)(v11 + 4));
          CalculateMonStats(v3);
          sub_803FB68(v3, *((_WORD *)v11 + 7), *((_WORD *)v11 + 8));
          v12 = SpeciesToNationalPokedexNum(*((_WORD *)v11 + 8));
          sub_8090D90(v12, 2u);
          v13 = SpeciesToNationalPokedexNum(*((_WORD *)v11 + 8));
          sub_8090D90(v13, 3u);
          sav12_xor_increment(0xEu);
        }
        return v35;
      case 0xEu:
        if ( word_3004226 )
          return v35;
        v14 = &dword_3004B20[10 * v1];
        v15 = (unsigned __int16)sub_803B7C8(v3, *((_BYTE *)v14 + 20));
        if ( !v15 || *((_WORD *)v14 + 15) )
        {
          BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
          v6 = &dword_3004B20[10 * v1];
_08112A2E:
          ++*((_WORD *)v6 + 4);
        }
        else
        {
          sub_8053E90();
          *((_WORD *)v14 + 9) |= 0x80u;
          *((_WORD *)v14 + 10) = 0;
          *((_WORD *)v14 + 12) = 0;
          GetMonData(v3, 2, (int)&v34);
          StringCopy10((int)byte_30041C0, (int)&v34);
          if ( v15 == 0xFFFF )
          {
            *((_WORD *)v14 + 4) = 21;
          }
          else if ( v15 != 65534 )
          {
            *((_WORD *)v14 + 4) = 19;
          }
        }
        break;
      case 0xFu:
        if ( !(v202F38F & 0x80) )
        {
          v16 = &dword_3004B20[10 * v1];
          if ( !(*((_WORD *)v16 + 9) & 0x80) )
            sub_8053E90();
          if ( !*((_WORD *)v16 + 15) )
            sub_81122B4(*((_WORD *)v16 + 7), v3);
          DestroyTask(v1);
          SetMainCallback2(dword_3005E94);
        }
        return v35;
      case 0x10u:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v35;
        m4aMPlayAllStop(LOBYTE(dword_3004B20[10 * v2024D20 + 1]));
        BeginNormalPaletteFade(393244, 0, 0x10u, 0, 0x7FFF);
        v6 = &dword_3004B20[10 * v1];
        goto _08112A2E;
      case 0x11u:
        v7 = v202F38F & 0x80;
_0811297C:
        if ( !v7 )
        {
          v9 = &dword_3004B20[10 * v1];
          cry_related(*((_WORD *)v9 + 7), 0);
_08112992:
          ++*((_WORD *)v9 + 4);
        }
        return v35;
      case 0x12u:
        if ( sub_8075374() << 24 )
        {
          StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"ÂéÜ¬");
          sub_8002EB0((int)&unk_3004210, (int)gStringVar4, 144, 2, 0xFu);
          v17 = &dword_3004B20[10 * v1];
          *((_WORD *)v17 + 15) = 1;
_08112F9A:
          *((_WORD *)v17 + 4) = 14;
        }
        return v35;
      case 0x13u:
        if ( word_3004226 || mplay_has_finished_maybe() << 24 )
          return v35;
        sub_8024CEC();
        fanfare_play(0x16Fu);
        get_battle_strings_(138405402);
        sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
        v6 = &dword_3004B20[10 * v1];
        *((_WORD *)v6 + 10) = 64;
        goto _08112A2E;
      case 0x14u:
        if ( !word_3004226 && !(mplay_has_finished_maybe() << 24) )
        {
          v18 = &dword_3004B20[10 * v1];
          v19 = *((_WORD *)v18 + 10) - 1;
          *((_WORD *)v18 + 10) = v19;
          if ( !(v19 << 16) )
            *((_WORD *)v18 + 4) = 14;
        }
        break;
      case 0x15u:
        v20 = LOWORD(dword_3004B20[10 * v1 + 6]);
        if ( v20 <= 0xB )
        {
          switch ( v20 )
          {
            case 0u:
              if ( word_3004226 || mplay_has_finished_maybe() << 24 )
                return v35;
              sub_8024CEC();
              get_battle_strings_(138405420);
              sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
              v21 = &dword_3004B20[10 * v1];
              v22 = *((_WORD *)v21 + 12) + 1;
              goto _08112FCE;
            case 1u:
              if ( word_3004226 || mplay_has_finished_maybe() << 24 )
                return v35;
              get_battle_strings_(138405447);
              sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
              v21 = &dword_3004B20[10 * v1];
              v22 = *((_WORD *)v21 + 12) + 1;
              goto _08112FCE;
            case 2u:
              if ( word_3004226 )
                return v35;
              if ( !(mplay_has_finished_maybe() << 24) )
              {
                get_battle_strings_(138405490);
                sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                v23 = &dword_3004B20[10 * v1];
                *((_WORD *)v23 + 13) = 5;
                *((_WORD *)v23 + 14) = 9;
                ++*((_WORD *)v23 + 12);
              }
              goto _08112BC0;
            case 3u:
_08112BC0:
              if ( !word_3004226 && !(mplay_has_finished_maybe() << 24) )
              {
                sub_8023A80();
                ++LOWORD(dword_3004B20[10 * v1 + 6]);
                v2024D1F = 0;
                sub_802BC6C();
              }
              return v35;
            case 4u:
              if ( word_300179E & 0x40 && v2024D1F )
              {
                audio_play(5u);
                nullsub_6();
                v2024D1F = 0;
                sub_802BC6C();
              }
              if ( word_300179E & 0x80 && !v2024D1F )
              {
                audio_play(5u);
                nullsub_6();
                v2024D1F = 1;
                sub_802BC6C();
              }
              if ( word_300179E & 1 )
              {
                sub_8023AD8();
                get_battle_strings_(138415126);
                sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                audio_play(5u);
                v24 = v2024D1F;
                if ( v2024D1F )
                {
                  LOWORD(dword_3004B20[10 * v1 + 6]) = dword_3004B20[10 * v1 + 7];
                }
                else
                {
                  v25 = &dword_3004B20[10 * v1];
                  v26 = *((_WORD *)v25 + 13);
                  *((_WORD *)v25 + 12) = v26;
                  if ( v26 == 5 )
                    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v24);
                }
              }
              if ( word_300179E & 2 )
              {
                sub_8023AD8();
                get_battle_strings_(138415126);
                sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                audio_play(5u);
                LOWORD(dword_3004B20[10 * v1 + 6]) = dword_3004B20[10 * v1 + 7];
              }
              return v35;
            case 5u:
              if ( !(v202F38F & 0x80) )
              {
                v27 = &dword_3004B20[10 * v1];
                sub_809D9F0((int)dword_3004360, *((_BYTE *)v27 + 32), byte_3004350 - 1, (int)sub_8111C90, v2024E82);
                ++*((_WORD *)v27 + 12);
              }
              return v35;
            case 6u:
              if ( v202F38F & 0x80 || (int (*)())dword_3001774 != sub_8112270 )
                return v35;
              v29 = (unsigned __int8)sub_809FA30();
              if ( v29 == 4 )
              {
                v21 = &dword_3004B20[10 * v1];
                v22 = 9;
              }
              else
              {
                v30 = GetMonData(v3, v29 + 13, v28) << 16;
                v31 = v30 >> 16;
                if ( sub_8040A00(HIWORD(v30)) )
                {
                  get_battle_strings_(138411689);
                  sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                  LOWORD(dword_3004B20[10 * v1 + 6]) = 11;
                  return v35;
                }
                byte_3004290[0] = -3;
                byte_3004291 = 2;
                word_3004292 = v31;
                byte_3004294 = -1;
                sub_803DE34(v3, v29);
                SetMonMoveSlot(v3, v2024E82, v29);
                get_battle_strings_(138411632);
                sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                v21 = &dword_3004B20[10 * v1];
                v22 = *((_WORD *)v21 + 12) + 1;
              }
_08112FCE:
              *((_WORD *)v21 + 12) = v22;
              break;
            case 7u:
              if ( word_3004226 || mplay_has_finished_maybe() << 24 )
                return v35;
              get_battle_strings_(138405525);
              sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
              v21 = &dword_3004B20[10 * v1];
              v22 = *((_WORD *)v21 + 12) + 1;
              goto _08112FCE;
            case 8u:
              if ( !word_3004226 && !(mplay_has_finished_maybe() << 24) )
              {
                get_battle_strings_(138411681);
                sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
                LOWORD(dword_3004B20[10 * v1 + 2]) = 19;
              }
              return v35;
            case 9u:
              get_battle_strings_(138405540);
              sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
              v32 = &dword_3004B20[10 * v1];
              *((_WORD *)v32 + 13) = 10;
              *((_WORD *)v32 + 14) = 0;
              *((_WORD *)v32 + 12) = 3;
              return v35;
            case 0xAu:
              get_battle_strings_(138405561);
              sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
              v17 = &dword_3004B20[10 * v1];
              goto _08112F9A;
            case 0xBu:
              if ( word_3004226 || mplay_has_finished_maybe() << 24 )
                return v35;
              v21 = &dword_3004B20[10 * v1];
              v22 = 5;
              goto _08112FCE;
            default:
              return v35;
          }
        }
        break;
      default:
        return v35;
    }
  }
  return v35;
}
