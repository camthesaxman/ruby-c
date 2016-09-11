int __fastcall sub_8142570(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r3@1
  int v3; // r0@2
  int *v4; // r0@5
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  BeginNormalPaletteFade(-65536, 0, 0, 0, 0);
  v2 = 0;
  do
  {
    v3 = *((_WORD *)&byte_3004B28[40 * v1] + v2 + 5);
    if ( v3 != 255 )
      gSprites[68 * v3 + 5] &= 0xF3u;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 5 );
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  sub_8143068(0, 15);
  audio_play(0x69u);
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 7) = 400;
  *v4 = (int)sub_8142618;
  return v6;
}
