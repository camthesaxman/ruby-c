signed int __fastcall sub_808E888(unsigned __int16 a1)
{
  _WORD *v1; // r2@2
  signed int result; // r0@3

  if ( a1 <= 0x181u && (v1 = (_WORD *)(v202FFB4 + 4 * a1), *v1 != 0xFFFF) )
  {
    if ( *(_BYTE *)(v202FFB4 + 4 * a1 + 2) << 31 )
      result = *v1;
    else
      result = 0;
  }
  else
  {
    result = 0xFFFF;
  }
  return result;
}
