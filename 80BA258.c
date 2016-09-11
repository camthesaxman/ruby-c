int __fastcall sub_80BA258(unsigned __int8 a1)
{
  int v1; // r9@1
  int v3; // [sp+0h] [bp-5Ch]@1
  char v4; // [sp+Ch] [bp-50h]@1
  char v5; // [sp+10h] [bp-4Ch]@1
  char v6; // [sp+14h] [bp-48h]@1
  char v7; // [sp+24h] [bp-38h]@1
  char v8; // [sp+30h] [bp-2Ch]@1
  int v9; // [sp+58h] [bp-4h]@3

  v1 = a1;
  memcpy(&v3, &gUnknown_083D02C8, 9);
  memcpy(&v4, &gUnknown_083D02D1, 4);
  memcpy(&v5, &gUnknown_083D02D5, 4);
  memcpy(&v6, &gUnknown_083D02D9, 13);
  memcpy(&v7, "ф╟ой", 12);
  memcpy(&v8, &gUnknown_083D02F2, 14);
  if ( !(v202F38F & 0x80) )
  {
    MenuDrawTextWindow(2u, 0);
    MenuDrawTextWindow(2u, 5u);
    MenuDrawTextWindow(2u, 0xCu);
    MenuPrint((int)&v3, 4, 1u);
    MenuPrint((int)&v6, 14, 1u);
    MenuPrint((int)&v4, 4, 6u);
    MenuPrint((int)&v7, 14, 6u);
    MenuPrint((int)&v5, 4, 0xDu);
    MenuPrint((int)&v7, 14, 0xDu);
    MenuPrint((int)&v8, 14, 0x12u);
    dword_3004B20[10 * v1] = (int)sub_80BA384;
    v4000040 = 4575;
    v4000044 = 287;
  }
  return v9;
}
