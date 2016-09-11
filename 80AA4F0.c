int __fastcall sub_80AA4F0(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  char v5; // r9@1
  unsigned __int8 v6; // r10@1
  _WORD *v7; // r4@1
  int v9; // [sp+24h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 2 * a2;
  v5 = gUnknown_083C928E[v4];
  v6 = gUnknown_083C928E[v4 + 1];
  FillWindowRect_DefaultPalette(33745160, 0, gUnknown_083C928E[v4], gUnknown_083C928E[v4 + 1], v5 + 7, v6 + 1);
  v7 = (_WORD *)(v4 + (v2 << 6) + 33785230);
  sub_8003460(33745160, (int)&gMoveNames[13 * *v7], (unsigned int)(917504 * v3 + 9043968) >> 16, v5, v6);
  ConvertIntToDecimalStringN(&gStringVar1, *v7, 2, 3);
  sub_8003460(33745160, (int)&gStringVar1, (unsigned int)(((v4 + v3) << 17) + 16384000) >> 16, v5 + 7, v6);
  return v9;
}
