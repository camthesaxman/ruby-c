signed int __fastcall sub_805CADC(int a1, __int16 a2)
{
  signed int result; // r0@1

  result = 1;
  if ( a2 & 0x8000 )
    result = 2;
  return result;
}
