signed int __fastcall species_and_otid_get_pal(unsigned __int16 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r4@1
  signed int result; // r0@2
  int *v5; // r0@4
  int v6; // r1@4

  v3 = a1;
  if ( a1 <= 0x19Cu )
  {
    if ( ((a2 >> 16) ^ (unsigned __int16)a2 ^ (a3 >> 16) ^ (unsigned __int16)a3) <= 7 )
    {
      v5 = (int *)&gMonShinyPaletteTable;
      v6 = 2 * v3;
    }
    else
    {
      v5 = &gMonPaletteTable;
      v6 = 2 * v3;
    }
    result = v5[v6];
  }
  else
  {
    result = 147855796;
  }
  return result;
}
