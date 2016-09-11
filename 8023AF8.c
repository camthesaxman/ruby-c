int sub_8023AF8()
{
  int v0; // r0@6
  int v1; // r0@9
  char v2; // r0@12
  int v3; // r5@20
  int v4; // r4@22
  int v6; // [sp+1Ch] [bp-4h]@0

  v2024A60 = 0;
  if ( v201601A <= 5u )
  {
    switch ( v201601A )
    {
      case 0u:
        sub_8023A80();
        ++v201601A;
        v2024D1F = 0;
        sub_802BC6C();
        return v6;
      case 1u:
        if ( word_300179E & 0x40 && v2024D1F )
        {
          v0 = audio_play(5);
          nullsub_6(v0);
          v2024D1F = 0;
          sub_802BC6C();
        }
        if ( word_300179E & 0x80 && !v2024D1F )
        {
          v1 = audio_play(5);
          nullsub_6(v1);
          v2024D1F = 1;
          sub_802BC6C();
        }
        if ( word_300179E & 1 )
        {
          audio_play(5);
          if ( !v2024D1F )
          {
            sub_8023AD8();
            BeginNormalPaletteFade(-1, 0, 0, 16);
            v2 = v201601A + 1;
            goto _08023E5A;
          }
        }
        else
        {
          if ( !(word_300179E & 2) )
            return v6;
          audio_play(5);
        }
        v201601A = 4;
        break;
      case 2u:
        if ( !(v202F38F & 0x80) )
        {
          sub_809D9F0(&unk_3004360, v2016018, ((unsigned __int8)byte_3004350 - 1) & 0xFF, sub_807AD58);
          v2 = v201601A + 1;
          goto _08023E5A;
        }
        return v6;
      case 3u:
        if ( !(v202F38F & 0x80) && (int (*)())dword_3001774 == sub_800F808 )
        {
          v3 = sub_809FA30() & 0xFF;
          if ( v3 == 4 )
          {
            v201601A = 4;
          }
          else
          {
            v4 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v2016018, v3 + 13);
            if ( sub_8040A00(v4) )
            {
              b_std_message(319, v2024A60);
              v2 = 5;
              goto _08023E5A;
            }
            v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
            byte_3004290[0] = -3;
            byte_3004291 = 2;
            word_3004292 = v4;
            byte_3004294 = -1;
            sub_803DE34((char *)&unk_3004360 + 100 * v2016018, v3);
            SetMonMoveSlot((char *)&unk_3004360 + 100 * v2016018, v2024E82, v3);
            if ( v2024A6A == v2016018 && !(v2024AD0 & 0x200000) && !(((unsigned int)v2024CC0 >> 4) & gBitTable[v3]) )
            {
              sub_803DE70(33704576, v3);
              SetBattleMonMoveSlot(33704576, v2024E82, v3);
            }
            if ( v20239F8 & 1
              && v2024A6E == v2016018
              && !(v2024B80 & 0x200000)
              && !(((unsigned int)v2024CF8 >> 4) & gBitTable[v3]) )
            {
              sub_803DE70(33704752, v3);
              SetBattleMonMoveSlot(33704752, v2024E82, v3);
            }
          }
        }
        return v6;
      case 4u:
        sub_8023AD8();
        v2024C10 += 5;
        return v6;
      case 5u:
        if ( !v2024A64 )
        {
          v2 = 2;
_08023E5A:
          v201601A = v2;
        }
        return v6;
      default:
        return v6;
    }
  }
  return v6;
}
