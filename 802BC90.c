int atkF3_receive_new_pokemon_maybe()
{
  __int16 v0; // r0@17
  char v1; // r0@17
  int v3; // [sp+24h] [bp-4h]@0

  if ( v2024D1E <= 4u )
  {
    switch ( v2024D1E )
    {
      case 0u:
        sub_8023A80();
        ++v2024D1E;
        v2024D1F = 0;
        sub_802BC6C();
        return v3;
      case 1u:
        if ( word_300179E & 0x40 && v2024D1F )
        {
          audio_play(5);
          nullsub_6();
          v2024D1F = 0;
          sub_802BC6C();
        }
        if ( word_300179E & 0x80 && !v2024D1F )
        {
          audio_play(5);
          nullsub_6();
          v2024D1F = 1;
          sub_802BC6C();
        }
        if ( word_300179E & 1 )
        {
          audio_play(5);
          if ( !v2024D1F )
          {
            ++v2024D1E;
            BeginFastPaletteFade(3);
            return v3;
          }
        }
        else
        {
          if ( !(word_300179E & 2) )
            return v3;
          audio_play(5);
        }
        v2024D1E = 4;
        break;
      case 2u:
        if ( !(v202F38F & 0x80) )
        {
          GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A), 2);
          v0 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A), 11);
          v1 = GetMonGender((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A));
          GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A), 0);
          DoNamingScreen(2);
          ++v2024D1E;
        }
        return v3;
      case 3u:
        if ( (int (*)())dword_3001774 == sub_800F808 && !(v202F38F & 0x80) )
        {
          SetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A), 2, 33644665);
          goto _0802BEC0;
        }
        return v3;
      case 4u:
        if ( (unsigned __int8)calc_player_party_count(33705246) == 6 )
          v2024C10 += 5;
        else
_0802BEC0:
          v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
        return v3;
      default:
        return v3;
    }
  }
  return v3;
}
