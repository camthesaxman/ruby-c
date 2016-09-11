signed int __fastcall unref_sub_81249B0(int a1, unsigned __int8 a2)
{
  signed int v2; // r4@1
  int v3; // r1@2
  signed int result; // r0@3

  v2 = a2;
  if ( a2 <= 0xFu && (v3 = a1 + 12 * a2, (unsigned int)*(_BYTE *)(v3 + 4) >> 7) )
  {
    memset(v3 + 4, 0, 12);
    result = v2;
  }
  else
  {
    result = 255;
  }
  return result;
}
