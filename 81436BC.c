int __fastcall sub_81436BC(unsigned __int16 a1, __int16 a2, __int16 a3, __int16 a4, unsigned int a5, unsigned int a6)
{
  signed int v6; // r6@1
  __int16 v7; // r9@1
  __int16 v8; // r10@1
  __int16 v9; // r8@1
  int v10; // r0@1
  int result; // r0@1

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  sub_800D378(
    &gMonFrontPicTable[2 * a1],
    gMonFrontPicCoords[4 * v6],
    gMonFrontPicCoords[4 * v6 + 1],
    0x2000000,
    gUnknown_0840B5A0[(unsigned __int16)a4],
    v6,
    a6,
    1u);
  v10 = species_and_otid_get_pal(v6, a5, a6);
  LoadCompressedPalette(v10, 16 * v9 + 256, 32);
  sub_8143648(v9, (unsigned __int8)v9);
  result = (unsigned __int8)CreateSprite(33705612, v7, v8);
  gSprites[68 * result + 5] = gSprites[68 * result + 5] & 0xF | 16 * v9;
  return result;
}
