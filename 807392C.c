int __fastcall sub_807392C(unsigned __int16 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = 4 * (a1 % 3u) & 0x3FFFF;
  sub_8072E24(*(int *)((char *)&gTilesetAnimTable_SootopolisGym_0 + v1), 100695552, 384);
  sub_8072E24(*(int *)((char *)&gTilesetAnimTable_SootopolisGym_1 + v1), 100694528, 640);
  return v3;
}
