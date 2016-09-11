int __fastcall sub_8091A4C(unsigned __int16 a1, __int16 a2, __int16 a3, char a4)
{
  signed int v4; // r5@1
  __int16 v5; // r6@1
  __int16 v6; // r8@1
  char v7; // r9@1
  int result; // r0@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  DecompressPicFromTable_2(
    &gTrainerFrontPicTable[8 * a1],
    gTrainerFrontPicCoords[4 * v4],
    gTrainerFrontPicCoords[4 * v4 + 1],
    0x2000000,
    33587200,
    v4);
  sub_80918B0(v4, 0);
  result = (unsigned __int8)CreateSprite(33705612, v5, v6);
  gSprites[68 * result + 5] = gSprites[68 * result + 5] & 0xF | 16 * v7;
  return result;
}
