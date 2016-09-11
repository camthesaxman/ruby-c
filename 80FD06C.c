int sub_80FD06C()
{
  int v0; // r2@1
  __int16 *v1; // r4@2
  int v2; // r5@2
  __int16 *v3; // r4@2
  unsigned __int8 i; // r6@2
  __int16 v5; // r0@4
  __int16 v7; // [sp+0h] [bp-1Ch]@2
  int v8; // [sp+18h] [bp-4h]@7

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v1 = (__int16 *)(dword_3005DEC
                     + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v0)
                     + 2 * (unsigned __int8)byte_3005DE8);
      v7 = *v1;
      v2 = 1;
      v3 = v1 + 1;
      for ( i = v0 + 1; v2 < (unsigned __int8)byte_3005DF8 - 1; ++v3 )
      {
        if ( !(*v3 & 0x8000) )
        {
          v5 = sub_80FD568(&v7, v3);
          *v3 = v5;
          v7 = v5;
        }
        v2 = (v2 + 1) & 0xFF;
      }
      v0 = i;
    }
    while ( i < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v8;
}
