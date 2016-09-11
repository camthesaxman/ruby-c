signed int __fastcall sub_80EB784(unsigned __int16 a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( sub_80EAD7C((unsigned __int8)a1) << 24 )
  {
    if ( v1 )
    {
      if ( v1 == 20 )
        LOWORD(result) = sub_80EB960();
      else
        LOWORD(result) = sub_80EB72C(v1);
    }
    else
    {
      LOWORD(result) = sub_80EB9D8();
    }
    result = (unsigned __int16)result;
  }
  else
  {
    result = 0xFFFF;
  }
  return result;
}
