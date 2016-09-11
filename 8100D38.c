signed int __fastcall sub_8100D38(unsigned __int8 a1)
{
  unsigned int v1; // r2@1
  signed int result; // r0@3

  v1 = 0;
  if ( v201F008 <= 0u )
  {
_08100D7C:
    result = 0;
  }
  else
  {
    while ( !*(_BYTE *)(v201F000 + v1) )
    {
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 >= v201F008 )
        goto _08100D7C;
    }
    HIWORD(dword_3004B20[10 * a1 + 8]) = v1;
    result = 1;
  }
  return result;
}
