signed int __fastcall sub_8040CE0(unsigned int a1, unsigned int a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( ((a1 >> 16) ^ (unsigned __int16)a1 ^ (a2 >> 16) ^ (unsigned __int16)a2) <= 7 )
    v2 = 1;
  return v2;
}
