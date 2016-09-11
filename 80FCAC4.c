int sub_80FCAC4()
{
  int v0; // r2@1
  char *v1; // r3@2
  _WORD *v2; // r4@3
  unsigned int v3; // r5@3
  unsigned __int8 i; // r6@3
  char *v5; // ST00_4@5
  int v7; // [sp+18h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    v1 = &byte_3005DF8;
    do
    {
      v2 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v0)
                   + 2 * (unsigned __int8)byte_3005DE8);
      v3 = 0;
      for ( i = v0 + 1; v3 < (unsigned __int8)*v1; ++v2 )
      {
        if ( !(*v2 & 0x8000) )
        {
          v5 = v1;
          *v2 = sub_80FD39C(v2);
          v1 = v5;
        }
        v3 = (v3 + 1) & 0xFF;
      }
      v0 = i;
    }
    while ( i < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v7;
}
