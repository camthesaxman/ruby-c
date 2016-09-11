int __fastcall sub_8090A3C(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r1@2
  int *v3; // r5@4
  int v4; // r4@5
  int *v5; // r0@7
  __int16 v6; // r1@7
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 2 )
  {
    BeginNormalPaletteFade(65532, 0, 0, 0x10u, 0);
    v2 = &dword_3004B20[10 * v1];
    dword_2020020[17 * *((_WORD *)v2 + 7)] = (int)sub_8090C28;
    *v2 = (int)sub_8090B8C;
  }
  else
  {
    if ( word_300179E & 1 )
    {
      v3 = &dword_3004B20[10 * a1];
      if ( *((_WORD *)v3 + 8) )
      {
        BeginNormalPaletteFade(65532, 0, 0, 0x10u, word_300179E & 2);
        dword_2020020[17 * *((_WORD *)v3 + 7)] = (int)sub_8090C28;
        *v3 = (int)sub_8090B8C;
        return v8;
      }
      v4 = *((_WORD *)v3 + 5);
      MenuZeroFillWindowRect(2u, 0xDu, 0x1Bu, 0x13u);
      MenuPrint(*(_DWORD *)&gPokedexEntries[18 * v4 + 10], 2, 0xDu);
      ++v6007ACA;
      ++v6007B0A;
      *((_WORD *)v3 + 8) = 1;
      audio_play(0x15u);
    }
    v5 = &dword_3004B20[10 * v1];
    v6 = *((_WORD *)v5 + 6) + 1;
    *((_WORD *)v5 + 6) = v6;
    if ( v6 & 0x10 )
      LoadPalette((int)&unk_8E87AF6, 81, 14);
    else
      LoadPalette((int)&unk_8E87B56, 81, 14);
  }
  return v8;
}
