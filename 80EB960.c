int sub_80EB960()
{
  unsigned int v0; // r5@1
  unsigned int v2; // r5@4
  unsigned int v3; // r4@4

  v0 = (unsigned __int8)sub_80EB8C0();
  if ( v0 )
  {
    v2 = (unsigned __int16)Random() % v0 & 0xFFFF;
    v3 = 0;
    do
    {
      if ( sub_80EB868((unsigned __int8)v3) << 24 )
      {
        if ( !v2 )
          return v3 & 0x1FF | 0x2800;
        v2 = (v2 - 1) & 0xFFFF;
      }
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0x20 );
  }
  return 0xFFFF;
}
