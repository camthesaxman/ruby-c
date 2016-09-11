int __fastcall sub_80C5994(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r6@1
  unsigned __int16 v3; // r0@1
  unsigned int v4; // r7@1
  char *v5; // r0@1

  v2 = a2;
  v3 = SpeciesToNationalPokedexNum(a1);
  v4 = (unsigned __int16)sub_8090D54(v3, 0);
  v5 = (char *)gUnknown_083D180C + (8 * sub_80C5964(v2) & 0x7FF);
  return v4 * (*(_WORD *)v5 + (v2 - (unsigned __int64)*((_WORD *)v5 + 2)) / (unsigned __int8)v5[2]) / 0xA;
}
