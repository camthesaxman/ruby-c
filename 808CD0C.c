int __fastcall sub_808CD0C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r2@5
  signed int v3; // r0@5
  int v4; // r1@7
  signed int v5; // r0@9
  unsigned __int8 v6; // r0@9
  int *v7; // r1@9
  __int16 v8; // r0@12
  int v9; // r1@12
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v4000012 = *(_WORD *)(v202FFB4 + 1620);
  if ( *(_WORD *)(v202FFB4 + 1620) )
  {
    *(_WORD *)(v202FFB4 + 1620) -= 8;
  }
  else if ( word_300179E & 1 && *(_BYTE *)(v202FFB4 + 4 * *(_WORD *)(v202FFB4 + 1550) + 2) << 31 )
  {
    sub_808E6BC();
    v2 = 17 * *(_WORD *)(v202FFB4 + 1574);
    v3 = 1 << (((unsigned __int8)gSprites[v2 * 4 + 5] >> 4) + 16);
    dword_2020020[v2] = (int)sub_808EDB8;
    BeginNormalPaletteFade(~v3, 0, 0, 0x10u, 0);
    dword_3004B20[10 * v1] = (int)sub_808D118;
    audio_play(0x15u);
  }
  else if ( word_300179E & 8 )
  {
    v4 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1620) = 0;
    *(_BYTE *)(v4 + 1616) = 1;
    *(_WORD *)(v202FFB4 + 1618) = 0;
    dword_3004B20[10 * a1] = (int)sub_808CF48;
    audio_play(5u);
  }
  else if ( word_300179E & 4 )
  {
    v5 = BeginNormalPaletteFade(-1, 0, 0, 0x10u, word_300179E & 8);
    v6 = sub_8091E3C(v5);
    v7 = &dword_3004B20[10 * v1];
    *((_WORD *)v7 + 4) = v6;
    *(_BYTE *)(v202FFB4 + 1615) = 0;
    *v7 = (int)sub_808CB8C;
    audio_play(2u);
  }
  else if ( word_300179E & 2 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, word_300179E & 4);
    dword_3004B20[10 * v1] = (int)sub_808D214;
    audio_play(3u);
  }
  else
  {
    v8 = sub_808E48C(*(_WORD *)(v202FFB4 + 1550), 14);
    v9 = v202FFB4;
    *(_WORD *)(v202FFB4 + 1550) = v8;
    if ( *(_BYTE *)(v9 + 1582) )
      dword_3004B20[10 * v1] = (int)sub_808CEF8;
  }
  return v11;
}
