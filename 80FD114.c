int sub_80FD114()
{
  int v0; // r2@1
  __int16 *v1; // r4@2
  int v2; // r5@2
  __int16 *v3; // r4@2
  unsigned __int8 v4; // r6@2
  signed int v5; // r2@3
  __int16 v6; // r0@5
  __int16 v8; // [sp+0h] [bp-20h]@2
  int v9; // [sp+4h] [bp-1Ch]@5
  int v10; // [sp+1Ch] [bp-4h]@8

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF8 > 0u )
  {
    do
    {
      v1 = (__int16 *)(dword_3005DEC
                     + 2 * (unsigned __int8)byte_3005E04 * (unsigned __int8)byte_3005DFC
                     + 2 * ((unsigned __int8)byte_3005DE8 + v0));
      v8 = *v1;
      v2 = 1;
      v3 = &v1[(unsigned __int8)byte_3005E04];
      v4 = v0 + 1;
      if ( (unsigned __int8)byte_3005DF0 - 1 > 1 )
      {
        v5 = 0x8000;
        do
        {
          if ( !((unsigned __int16)*v3 & (unsigned __int16)v5) )
          {
            v9 = v5;
            v6 = sub_80FD568(&v8, v3);
            *v3 = v6;
            v8 = v6;
            v5 = v9;
          }
          v2 = (v2 + 1) & 0xFF;
          v3 += (unsigned __int8)byte_3005E04;
        }
        while ( v2 < (unsigned __int8)byte_3005DF0 - 1 );
      }
      v0 = v4;
    }
    while ( v4 < (unsigned int)(unsigned __int8)byte_3005DF8 );
  }
  return v10;
}
