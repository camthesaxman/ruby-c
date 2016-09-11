int __fastcall sub_80C03C8(unsigned __int16 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = SpeciesToNationalPokedexNum(a1);
  if ( !(unsigned __int8)sub_8090D90(v3, 0) )
    *(_BYTE *)(36 * v2 + 0x2027E6D) = 0;
  return v5;
}
