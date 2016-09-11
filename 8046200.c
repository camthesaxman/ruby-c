unsigned int __fastcall sub_8046200(__int16 a1, signed __int16 a2)
{
  unsigned int result; // r0@2
  unsigned int v3; // r1@3

  if ( a1 == a2 )
  {
    result = 4;
  }
  else
  {
    v3 = (unsigned __int8)sub_80461D4(a1, a2, 0x30u);
    result = 3;
    if ( v3 <= 0x18 )
    {
      result = 2;
      if ( v3 <= 9 )
        result = (-v3 | v3) >> 31;
    }
  }
  return result;
}
