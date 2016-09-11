signed int __fastcall sub_8054F88(__int16 a1)
{
  int v1; // r1@1
  signed int result; // r0@3

  v1 = 0;
  if ( (signed int)(unsigned __int8)byte_3004864 <= 0 )
  {
_08054FB6:
    result = 1;
  }
  else
  {
    while ( (unsigned __int8)byte_3000580[v1] == a1 )
    {
      if ( ++v1 >= (unsigned __int8)byte_3004864 )
        goto _08054FB6;
    }
    result = 0;
  }
  return result;
}
