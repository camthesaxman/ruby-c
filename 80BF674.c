signed int __fastcall sub_80BF674(unsigned __int16 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  signed int v3; // r4@1
  unsigned int v4; // r6@1
  unsigned __int16 v5; // r0@7

  v1 = a1;
  v2 = ((unsigned __int16)Random() % 0x19Bu + 1) << 16;
  v3 = v2 >> 16;
  v4 = v2 >> 16;
  while ( 1 )
  {
    v5 = SpeciesToNationalPokedexNum(v3);
    if ( (char)sub_8090D90(v5, 0) == 1 && v3 != v1 )
      break;
    if ( v3 == 1 )
      v3 = 411;
    else
      v3 = (v3 - 1) & 0xFFFF;
    if ( v3 == v4 )
      return v1;
  }
  return v3;
}
