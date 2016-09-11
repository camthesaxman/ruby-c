int __fastcall sub_813CFA8(signed int a1, __int16 a2, __int16 a3, unsigned __int16 a4)
{
  __int16 v4; // r9@1
  __int16 v5; // r10@1
  int v6; // r6@1
  int v7; // r7@1
  int result; // r0@1

  a1 = (unsigned __int16)a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = 8 * (unsigned __int16)a1;
  DecompressPicFromTable_2(
    &gTrainerBackPicTable[8 * a1],
    gTrainerBackPicCoords[4 * a1],
    gTrainerBackPicCoords[4 * a1 + 1],
    0x2000000,
    gUnknown_0840B5A0[a4],
    a1);
  LoadCompressedPalette(*(_DWORD *)&gTrainerBackPicPaletteTable[v7], 16 * v6 + 256, 32);
  sub_8143680(v6, (unsigned __int8)v6);
  v2024E94 = &gUnknown_0840B064;
  result = (unsigned __int8)CreateSprite(33705612, v4, v5);
  gSprites[68 * result + 5] = (gSprites[68 * result + 5] & 0xF | 16 * v6) & 0xF3 | 4;
  return result;
}
