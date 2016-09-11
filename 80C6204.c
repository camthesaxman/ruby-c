int ClearGpuRegBits()
{
  int v1; // [sp+8h] [bp-4h]@0

  v3007FF8 &= 0xFFFDu;
  v4000004 &= 0xFFEFu;
  v4000200 &= 0xFFFDu;
  word_300178C &= 0xFFFDu;
  SetHBlankCallback(0);
  return v1;
}
