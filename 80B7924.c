int sub_80B7924()
{
  char v1; // [sp+0h] [bp-8h]@1
  int v2; // [sp+4h] [bp-4h]@5

  memcpy(&v1, &gUnknown_083CE370, 2);
  if ( v2000040 != 255 )
  {
    if ( v2000040 == 254 )
      v1 = -74;
    MenuPrint((int)&v1, 20, 4u);
  }
  return v2;
}
