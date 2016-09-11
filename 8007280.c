int InitLocalLinkPlayer()
{
  signed int v0; // r4@1
  int v2; // [sp+14h] [bp-4h]@0

  dword_3002A04 = v2024EAE | (v2024EAF << 8) | (v2024EB0 << 16) | (v2024EB1 << 24);
  v0 = 0;
  do
  {
    byte_3002A08[v0] = *(_BYTE *)(v0 + 33705636);
    ++v0;
  }
  while ( v0 <= 10 );
  byte_3002A13 = v2024EAC;
  dword_3002A14 = (unsigned __int16)gLinkType;
  word_3002A1A = (unsigned __int8)gGameLanguage;
  localLinkPlayer = (unsigned __int8)gGameVersion + 0x4000;
  word_3002A02 = 0;
  return v2;
}
