int __fastcall sub_804E7C0(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  unsigned __int8 v3; // r0@1
  int v5; // [sp+18h] [bp-4h]@0

  v2 = a2;
  v3 = sub_80A7DEC((unsigned int)((a1 << 24) + 2063597568) >> 24, 0, 80, a2 & 1);
  sub_804E794(
    (int)&gSprites[68 * v3],
    gUnknown_08216594[5 * v2],
    gUnknown_08216594[5 * v2 + 1],
    gUnknown_08216594[5 * v2 + 2],
    gUnknown_08216594[5 * v2 + 3],
    gUnknown_08216594[5 * v2 + 4]);
  return v5;
}
