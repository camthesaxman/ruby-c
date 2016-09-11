int __fastcall sub_808E48C(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r7@1
  unsigned __int16 v3; // r4@1
  signed int v4; // r10@1
  int v5; // r0@5
  char v6; // r6@8
  unsigned int v7; // r4@8
  char v8; // r6@13
  unsigned int v9; // r4@13
  signed int v10; // r0@3
  unsigned int v11; // r0@20
  unsigned int v12; // r5@20
  __int16 v13; // r3@20
  int v14; // r1@20
  int v15; // r2@20
  unsigned int v16; // r0@20

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( word_300179C & 0x40 && a1 )
  {
    v4 = 1;
    v2 = sub_8091818(1, a1, 0, (*(_WORD *)(v202FFB4 + 1548) - 1) & 0xFFFF);
    sub_808E398(1, v2);
    v10 = 1;
_0808E60E:
    sub_808DBE8(v10, v2, v3);
    audio_play(0x6Cu);
    goto _0808E5A2;
  }
  if ( word_300179C & 0x80 )
  {
    v5 = *(_WORD *)(v202FFB4 + 1548) - 1;
    if ( v2 < v5 )
    {
      v4 = 2;
      v2 = sub_8091818(0, v2, 0, (unsigned __int16)v5);
      sub_808E398(2, v2);
      v10 = 2;
      goto _0808E60E;
    }
  }
  if ( word_300179E & 0x20 && v2 )
  {
    v6 = v2;
    v7 = 0;
    do
    {
      v2 = sub_8091818(1, v2, 0, (*(_WORD *)(v202FFB4 + 1548) - 1) & 0xFFFF);
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 6 );
    *(_BYTE *)(v202FFB4 + 1580) += 16 * (v2 - v6);
    sub_808E82C();
    sub_808E0CC(v2, 0xEu);
    audio_play(0x6Du);
  }
  else if ( word_300179E & 0x10 && v2 < *(_WORD *)(v202FFB4 + 1548) - 1 )
  {
    v8 = v2;
    v9 = 0;
    do
    {
      v2 = sub_8091818(0, v2, 0, (*(_WORD *)(v202FFB4 + 1548) - 1) & 0xFFFF);
      v9 = (v9 + 1) & 0xFF;
    }
    while ( v9 <= 6 );
    *(_BYTE *)(v202FFB4 + 1580) += 16 * (v2 - v8);
    sub_808E82C();
    sub_808E0CC(v2, 0xEu);
    audio_play(0x6Du);
  }
_0808E5A2:
  if ( v4 )
  {
    v11 = (unsigned int)*(_WORD *)(v202FFB4 + 1592) >> 2;
    v12 = gUnknown_083A05EC[v11];
    v13 = gUnknown_083A05F1[v11];
    *(_BYTE *)(v202FFB4 + 1582) = v13;
    v14 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1590) = v13;
    *(_WORD *)(v14 + 1588) = v12;
    *(_BYTE *)(v14 + 1583) = v4;
    v15 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1576) = v12 >> 1;
    sub_808E208(*(_BYTE *)(v15 + 1583), *(_BYTE *)(v15 + 1588), *(_BYTE *)(v15 + 1590));
    v16 = *(_WORD *)(v202FFB4 + 1592);
    if ( v16 <= 0xB )
      *(_WORD *)(v202FFB4 + 1592) = v16 + 1;
  }
  else
  {
    *(_WORD *)(v202FFB4 + 1592) = 0;
  }
  return v2;
}
