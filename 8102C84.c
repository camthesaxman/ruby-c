int __fastcall sub_8102C84(int a1, __int16 a2)
{
  int v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v2 = 2 * a1 & 0x1FF;
  *(_WORD *)(v2 + 33554460) += a2;
  *(_WORD *)(v2 + 33554460) %= 504;
  *(_WORD *)(v2 + 33554472) = 21 - *(_WORD *)(v2 + 0x200001C) / 24;
  return v4;
}
