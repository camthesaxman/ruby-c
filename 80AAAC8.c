signed int __fastcall sub_80AAAC8(int a1, unsigned __int16 a2, char a3)
{
  int v3; // r1@1
  signed int result; // r0@1
  signed int v5; // r1@1

  v3 = (a2 + a3) << 16;
  result = (unsigned int)v3 >> 16;
  v5 = v3 >> 16;
  if ( v5 <= 354 )
  {
    if ( v5 < 0 )
      result = 354;
  }
  else
  {
    result = 1;
  }
  return result;
}
