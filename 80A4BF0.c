int __fastcall sub_80A4BF0(int a1)
{
  int v1; // r5@1
  int v2; // r0@3
  unsigned int i; // r6@6
  void *v4; // r3@8
  unsigned int j; // r6@15
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( v2038564 == 4 )
  {
    MenuDrawTextWindow(0, 7u);
    v2 = sub_80A4008(v1, 1u, 8u, 0xCu, 4u);
    if ( (sub_80F9344(v2) & 0xFF) != 1 || byte_3000701 != 5 )
    {
      for ( i = 0; i < v2038564; i = (i + 1) & 0xFF )
      {
        if ( i )
          v4 = *(&gUnknown_083C1640 + 2 * *(_BYTE *)(dword_3000704 + i));
        else
          v4 = sub_80A4B90(v203855E);
        MenuPrint((int)v4, 6 * (i >> 1) + 1, 2 * (i & 1) + 8);
      }
    }
    else
    {
      sub_80A7834(1, 0);
    }
    if ( byte_3000701 == 5 )
      InitMenu(0, 1, 8, v2038564, byte_3000700, 1);
    else
      InitMenu(0, 1, 8, v2038564, 0, 1);
    sub_8072DCC(0x2Fu);
  }
  else
  {
    MenuDrawTextWindow(0, 5u);
    sub_80A4008(v1, 1u, 6u, 0xCu, 6u);
    for ( j = 0; j < v2038564; j = (j + 1) & 0xFF )
      MenuPrint(
        (int)*(&gUnknown_083C1640 + 2 * *(_BYTE *)(dword_3000704 + j)),
        6 * (j / 3) + 1,
        ((j % 3 << 25) + 100663296) >> 24);
    InitMenu(0, 1, 6, v2038564, 0, 1);
    sub_8072DCC(0x2Fu);
  }
  sub_80A7528(2);
  return v7;
}
