int sub_80BD170()
{
  int v0; // r2@1
  __int16 v1; // r1@2

  LOWORD(v0) = 1;
  do
  {
    v1 = v0;
    if ( !*(_BYTE *)(160 * (signed __int16)v0 + 0x202713C) )
      return (unsigned __int8)v0;
    v0 = ((signed __int16)v0 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v1 + 1) <= 19 );
  return 0;
}
