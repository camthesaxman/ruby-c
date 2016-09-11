int __fastcall sub_8031AF4(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+18h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = battle_get_per_side_status(a2);
  DecompressPicFromTable_2(
    &gTrainerBackPicTable[8 * v2],
    gTrainerBackPicCoords[4 * v2],
    gTrainerBackPicCoords[4 * v2 + 1],
    0x2000000,
    *(int *)((char *)&gUnknown_081FAF4C + (4 * v4 & 0x3FF)),
    0);
  LoadCompressedPalette(
    *(_DWORD *)&gTrainerBackPicPaletteTable[8 * v2],
    (unsigned int)((v3 << 20) + 0x1000000) >> 16,
    32);
  return v6;
}
