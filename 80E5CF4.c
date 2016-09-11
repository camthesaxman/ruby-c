signed int __fastcall sub_80E5CF4(char a1)
{
  signed int result; // r0@2

  if ( a1 & 0x40 )
  {
    result = 2;
  }
  else if ( a1 & 0x80 )
  {
    result = 1;
  }
  else if ( a1 & 0x20 )
  {
    result = 3;
  }
  else if ( a1 & 0x10 )
  {
    result = 4;
  }
  else
  {
    result = 0;
  }
  return result;
}
