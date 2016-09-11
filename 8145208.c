signed int __fastcall sub_8145208(unsigned __int8 a1)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = (a1 & 0x3F) + 80;
  if ( a1 == 255 )
  {
    result = 1;
  }
  else
  {
    if ( a1 & 0x80 )
      v1 |= 0x800u;
    if ( a1 & 0x40 )
      v1 = (v1 | 0x400) & 0xFFFF;
    result = v1;
  }
  return result;
}
