int sub_80941D8()
{
  int v1; // [sp+0h] [bp-Ch]@1
  int v2; // [sp+8h] [bp-4h]@1

  ConvertIntToDecimalStringN((char *)&v1, v2000072, 2, 5);
  MenuPrint((int)&v1, 20, 2u);
  return v2;
}
