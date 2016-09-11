int __fastcall sub_810C854(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80C8478(v203855E);
  StringCopy(&gStringVar1, (&gUnknown_083F7EB8)[4 * *(_BYTE *)(8 * v203855E + 0x2025F2C)]);
  v202E8DC = v203855E;
  sub_810CA6C(v203855E);
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_810C2C8;
  return v3;
}
