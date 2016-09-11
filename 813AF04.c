int sub_813AF04()
{
  int v1; // [sp+0h] [bp-Ch]@1
  char v2; // [sp+4h] [bp-8h]@1
  int v3; // [sp+8h] [bp-4h]@1

  memcpy(&v1, (const char *)&gUnknown_08406334, 6);
  LoadPalette((int)&v2, 223, 2);
  LoadPalette((int)&v1 + 2, 209, 2);
  LoadPalette((int)&v1, 216, 2);
  return v3;
}
