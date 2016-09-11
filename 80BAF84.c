int __fastcall sub_80BAF84(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-24h]@1
  char v4; // [sp+4h] [bp-20h]@1
  char v5; // [sp+8h] [bp-1Ch]@1
  int v6; // [sp+20h] [bp-4h]@1

  v1 = a1;
  memcpy(&v3, (const char *)&gUnknown_083D03FD, 3);
  memcpy(&v4, (const char *)&gUnknown_083D0400, 4);
  memcpy(&v5, (const char *)&gUnknown_083D0381, 9);
  v4000000 = 12608;
  MenuDrawTextWindow(0, 0);
  MenuPrint((int)&v3, 3, 2u);
  MenuPrint((int)&v4, 3, 4u);
  MenuPrint((int)&v5, 3, 8u);
  v4000040 = 240;
  v4000044 = 160;
  v20387B4 = 1;
  v20387BC = 0;
  v20387D0 = 0;
  v20387CC = 0;
  v20387C8 = 0;
  sub_80BB1D4();
  dword_3004B20[10 * v1] = (int)sub_80BB038;
  return v6;
}
