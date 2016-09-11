int sub_80B5C04()
{
  int v1; // [sp+4h] [bp-4h]@0

  SetVBlankCallback((int)sub_80B5AB8);
  v4000200 |= 1u;
  v4000004 |= 8u;
  v4000000 = 8000;
  return v1;
}
