signed int __fastcall sine2(unsigned __int16 a1)
{
  signed int v1; // r0@2

  if ( a1 / 0xB4u & 1 )
    v1 = -65536 * gSineDegreeTable[a1 % 0xB4u & 0xFFFF];
  else
    v1 = gSineDegreeTable[a1 % 0xB4u & 0xFFFF] << 16;
  return v1 >> 16;
}
