int __fastcall sub_80BC14C(unsigned __int8 a1)
{
  int v1; // r2@1
  __int16 v2; // r1@2

  LOWORD(v1) = 0;
  do
  {
    v2 = v1;
    if ( *(_BYTE *)(160 * (signed __int16)v1 + 0x202713C) == a1 )
      return (unsigned __int8)v1;
    v1 = ((signed __int16)v1 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v2 + 1) <= 19 );
  return 0;
}
