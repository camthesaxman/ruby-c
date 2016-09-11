signed int __fastcall sub_80BD12C(unsigned __int8 a1)
{
  int v1; // r2@1
  int v2; // r1@1
  signed int v4; // r0@4

  v1 = a1;
  LOWORD(v2) = 0;
  do
  {
    v2 = (signed __int16)v2;
    if ( *(_BYTE *)(160 * (signed __int16)v2 + 0x202713C) == v1 )
      return v2;
    v4 = (v2 + 1) << 16;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v4 >> 16 <= 19 );
  return -1;
}
