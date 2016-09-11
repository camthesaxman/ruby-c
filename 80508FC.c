int sub_80508FC()
{
  int v1; // [sp+8h] [bp-4h]@0

  *(_BYTE *)(dword_3004854 + 170) = 0;
  MenuDrawTextWindow(23, 8, 28, 13);
  sub_814A5C0(0, 0xFFFF, 12, 11679);
  MenuPrint(&gUnknown_0842D2C5, 24, 9);
  sub_80508D4(*(_BYTE *)(dword_3004854 + 170));
  return v1;
}
