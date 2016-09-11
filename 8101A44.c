int sub_8101A44()
{
  int v1; // [sp+4h] [bp-4h]@0

  SetVBlankCallback((int)sub_810196C);
  v4000200 |= 1u;
  v4000004 |= 8u;
  v4000000 = 16192;
  return v1;
}
