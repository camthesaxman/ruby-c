int __fastcall sub_808C650(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r1@7
  signed int v3; // r0@9
  unsigned __int8 v4; // r0@9
  int *v5; // r3@9
  int v6; // r0@9
  __int16 v7; // r0@12
  int v8; // r1@12
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v4000012 = *(_WORD *)(v202FFB4 + 1620);
  if ( *(_WORD *)(v202FFB4 + 1620) )
  {
    *(_WORD *)(v202FFB4 + 1620) -= 8;
  }
  else if ( word_300179E & 1 && *(_BYTE *)(v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1550) + 2) << 31 )
  {
    sub_808E6BC();
    BeginNormalPaletteFade(
      ~(1 << (((unsigned __int8)gSprites[68 * *(_WORD *)(v202FFB4 + 1574) + 5] >> 4) + 16)),
      0,
      0,
      0x10u,
      0);
    dword_2020020[17 * *(_WORD *)(v202FFB4 + 1574)] = (int)sub_808EDB8;
    dword_3004B20[10 * v1] = (int)sub_808CA64;
    audio_play(0x15u);
  }
  else if ( word_300179E & 8 )
  {
    v2 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1620) = 0;
    *(_BYTE *)(v2 + 1616) = 1;
    *(_WORD *)(v202FFB4 + 1618) = 0;
    dword_3004B20[10 * a1] = (int)sub_808C8E8;
    audio_play(5u);
  }
  else if ( word_300179E & 4 )
  {
    audio_play(5u);
    v3 = BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    v4 = sub_8091E3C(v3);
    v5 = &dword_3004B20[10 * v1];
    *((_WORD *)v5 + 4) = v4;
    *(_BYTE *)(v202FFB4 + 1615) = 0;
    v6 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1578) = *(_BYTE *)(v202FFB4 + 1580);
    *(_WORD *)(v6 + 1552) = *(_WORD *)(v6 + 1550);
    *(_WORD *)(v6 + 1556) = *(_WORD *)(v6 + 1554);
    *(_WORD *)(v6 + 1560) = *(_WORD *)(v6 + 1558);
    *v5 = (int)sub_808CB8C;
    audio_play(2u);
  }
  else if ( word_300179E & 2 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, word_300179E & 4);
    dword_3004B20[10 * v1] = (int)sub_808CC50;
    audio_play(3u);
  }
  else
  {
    v7 = sub_808E48C(*(_WORD *)(v202FFB4 + 1550), 14);
    v8 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1550) = v7;
    if ( *(_BYTE *)(v8 + 1582) )
      dword_3004B20[10 * v1] = (int)sub_808C898;
  }
  return v10;
}
