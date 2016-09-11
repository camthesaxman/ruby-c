int __fastcall sub_80C2E14(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_80BE284(*(_BYTE *)(v2038695 + 0x2038690));
  sub_810FB10(2);
  sub_80B2A7C(v203869E);
  sub_80B2A7C(0xFEu);
  v2015DDF = 1;
  v2015DDE = sub_80B2C4C(254, 0);
  BeginHardwarePaletteFade(0xFFu, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_80C2EA0;
  return v3;
}
