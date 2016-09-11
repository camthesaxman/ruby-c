int __fastcall sub_808CF48(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r0@4
  int v3; // r1@6
  int v4; // r2@7
  _WORD *v5; // r3@7
  unsigned int v6; // r0@19
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v4000012 = *(_WORD *)(v202FFB4 + 1620);
  if ( *(_WORD *)(v202FFB4 + 1620) != 96 )
  {
    *(_WORD *)(v202FFB4 + 1620) += 8;
    return v8;
  }
  if ( word_300179E & 1 )
  {
    v2 = *(_WORD *)(v202FFB4 + 1618);
    if ( v2 > 4 )
    {
def_808CF9E:
      word_300179E |= 8u;
    }
    else
    {
      switch ( v2 )
      {
        case 1u:
          v3 = v202FFB4;
          *(_WORD *)(v202FFB4 + 1550) = 0;
          *(_BYTE *)(v3 + 1580) = 64;
          goto _0808CFF8;
        case 2u:
          v4 = v202FFB4;
          v5 = (_WORD *)(v202FFB4 + 1548);
          *(_WORD *)(v202FFB4 + 1550) = *(_WORD *)(v202FFB4 + 1548) - 1;
          *(_BYTE *)(v4 + 1580) = 16 * *v5 + 48;
_0808CFF8:
          sub_808E82C();
          sub_808E0CC(*(_WORD *)(v202FFB4 + 1550), 14);
          goto def_808CF9E;
        default:
          goto def_808CF9E;
        case 3u:
          BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
          dword_3004B20[10 * v1] = (int)sub_808D214;
          audio_play(0x34u);
          break;
        case 4u:
          BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
          dword_3004B20[10 * v1] = (int)sub_808D2AC;
          audio_play(3u);
          break;
      }
    }
  }
  if ( word_300179E & 0xA )
  {
    *(_BYTE *)(v202FFB4 + 1616) = 0;
    dword_3004B20[10 * v1] = (int)sub_808CD0C;
_0808D0D4:
    audio_play(5u);
    return v8;
  }
  if ( word_30017A0 & 0x40 && *(_WORD *)(v202FFB4 + 1618) )
  {
    --*(_WORD *)(v202FFB4 + 1618);
    goto _0808D0D4;
  }
  if ( word_30017A0 & 0x80 )
  {
    v6 = *(_WORD *)(v202FFB4 + 1618);
    if ( v6 <= 3 )
    {
      *(_WORD *)(v202FFB4 + 1618) = v6 + 1;
      audio_play(5u);
    }
  }
  return v8;
}
