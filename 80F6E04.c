int __fastcall sub_80F6E04(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r6@1
  int v4; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = *((_BYTE *)&gTrainers + 40 * *(_WORD *)(8 * v200876E + 0x200CEE8) + 3);
  DecompressPicFromTable_2(
    &gTrainerFrontPicTable[8 * v2],
    gTrainerFrontPicCoords[4 * v2],
    1,
    33632740,
    (a1 << 13) + 33608164,
    v2);
  LZ77UnCompWram(*(_DWORD *)&gTrainerFrontPicPaletteTable[8 * v2], (v1 << 7) + 0x2000000);
  return v4;
}
