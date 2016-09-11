int __fastcall sub_8090B8C(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@2
  unsigned __int16 v3; // r0@2
  int v4; // r1@2
  int v5; // r2@2
  unsigned int v6; // r4@2
  int v7; // r0@2
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v4000000 = 6464;
    CpuSet(&gUnknown_08D00524, 100712448, 2048);
    sub_800D74C();
    v2 = &dword_3004B20[10 * v1];
    v3 = NationalPokedexNumToSpecies(*((_WORD *)v2 + 5));
    v4 = (*((_WORD *)v2 + 17) << 16) | *((_WORD *)v2 + 16);
    v5 = (*((_WORD *)v2 + 19) << 16) | *((_WORD *)v2 + 18);
    v6 = (unsigned int)(unsigned __int8)gSprites[68 * *((_WORD *)v2 + 7) + 5] >> 4;
    v7 = species_and_otid_get_pal(v3, v4, v5);
    LoadCompressedPalette(v7, 16 * v6 | 0x100, 32);
    DestroyTask(v1);
  }
  return v9;
}
