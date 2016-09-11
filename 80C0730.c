signed int __fastcall sub_80C0730(int a1, unsigned __int8 a2)
{
  signed int result; // r0@2

  if ( *(_BYTE *)(4 * a2 + a1) )
    result = (char)a2;
  else
    result = -1;
  return result;
}
