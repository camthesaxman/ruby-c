int __fastcall sub_804BA18(unsigned __int8 a1, int a2, int a3)
{
  unsigned int *v3; // r4@1
  unsigned __int16 v4; // r0@2
  int v5; // r4@2
  int v7; // [sp+4h] [bp-4h]@0

  v3 = &dword_3004360[25 * a1];
  if ( !GetMonData((int)v3, 45, a3) )
  {
    v4 = GetMonData((int)v3, 11, 0);
    v5 = (unsigned __int16)SpeciesToNationalPokedexNum(v4);
    sub_8090D90(v5, 2);
    sub_8090D90(v5, 3);
  }
  return v7;
}
