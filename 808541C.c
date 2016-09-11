int __fastcall sub_808541C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned __int8 v2; // r0@2
  int v3; // r4@2
  unsigned __int16 v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)check_feebas() == 1 )
  {
    v2 = random_number_in_range((int)&gWildFeebasRoute119Data);
    v3 = 328;
    sub_8084E78(0x148u, v2);
  }
  else
  {
    v4 = sub_8084D6C();
    v3 = sub_8084F18((int)dword_839D458[5 * v4 + 3], v1) & 0xFFFF;
  }
  sav12_xor_increment(0xCu);
  sub_80BEA50(v3);
  sub_8081A00();
  return v6;
}
