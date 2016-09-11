int __fastcall sub_8106AC4(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // ST08_4@2
  int v6; // ST08_4@3
  int v8; // [sp+20h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = species_and_otid_get_pal(a1, *(_DWORD *)(dword_3005E8C + 4), *(_DWORD *)dword_3005E8C);
  LZDecompressVram(v4, dword_3005E90);
  if ( v3 )
  {
    v6 = *(_DWORD *)dword_3005E8C;
    sub_800D334((int)(&gMonBackPicTable + 2 * v2), gMonBackPicCoords[4 * v2], gMonBackPicCoords[4 * v2 + 1]);
    sub_8106B90(33587200, dword_3005E90, dword_3005E10);
  }
  else
  {
    v5 = *(_DWORD *)dword_3005E8C;
    sub_800D334((int)&gMonFrontPicTable[2 * v2], gMonFrontPicCoords[4 * v2], gMonFrontPicCoords[4 * v2 + 1]);
    sub_8106B90(33595392, dword_3005E90, dword_3005E10);
  }
  return v8;
}
