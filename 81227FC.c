int __fastcall sub_81227FC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = MenuZeroFillWindowRect(0x14u, 0xAu, 0x1Du, 0x13u);
  sub_8072DEC(v2);
  sub_806D538(0, 0);
  dword_3004B20[10 * v1] = (int)sub_81222B0;
  return v4;
}
