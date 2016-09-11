int sub_81025BC()
{
  unsigned int v0; // r6@1
  signed int v1; // r4@2
  unsigned int v2; // r2@2
  signed int v3; // r3@2
  unsigned int v4; // r0@8

  v0 = 0;
  do
  {
    v1 = (unsigned __int8)Random();
    v2 = v0 << 16;
    v3 = *(&gUnknown_083ECD28[6 * (signed __int16)v0] + v2000001);
    if ( (_WORD)v0 || v2000003 != 1 )
    {
      if ( (signed __int16)v0 == 4 && v2000003 == 1 )
      {
        v4 = (*(&gUnknown_083ECD28[6 * (signed __int16)v0] + v2000001) << 16) - 655360;
        v3 = v4 >> 16;
        if ( (v4 & 0x80000000) != 0 )
          LOWORD(v3) = 0;
      }
    }
    else
    {
      v3 += 10;
      if ( v3 > 256 )
        LOWORD(v3) = 256;
    }
    if ( (signed __int16)v3 > v1 )
      break;
    v0 = ((v0 << 16) + 0x10000) >> 16;
  }
  while ( (signed int)(v2 + 0x10000) >> 16 <= 4 );
  return (unsigned __int8)v0;
}
