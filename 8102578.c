int sub_8102578()
{
  int v0; // r5@1
  __int16 v1; // r4@2

  LOWORD(v0) = 0;
  do
  {
    v1 = v0;
    if ( *(&gUnknown_083ECD16[6 * (signed __int16)v0] + v2000001) > (signed int)(unsigned __int8)Random() )
      break;
    v0 = ((signed __int16)v0 + 1) & 0xFFFF;
  }
  while ( (signed __int16)(v1 + 1) <= 2 );
  return (unsigned __int8)v0;
}
