int sub_80A0DD0()
{
  _BYTE *v0; // r0@1
  _BYTE *v1; // r0@1
  _BYTE *v2; // r0@4
  _BYTE *v3; // r0@4
  int v5; // [sp+8h] [bp-4h]@0

  gStringVar1 = -4;
  byte_20231CD = 18;
  byte_20231CE = 2;
  v0 = (_BYTE *)sub_80A1E58(&byte_20231CF, 13);
  v1 = StringCopy(v0, *(&gUnknown_083C1068 + v201807E));
  *v1 = -4;
  v1[1] = 19;
  v1[2] = 88;
  v1[3] = -1;
  MenuPrint((int)&gStringVar1, 0, 0);
  if ( v201807F )
  {
    GetStringCenterAlignXOffset(5u, 0x17u, 0);
    GetStringCenterAlignXOffset(6u, 0x18u, 0);
  }
  else
  {
    MenuZeroFillWindowRect(0x17u, 0, 0x18u, 1u);
  }
  v2 = (_BYTE *)sub_80A1E58(&gStringVar1, 13);
  v3 = StringCopy(v2, *(&gUnknown_083C1068 + v201807F));
  *v3 = -4;
  v3[1] = 19;
  v3[2] = 40;
  v3[3] = -1;
  MenuPrint((int)&gStringVar1, 25, 0);
  return v5;
}
