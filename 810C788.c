int __fastcall sub_810C788(unsigned __int8 a1)
{
  int v1; // r8@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r4@1
  __int16 v4; // r0@1
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = GetNature((int)&unk_30045C0);
  v3 = sub_810CAE4(v2, 8 * v203855E + 33709868);
  StringCopy(byte_30041C0, (&gUnknown_083F7EB8)[4 * *(_BYTE *)(8 * v203855E + 0x2025F2C)]);
  sub_810CA6C(v203855E);
  v4 = *(_BYTE *)(8 * v203855E + 0x2025F2C) << 8;
  v203855E = *(_BYTE *)(8 * v203855E + 0x2025F2C) << 8;
  if ( !v3 )
    v203855E = v4 + 1;
  if ( v3 > 0 )
    v203855E += 2;
  if ( v3 < 0 )
    v203855E += 3;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_810C2C8;
  return v6;
}
