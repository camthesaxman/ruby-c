int __fastcall sub_80C2D1C(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int16 *v2; // r5@3
  signed int v3; // r4@3
  unsigned __int16 v4; // r0@4
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 )
  {
    if ( !(v203869A & 1) )
    {
      v2 = (unsigned __int16 *)33785200;
      v3 = 3;
      do
      {
        v4 = SpeciesToNationalPokedexNum(*v2);
        sub_8090D90(v4, 2u);
        v2 += 32;
        --v3;
      }
      while ( v3 >= 0 );
    }
    dword_3004B20[10 * v1] = (int)sub_80C2D80;
  }
  return v6;
}
