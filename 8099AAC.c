int __fastcall sub_8099AAC(unsigned __int16 a1)
{
  unsigned int v1; // r3@1
  __int16 v2; // r0@3
  int v4; // [sp+10h] [bp-4h]@0

  v1 = 0;
  while ( *(_WORD *)(2 * v1 + 0x2001120) != a1 )
  {
    v1 = (v1 + 1) & 0xFFFF;
    if ( v1 > 0x27 )
      return v4;
  }
  v2 = *(_WORD *)(2 * v1 + 0x20010D0) - 1;
  *(_WORD *)(2 * v1 + 0x20010D0) = v2;
  if ( !v2 )
    *(_WORD *)(2 * v1 + 0x2001120) = 0;
  return v4;
}
