signed int __fastcall sub_80EAD7C(signed int a1)
{
  signed int result; // r0@4

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 20 )
  {
    LOBYTE(result) = FlagGet(0x806u);
    return (unsigned __int8)result;
  }
  if ( a1 > 20 )
  {
    if ( a1 == 21 )
    {
      LOBYTE(result) = sub_80EB9C8();
      return (unsigned __int8)result;
    }
  }
  else if ( a1 >= 17 )
  {
    LOBYTE(result) = FlagGet(0x804u);
    return (unsigned __int8)result;
  }
  return 1;
}
