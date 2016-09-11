int __fastcall sub_80409C8(unsigned __int16 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r0@2
  int *v4; // r1@2

  if ( ((a2 >> 16) ^ (unsigned __int16)a2 ^ (a3 >> 16) ^ (unsigned __int16)a3) <= 7 )
  {
    v3 = 2 * a1;
    v4 = (int *)&gMonShinyPaletteTable;
  }
  else
  {
    v3 = 2 * a1;
    v4 = &gMonPaletteTable;
  }
  return (int)&v4[v3];
}
