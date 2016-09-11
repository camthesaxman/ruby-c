int sub_8090C68()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(v202FFBC + 2) & 2 )
  {
    if ( *(_BYTE *)(v202FFB4 + 1614) )
    {
      MenuZeroFillWindowRect(2u, 0xDu, 0x1Bu, 0x13u);
      MenuPrint(*(_DWORD *)&gPokedexEntries[18 * *v202FFBC + 8], 2, 0xDu);
      *(_BYTE *)(v202FFB4 + 1614) = 0;
      --v6007ACA;
      --v6007B0A;
      audio_play(0x15u);
    }
    else
    {
      MenuZeroFillWindowRect(2u, 0xDu, 0x1Bu, 0x13u);
      MenuPrint(*(_DWORD *)&gPokedexEntries[18 * *v202FFBC + 10], 2, 0xDu);
      *(_BYTE *)(v202FFB4 + 1614) = 1;
      ++v6007ACA;
      ++v6007B0A;
      audio_play(0x15u);
    }
  }
  return v1;
}
