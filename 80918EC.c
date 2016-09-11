int __fastcall sub_80918EC(unsigned __int16 a1, __int16 a2, __int16 a3, unsigned __int16 a4)
{
  __int16 v4; // r9@1
  __int16 v5; // r10@1
  int v6; // r8@1
  int v7; // r7@1
  int v8; // r6@3
  int result; // r0@6

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = NationalPokedexNumToSpecies(a1);
  if ( v7 == 201 )
  {
    v8 = 402;
    sub_800D378(
      &unk_81E899C,
      (unsigned __int8)gMonFrontPicCoords[804],
      (unsigned __int8)gMonFrontPicCoords[805],
      0x2000000,
      gUnknown_083B5584[v6],
      201,
      v2024EC0,
      1u);
  }
  else if ( v7 == 308 )
  {
    v8 = 616;
    sub_800D378(
      &unk_81E8CF4,
      (unsigned __int8)gMonFrontPicCoords[1232],
      (unsigned __int8)gMonFrontPicCoords[1233],
      0x2000000,
      gUnknown_083B5584[v6],
      308,
      v2024EC4,
      1u);
  }
  else
  {
    v8 = 2 * v7;
    DecompressPicFromTable_2(
      &gMonFrontPicTable[2 * v7],
      gMonFrontPicCoords[4 * v7],
      gMonFrontPicCoords[4 * v7 + 1],
      0x2000000,
      gUnknown_083B5584[v6],
      v7);
  }
  LoadCompressedPalette(gMonPaletteTable[v8], 16 * v6 + 256, 32);
  sub_8091878(v6, (unsigned __int8)v6);
  result = (unsigned __int8)CreateSprite(33705612, v4, v5);
  gSprites[68 * result + 5] = gSprites[68 * result + 5] & 0xF | 16 * v6;
  return result;
}
