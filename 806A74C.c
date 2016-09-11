int __fastcall sub_806A74C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int16 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r10@1
  int v7; // ST00_4@1
  unsigned int v8; // r8@1
  _BYTE *v9; // r0@1
  _BYTE *v10; // r7@1
  _BYTE *v11; // r0@1
  char *v12; // r0@1
  char *v13; // r0@1
  char *v14; // r0@1
  int v16; // [sp+20h] [bp-4h]@0

  v6 = a1;
  v7 = a2;
  v8 = a4 % 0x18u & 0xFF;
  sub_8072C44(&gStringVar1, a3 % 0x2710u, 24, 1);
  v9 = StringCopy(&gStringVar4, &gStringVar1);
  v10 = StringCopy(v9, &gUnknown_0842D4F6);
  sub_8072C44(&gStringVar1, v8, 18, 1);
  v11 = StringCopy(v10, &gStringVar1);
  v12 = StringCopy(v11, &gUnknown_08376500);
  v13 = ConvertIntToDecimalStringN(v12, a5 % 0x3Cu & 0xFF, 2, 2);
  v14 = StringCopy(v13, &gUnknown_08376500);
  ConvertIntToDecimalStringN(v14, a6 % 0x3Cu & 0xFF, 2, 2);
  MenuPrint(&gStringVar4, v6, v7);
  return v16;
}
