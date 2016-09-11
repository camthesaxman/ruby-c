int __fastcall sub_8112FE8(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r1@1
  int v3; // r8@1
  unsigned int v4; // r0@1
  int *v5; // r0@3
  int *v6; // r4@5
  int v7; // r0@16
  int *v8; // r4@31
  unsigned __int16 v9; // r0@31
  unsigned __int16 v10; // r0@31
  int *v11; // r5@34
  int v12; // r6@34
  int *v13; // r1@40
  int *v14; // r1@49
  int v15; // r0@49
  unsigned int v16; // r0@51
  int *v17; // r1@55
  signed __int16 v18; // r0@55
  int *v19; // r1@61
  int v20; // r0@64
  int v21; // r0@67
  int v22; // r0@70
  int v23; // r0@72
  __int16 v24; // r2@72
  int *v25; // r1@74
  __int16 v26; // r0@74
  int v27; // r0@77
  int *v28; // r5@79
  int v29; // r2@82
  int v30; // r6@82
  unsigned int v31; // r0@84
  unsigned int v32; // r4@84
  int *v33; // r0@93
  char v35; // [sp+4h] [bp-30h]@36
  int v36; // [sp+30h] [bp-4h]@99

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) | (*((_WORD *)v2 + 6) << 16);
  v4 = *((_WORD *)v2 + 4);
  if ( v4 <= 0x11 )
  {
    switch ( v4 )
    {
      case 0u:
        StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_08400C4A);
        sub_8002EB0(dword_3004828 + 4, (int)gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        v5 = &dword_3004B20[10 * v1];
        goto _08113298;
      case 1u:
        if ( *(_WORD *)(dword_3004828 + 26) )
          return v36;
        v6 = &dword_3004B20[10 * v1];
        cry_related(*((_WORD *)v6 + 7), 0);
        goto _081132E2;
      case 2u:
        if ( !(sub_8075374() << 24) )
          return v36;
        m4aSongNumStop(377);
        audio_play(0x178u);
        v5 = &dword_3004B20[10 * v1];
        goto _08113298;
      case 3u:
        if ( !(unsigned __int8)mplay_has_finished_maybe() )
        {
          sub_8075474(0x179u);
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
          BeginNormalPaletteFade(28, 4, 0, 0x10u, 0);
        }
        return v36;
      case 4u:
        if ( v202F38F & 0x80 )
          return v36;
        v4000000 = 4928;
        v2024D20 = sub_8149970(17);
        v5 = &dword_3004B20[10 * v1];
        goto _08113298;
      case 5u:
        if ( !LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
        {
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
          v2014803 = 1;
          v2024D20 = sub_8149A90();
        }
        return v36;
      case 6u:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v36;
        v2024D20 = sub_8149E7C(v2014800, v2014801);
        goto _08113290;
      case 7u:
        v7 = v2014803 - 1;
        --v2014803;
        if ( !(v7 << 24) )
        {
          v2014803 = 3;
          if ( !LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
            goto _08113290;
        }
        return v36;
      case 8u:
        v2024D20 = sub_8149B44();
        v5 = &dword_3004B20[10 * v1];
        goto _08113298;
      case 9u:
        if ( LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
          return v36;
        v6 = &dword_3004B20[10 * v1];
        v2024D20 = sub_8149D5C(*((_WORD *)v6 + 8));
        goto _081132E2;
      case 0xAu:
        if ( !LOBYTE(dword_3004B20[10 * v2024D20 + 1]) )
        {
          audio_play(0x21u);
_08113290:
          v5 = &dword_3004B20[10 * v1];
_08113298:
          ++*((_WORD *)v5 + 4);
        }
        return v36;
      case 0xBu:
        if ( mplay_has_finished_maybe() << 24 )
        {
          v6 = &dword_3004B20[10 * v1];
          cry_related(*((_WORD *)v6 + 8), 0);
          memcpy(33745672, (const char *)0x2009000, 96);
          BeginNormalPaletteFade(1, 0, 0x10u, 0, 0);
_081132E2:
          ++*((_WORD *)v6 + 4);
        }
        return v36;
      case 0xCu:
        if ( sub_8075374() << 24 && !(v202F38F & 0x80) )
        {
          StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)"½ãâÛæÕèéàÕèÝãâç«");
          sub_8002EB0(dword_3004828 + 4, (int)gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
          fanfare_play(0x173u);
          v8 = &dword_3004B20[10 * v1];
          ++*((_WORD *)v8 + 4);
          SetMonData(v3, 11, (int)(v8 + 4));
          CalculateMonStats(v3);
          sub_803FB68(v3, *((_WORD *)v8 + 7), *((_WORD *)v8 + 8));
          v9 = SpeciesToNationalPokedexNum(*((_WORD *)v8 + 8));
          sub_8090D90(v9, 2u);
          v10 = SpeciesToNationalPokedexNum(*((_WORD *)v8 + 8));
          sub_8090D90(v10, 3u);
          sav12_xor_increment(0xEu);
        }
        return v36;
      case 0xDu:
        if ( *(_WORD *)(dword_3004828 + 26) || (unsigned __int8)task_is_not_running_overworld_fanfare() != 1 )
          return v36;
        v11 = &dword_3004B20[10 * v1];
        v12 = (unsigned __int16)sub_803B7C8(v3, *((_BYTE *)v11 + 20));
        if ( !v12 || *((_WORD *)v11 + 15) )
        {
          sub_8075474(0x179u);
          sub_8002EB0(dword_3004828 + 4, (int)"ÆÝâß", *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
          v13 = &dword_3004B20[10 * v1];
_081134DC:
          ++*((_WORD *)v13 + 4);
        }
        else
        {
          *((_WORD *)v11 + 9) |= 0x80u;
          *((_WORD *)v11 + 10) = 0;
          *((_WORD *)v11 + 12) = 0;
          GetMonData(v3, 2, (int)&v35);
          StringCopy10((int)byte_30041C0, (int)&v35);
          if ( v12 == 0xFFFF )
          {
            *((_WORD *)v11 + 4) = 17;
          }
          else if ( v12 != 65534 )
          {
            *((_WORD *)v11 + 4) = 15;
          }
        }
        break;
      case 0xEu:
        if ( !*(_WORD *)(dword_3004828 + 26) )
        {
          DestroyTask(v1);
          SetMainCallback2(dword_3005E94);
        }
        return v36;
      case 0xFu:
        if ( *(_WORD *)(dword_3004828 + 26) || mplay_has_finished_maybe() << 24 )
          return v36;
        sub_8024CEC();
        fanfare_play(0x16Fu);
        get_battle_strings_(138405402);
        sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        v13 = &dword_3004B20[10 * v1];
        *((_WORD *)v13 + 10) = 64;
        goto _081134DC;
      case 0x10u:
        if ( !*(_WORD *)(dword_3004828 + 26) && (unsigned __int8)task_is_not_running_overworld_fanfare() == 1 )
        {
          v14 = &dword_3004B20[10 * v1];
          v15 = *((_WORD *)v14 + 10) - 1;
          *((_WORD *)v14 + 10) = v15;
          if ( !(v15 << 16) )
            *((_WORD *)v14 + 4) = 13;
        }
        break;
      case 0x11u:
        v16 = LOWORD(dword_3004B20[10 * v1 + 6]);
        if ( v16 <= 0xB )
        {
          switch ( v16 )
          {
            case 0u:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(mplay_has_finished_maybe() << 24) )
              {
                sub_8024CEC();
                get_battle_strings_(138405420);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                v17 = &dword_3004B20[10 * v1];
                v18 = *((_WORD *)v17 + 12) + 1;
                goto _08113B38;
              }
              break;
            case 1u:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(mplay_has_finished_maybe() << 24) )
              {
                get_battle_strings_(138405447);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                v17 = &dword_3004B20[10 * v1];
                v18 = *((_WORD *)v17 + 12) + 1;
                goto _08113B38;
              }
              break;
            case 2u:
              if ( !*(_WORD *)(dword_3004828 + 26) )
              {
                if ( !(mplay_has_finished_maybe() << 24) )
                {
                  get_battle_strings_(138405490);
                  sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                  v19 = &dword_3004B20[10 * v1];
                  *((_WORD *)v19 + 13) = 5;
                  *((_WORD *)v19 + 14) = 9;
                  ++*((_WORD *)v19 + 12);
                }
                goto _08113682;
              }
              break;
            case 3u:
_08113682:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(unsigned __int8)mplay_has_finished_maybe() )
              {
                DrawTextWindow(dword_3004828 + 4, 0x18u, 8u);
                v2024D1F = 0;
                InitWindow(dword_3004828 + 4, (int)&gUnknown_0842D1FE, *(_BYTE *)(dword_3004828 + 52) + 128, 25, 9);
                sub_8002F44(dword_3004828 + 4);
                v20 = sub_814A5C0(0, 0xFFFF, 12, 11679);
                sub_81150D8(v20);
                ++LOWORD(dword_3004B20[10 * v1 + 6]);
                v2024D1F = 0;
              }
              break;
            case 4u:
              if ( word_300179E & 0x40 && v2024D1F )
              {
                v21 = audio_play(5u);
                nullsub_24(v21);
                v2024D1F = 0;
                ((void (*)(void))sub_81150D8)();
              }
              if ( word_300179E & 0x80 && !v2024D1F )
              {
                v22 = audio_play(5u);
                nullsub_24(v22);
                v2024D1F = 1;
                ((void (*)(void))sub_81150D8)();
              }
              if ( word_300179E & 1 )
              {
                v23 = ZeroFillWindowRect(dword_3004828 + 4, 0x18u, 8u, 0x1Du, 0xDu);
                sub_814A7FC(v23);
                get_battle_strings_(138415126);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
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
                v27 = ZeroFillWindowRect(dword_3004828 + 4, 0x18u, 8u, 0x1Du, 0xDu);
                sub_814A7FC(v27);
                get_battle_strings_(138415126);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                audio_play(5u);
                LOWORD(dword_3004B20[10 * v1 + 6]) = dword_3004B20[10 * v1 + 7];
              }
              break;
            case 5u:
              if ( !(v202F38F & 0x80) )
              {
                v28 = &dword_3004B20[10 * v1];
                sub_809D9F0((int)dword_3004360, *((_BYTE *)v28 + 32), byte_3004350 - 1, (int)sub_8111E80, v2024E82);
                ++*((_WORD *)v28 + 12);
              }
              break;
            case 6u:
              if ( !(v202F38F & 0x80) && (int (*)())dword_3001774 == sub_8112290 )
              {
                v30 = (unsigned __int8)sub_809FA30();
                if ( v30 == 4 )
                {
                  v17 = &dword_3004B20[10 * v1];
                  v18 = 9;
                  goto _08113B38;
                }
                v31 = GetMonData(v3, v30 + 13, v29) << 16;
                v32 = v31 >> 16;
                if ( !sub_8040A00(HIWORD(v31)) )
                {
                  byte_3004290[0] = -3;
                  byte_3004291 = 2;
                  word_3004292 = v32;
                  byte_3004294 = -1;
                  sub_803DE34(v3, v30);
                  SetMonMoveSlot(v3, v2024E82, v30);
                  get_battle_strings_(138411632);
                  sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                  v17 = &dword_3004B20[10 * v1];
                  v18 = *((_WORD *)v17 + 12) + 1;
                  goto _08113B38;
                }
                get_battle_strings_(138411689);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                LOWORD(dword_3004B20[10 * v1 + 6]) = 11;
              }
              break;
            case 7u:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(mplay_has_finished_maybe() << 24) )
              {
                get_battle_strings_(138405525);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                v17 = &dword_3004B20[10 * v1];
                v18 = *((_WORD *)v17 + 12) + 1;
                goto _08113B38;
              }
              break;
            case 8u:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(mplay_has_finished_maybe() << 24) )
              {
                get_battle_strings_(138411681);
                sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
                LOWORD(dword_3004B20[10 * v1 + 2]) = 15;
              }
              break;
            case 9u:
              get_battle_strings_(138405540);
              sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
              v33 = &dword_3004B20[10 * v1];
              *((_WORD *)v33 + 13) = 10;
              *((_WORD *)v33 + 14) = 0;
              *((_WORD *)v33 + 12) = 3;
              break;
            case 0xAu:
              get_battle_strings_(138405561);
              sub_8002EB0(dword_3004828 + 4, 33700044, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
              LOWORD(dword_3004B20[10 * v1 + 2]) = 13;
              break;
            case 0xBu:
              if ( !*(_WORD *)(dword_3004828 + 26) && !(mplay_has_finished_maybe() << 24) )
              {
                v17 = &dword_3004B20[10 * v1];
                v18 = 5;
_08113B38:
                *((_WORD *)v17 + 12) = v18;
              }
              break;
            default:
              return v36;
          }
        }
        break;
      default:
        return v36;
    }
  }
  return v36;
}
