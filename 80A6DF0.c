int __fastcall sub_80A6DF0(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 2 * (v2038564 - 1) & 0xFF;
  MenuDrawTextWindow(7u, 9 - 2 * (v2038564 - 1));
  sub_80A4008(v1, 8u, 10 - v2, 5u, v2 + 2);
  if ( v2038564 == 1 )
  {
    MenuPrint((int)*(&gUnknown_083C1640 + 2 * *(_BYTE *)dword_3000704), 8, 0xAu);
  }
  else
  {
    MenuPrint((int)*(&gUnknown_083C1640 + 2 * *(_BYTE *)dword_3000704), 8, 8u);
    MenuPrint((int)*(&gUnknown_083C1640 + 2 * *(_BYTE *)(dword_3000704 + 1)), 8, 0xAu);
  }
  InitMenu(0, 8, 10 - v2, v2038564, 0, 5);
  sub_80A7528(2);
  return v4;
}
