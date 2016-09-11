int sub_80FDD70()
{
  int v0; // r2@1
  _WORD *v1; // r4@2
  unsigned int v2; // r6@2
  char *v3; // r3@2
  unsigned __int8 v4; // r7@2
  __int16 v5; // r0@6
  int v7; // [sp+14h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v1 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v0)
                   + 2 * (unsigned __int8)byte_3005DE8);
      v2 = 0;
      v3 = &byte_3005DF8;
      v4 = v0 + 1;
      if ( (unsigned __int8)byte_3005DF8 > 0u )
      {
        do
        {
          if ( *v1 & 0x8000 )
          {
            *v1 = word_3005E0C;
          }
          else
          {
            if ( sub_80FD4DC(v1) << 16 )
              v5 = word_3005E0C + 2;
            else
              v5 = word_3005E0C + 1;
            *v1 = v5;
            v3 = &byte_3005DF8;
          }
          v2 = (v2 + 1) & 0xFF;
          ++v1;
        }
        while ( v2 < (unsigned __int8)*v3 );
      }
      v0 = v4;
    }
    while ( v4 < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v7;
}
