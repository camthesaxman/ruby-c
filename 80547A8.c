int sub_80547A8()
{
  int v1; // [sp+4h] [bp-4h]@0

  v4000200 &= 0xFFFDu;
  v4000200 |= 1u;
  SetVBlankCallback(0);
  SetHBlankCallback(0);
  return v1;
}
