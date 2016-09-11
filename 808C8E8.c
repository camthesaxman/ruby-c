int __fastcall sub_808C8E8(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r3@1
  __int16 v3; // r1@3
  signed int v4; // r0@4
  _BYTE *v5; // r1@9
  int v6; // r0@9
  unsigned int v7; // r0@21
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = v202FFB4;
  v4000012 = *(_WORD *)(v202FFB4 + 1620);
  if ( *(_WORD *)(v202FFB4 + 1620) != 80 )
  {
    *(_WORD *)(v202FFB4 + 1620) += 8;
    return v9;
  }
  v3 = word_300179E;
  if ( !(word_300179E & 1) )
    goto _0808C9C4;
  v4 = *(_WORD *)(v202FFB4 + 1618);
  if ( v4 == 1 )
  {
    *(_WORD *)(v202FFB4 + 1550) = 0;
    v5 = (_BYTE *)(v2 + 1580);
    LOBYTE(v6) = 64;
_0808C978:
    *v5 = v6;
    sub_808E82C();
    sub_808E0CC(*(_WORD *)(v202FFB4 + 1550), 14);
    v3 = word_300179E;
    goto _0808C98C;
  }
  if ( v4 <= 1 )
  {
_0808C98C:
    word_300179E = v3 | 8;
    goto _0808C9C4;
  }
  if ( v4 == 2 )
  {
    *(_WORD *)(v202FFB4 + 1550) = *(_WORD *)(v202FFB4 + 1548) - 1;
    v6 = 16 * *(_WORD *)(v2 + 1548) + 48;
    v5 = (_BYTE *)(v2 + 1580);
    goto _0808C978;
  }
  if ( v4 != 3 )
    goto _0808C98C;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_808CC50;
  audio_play(3u);
_0808C9C4:
  if ( word_300179E & 0xA )
  {
    *(_BYTE *)(v202FFB4 + 1616) = 0;
    dword_3004B20[10 * v1] = (int)sub_808C650;
_0808CA20:
    audio_play(5u);
    return v9;
  }
  if ( word_30017A0 & 0x40 && *(_WORD *)(v202FFB4 + 1618) )
  {
    --*(_WORD *)(v202FFB4 + 1618);
    goto _0808CA20;
  }
  if ( word_30017A0 & 0x80 )
  {
    v7 = *(_WORD *)(v202FFB4 + 1618);
    if ( v7 <= 2 )
    {
      *(_WORD *)(v202FFB4 + 1618) = v7 + 1;
      audio_play(5u);
    }
  }
  return v9;
}
