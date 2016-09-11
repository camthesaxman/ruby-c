int sub_80FCB5C()
{
  int v0; // r2@1
  char *v1; // r3@2
  __int16 *v2; // r4@3
  int v3; // r5@3
  __int16 *v4; // r4@3
  unsigned __int8 i; // r7@3
  __int16 v6; // r0@5
  __int16 v8; // [sp+0h] [bp-20h]@3
  char *v9; // [sp+4h] [bp-1Ch]@5
  int v10; // [sp+1Ch] [bp-4h]@8

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF8 > 0u )
  {
    v1 = &byte_3005E04;
    do
    {
      v2 = (__int16 *)(dword_3005DEC
                     + 2 * (unsigned __int8)*v1 * (unsigned __int8)byte_3005DFC
                     + 2 * ((unsigned __int8)byte_3005DE8 + v0));
      v8 = *v2;
      v3 = 1;
      v4 = &v2[(unsigned __int8)*v1];
      for ( i = v0 + 1; v3 < (unsigned __int8)byte_3005DF0 - 1; v4 += (unsigned __int8)byte_3005E04 )
      {
        if ( !(*v4 & 0x8000) )
        {
          v9 = v1;
          v6 = sub_80FD68C(&v8, v4, &v4[(unsigned __int8)byte_3005E04]);
          *v4 = v6;
          v8 = v6;
          v1 = v9;
        }
        v3 = (v3 + 1) & 0xFF;
      }
      v0 = i;
    }
    while ( i < (unsigned int)(unsigned __int8)byte_3005DF8 );
  }
  return v10;
}
