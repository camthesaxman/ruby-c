int __fastcall sub_80FC04C(int a1, _WORD *a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  _BYTE *v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v5 = &gRegionMapLocations[8 * a1 & 0x7FFFF];
  *a2 = *v5;
  *a3 = v5[1];
  *a4 = v5[2];
  *a5 = v5[3];
  return v7;
}
