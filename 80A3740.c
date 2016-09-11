int sub_80A3740()
{
  int v1; // [sp+0h] [bp-8h]@1
  int v2; // [sp+4h] [bp-4h]@1

  memcpy(&v1, &gUnknown_083C1704, 4);
  LoadPalette((int)&v1 + 2, 209, 2);
  LoadPalette((int)&v1, 216, 2);
  return v2;
}
