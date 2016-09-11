int __fastcall sub_813CE88(unsigned __int16 a1, __int16 a2, __int16 a3, unsigned __int16 a4, char a5)
{
  unsigned __int16 v5; // r7@1
  __int16 v6; // r9@1
  __int16 v7; // r10@1
  int v8; // r8@1
  int v9; // r0@4
  int result; // r0@4

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( a5 )
    sub_800D378(
      &gMonFrontPicTable[2 * a1],
      gMonFrontPicCoords[4 * a1],
      gMonFrontPicCoords[4 * a1 + 1],
      0x2000000,
      gUnknown_0840B5A0[a4],
      a1,
      0,
      1u);
  else
    sub_800D378(
      &gMonBackPicTable + 2 * a1,
      gMonBackPicCoords[4 * a1],
      gMonBackPicCoords[4 * a1 + 1],
      0x2000000,
      gUnknown_0840B5A0[a4],
      a1,
      0,
      0);
  v9 = species_and_otid_get_pal(v5, 0, 0xFFFFu);
  LoadCompressedPalette(v9, 16 * v8 + 256, 32);
  sub_8143648(v8, (unsigned __int8)v8);
  result = (unsigned __int8)CreateSprite(33705612, v6, v7);
  gSprites[68 * result + 5] = (gSprites[68 * result + 5] & 0xF | 16 * v8) & 0xF3 | 4;
  return result;
}
