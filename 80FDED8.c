int sub_80FDED8()
{
  int v0; // r2@1
  _WORD *v1; // r4@2
  unsigned int v2; // r5@2
  unsigned __int8 v3; // r7@2
  signed int v4; // r2@3
  signed int v5; // ST00_4@6
  int v7; // [sp+18h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v1 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v0)
                   + 2 * (unsigned __int8)byte_3005DE8);
      v2 = 0;
      v3 = v0 + 1;
      if ( (unsigned __int8)byte_3005DF8 > 0u )
      {
        v4 = 0x8000;
        do
        {
          if ( *v1 & (unsigned __int16)v4 )
          {
            *v1 = word_3005E0C;
          }
          else
          {
            v5 = v4;
            *v1 = sub_80FE1B0(v1) + word_3005E0C;
            v4 = v5;
          }
          v2 = (v2 + 1) & 0xFF;
          ++v1;
        }
        while ( v2 < (unsigned __int8)byte_3005DF8 );
      }
      v0 = v3;
    }
    while ( v3 < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v7;
}
