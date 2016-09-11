signed int sub_808E71C()
{
  int v0; // r4@1
  int v1; // r2@3
  int v2; // r1@6
  _BYTE *v3; // r1@9
  char v4; // r0@9
  int v5; // r2@13
  int v6; // r1@16

  v0 = *(_WORD *)(v202FFB4 + 1550);
  if ( !(word_300179E & 0x40) || !*(_WORD *)(v202FFB4 + 1550) )
  {
    if ( !(word_300179E & 0x80) || v0 >= *(_WORD *)(v202FFB4 + 1548) - 1 )
      return 0;
    v5 = *(_WORD *)(v202FFB4 + 1550);
    while ( 1 )
    {
      v5 = (unsigned __int16)sub_8091818(0, v5, 0, (*(_WORD *)(v202FFB4 + 1548) - 1) & 0xFFFF);
      if ( *(_BYTE *)(v202FFB4 + 4 * v5 + 2) << 31 )
        break;
      if ( v5 >= *(_WORD *)(v202FFB4 + 1548) - 1 )
        goto _0808E7F4;
    }
    v0 = v5;
_0808E7F4:
    v6 = v202FFB4;
    if ( *(_WORD *)(v202FFB4 + 1550) == v0 )
      return 0;
    *(_WORD *)(v202FFB4 + 1550) = v0;
    v3 = (_BYTE *)(v6 + 1580);
    v4 = *v3 + 16;
_0808E80C:
    *v3 = v4;
    return 1;
  }
  v1 = *(_WORD *)(v202FFB4 + 1550);
  while ( 1 )
  {
    v1 = (unsigned __int16)sub_8091818(1, v1, 0, (*(_WORD *)(v202FFB4 + 1548) - 1) & 0xFFFF);
    if ( *(_BYTE *)(v202FFB4 + 4 * v1 + 2) << 31 )
      break;
    if ( !v1 )
      goto _0808E76A;
  }
  v0 = v1;
_0808E76A:
  v2 = v202FFB4;
  if ( *(_WORD *)(v202FFB4 + 1550) != v0 )
  {
    *(_WORD *)(v202FFB4 + 1550) = v0;
    v3 = (_BYTE *)(v2 + 1580);
    v4 = *v3 - 16;
    goto _0808E80C;
  }
  return 0;
}
