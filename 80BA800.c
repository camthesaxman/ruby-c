int __fastcall sub_80BA800(int a1)
{
  int v2; // [sp+0h] [bp-ECh]@1
  int v3; // [sp+Ch] [bp-E0h]@1
  int v4; // [sp+18h] [bp-D4h]@1
  int v5; // [sp+24h] [bp-C8h]@1
  int v6; // [sp+30h] [bp-BCh]@1
  int v7; // [sp+3Ch] [bp-B0h]@1
  int v8; // [sp+48h] [bp-A4h]@1
  char v9; // [sp+54h] [bp-98h]@1
  char v10; // [sp+60h] [bp-8Ch]@1
  char v11; // [sp+6Ch] [bp-80h]@1
  char v12; // [sp+78h] [bp-74h]@1
  char v13; // [sp+84h] [bp-68h]@1
  char v14; // [sp+90h] [bp-5Ch]@1
  char v15; // [sp+9Ch] [bp-50h]@1
  int v16; // [sp+ACh] [bp-40h]@1
  int v17; // [sp+B0h] [bp-3Ch]@1
  int *v18; // [sp+B4h] [bp-38h]@1
  int *v19; // [sp+B8h] [bp-34h]@1
  int *v20; // [sp+BCh] [bp-30h]@1
  int *v21; // [sp+C0h] [bp-2Ch]@1
  int *v22; // [sp+C4h] [bp-28h]@1
  int *v23; // [sp+C8h] [bp-24h]@1
  int v24; // [sp+E8h] [bp-4h]@1

  v17 = a1 << 24;
  v16 = (unsigned __int8)a1;
  ((void (__fastcall *)(int *, void *, signed int))memcpy)(&v2, &gUnknown_083D0312, 10);
  v18 = &v3;
  ((void (__fastcall *)(int *, void *, signed int))memcpy)(&v3, &gUnknown_083D031C, 11);
  v19 = &v4;
  memcpy(&v4, (const char *)&gUnknown_083D0327, 10);
  v20 = &v5;
  memcpy(&v5, (const char *)&gUnknown_083D0331, 10);
  v21 = &v6;
  memcpy(&v6, (const char *)&gUnknown_083D033B, 10);
  v22 = &v7;
  memcpy(&v7, (const char *)&gUnknown_083D0345, 10);
  v23 = &v8;
  memcpy(&v8, (const char *)&gUnknown_083D034F, 10);
  memcpy(&v9, (const char *)&gUnknown_083D0359, 10);
  memcpy(&v10, (const char *)&gUnknown_083D0363, 10);
  memcpy(&v11, (const char *)&gUnknown_083D036D, 10);
  memcpy(&v12, (const char *)&gUnknown_083D0377, 10);
  memcpy(&v13, (const char *)&gUnknown_083D0381, 9);
  memcpy(&v14, (const char *)&gUnknown_083D038A, 9);
  memcpy(&v15, (const char *)&gUnknown_083D0393, 9);
  v4000000 = 12608;
  MenuDrawTextWindow(0, 0);
  MenuPrint((int)&v2, 19, 4u);
  MenuPrint((int)v18, 19, 2u);
  MenuPrint((int)v19, 2, 1u);
  MenuPrint((int)v20, 2, 3u);
  MenuPrint((int)v21, 2, 5u);
  MenuPrint((int)v22, 2, 7u);
  MenuPrint((int)v23, 2, 9u);
  MenuPrint((int)&v9, 2, 0xBu);
  MenuPrint((int)&v10, 2, 0xDu);
  MenuPrint((int)&v11, 2, 0xFu);
  MenuPrint((int)&v12, 2, 0x11u);
  MenuPrint((int)&v13, 19, 0x10u);
  MenuPrint((int)&v14, 19, 0xEu);
  MenuPrint((int)&v15, 19, 0xCu);
  v4000040 = 240;
  v4000044 = 160;
  v20387B3 = 0;
  v20387B1 = 0;
  v20387B2 = 0;
  dword_3005D30 = 0;
  v20387D8 = 0;
  v20387D9 = 1;
  v20387B4 = 0;
  v20387B8 = 120;
  v20387BC = 0;
  v20387C0 = 15360;
  v20387C4 = 180;
  v20387CC = 0;
  v20387C8 = 0;
  v20387D0 = 0;
  v20387D4 = 2;
  sub_80BAD5C();
  sub_80BAE10(0, 0);
  dword_3004B20[10 * v16] = (int)sub_80BAA48;
  return v24;
}
