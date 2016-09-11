int __fastcall sub_80B1710(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@3
  unsigned int v3; // r2@11
  int v5; // [sp+8h] [bp-4h]@0

  v1 = v2019216;
  if ( a1 > 8u )
  {
def_80B1728:
    v2 = 16 * v2019216;
    *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                              + 20) & 0x3FF;
    audio_play(0x2Du);
  }
  else
  {
    switch ( a1 )
    {
      case 0u:
      case 1u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | *(_WORD *)&gSprites[68 * v2019216 + 46] & 0x3FF;
        audio_play(0x20u);
        break;
      case 2u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 4) & 0x3FF;
        audio_play(0x1Fu);
        break;
      case 3u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 8) & 0x3FF;
        audio_play(0x1Fu);
        break;
      case 4u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 12) & 0x3FF;
        audio_play(0x2Du);
        break;
      case 5u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 12) & 0x3FF;
        audio_play(0x2Du);
        break;
      case 6u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 16) & 0x3FF;
        audio_play(0x2Du);
        break;
      case 8u:
        v2 = 16 * v2019216;
        *(_WORD *)&gSprites[68 * v2019216 + 4] = *(_WORD *)&gSprites[68 * v2019216 + 4] & 0xFC00 | (*(_WORD *)&gSprites[68 * v2019216 + 46]
                                                                                                  + 24) & 0x3FF;
        audio_play(0xC3u);
        break;
      default:
        goto def_80B1728;
    }
  }
  v3 = 4 * (v2 + v1);
  *(_WORD *)&gSprites[v3 + 48] = 0;
  gSprites[v3 + 62] &= 0xFBu;
  dword_2020020[v3 / 4] = (int)sub_80B16D0;
  v201920A |= 0x10u;
  return v5;
}
