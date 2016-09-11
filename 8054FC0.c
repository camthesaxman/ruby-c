signed int __fastcall sub_8054FC0(__int16 a1)
{
  int v1; // r1@1
  signed int result; // r0@3

  v1 = 0;
  if ( (signed int)(unsigned __int8)byte_3004864 <= 0 )
  {
_08054FEE:
    result = 0;
  }
  else
  {
    while ( (unsigned __int8)byte_3000580[v1] != a1 )
    {
      if ( ++v1 >= (unsigned __int8)byte_3004864 )
        goto _08054FEE;
    }
    result = 1;
  }
  return result;
}
