char *__fastcall ConvertIntToHexStringN(char *a1, signed int a2, int a3, unsigned int a4)
{
  char *v4; // r6@1
  signed int v5; // r7@1
  signed int v6; // r1@1
  unsigned int i; // r0@1
  signed int v8; // r3@3
  signed int v9; // r5@7
  unsigned int v10; // r0@8
  char *v11; // r2@9
  char v12; // r0@14
  signed int v13; // kr00_4@19

  v4 = a1;
  v5 = a2;
  a4 = (unsigned __int8)a4;
  v6 = 1;
  for ( i = 1; i < a4; i = (i + 1) & 0xFF )
    v6 *= 16;
  v8 = 0;
  if ( a3 == 1 )
    v8 = 2;
  if ( a3 == 2 )
    v8 = 1;
  v9 = v6;
  if ( v6 > 0 )
  {
    do
    {
      v10 = v5 / v9;
      if ( v8 == 1 )
      {
        v11 = v4++;
        if ( v10 > 0xF )
          goto LABEL_15;
      }
      else
      {
        if ( !v10 && v9 != 1 )
        {
          if ( v8 == 2 )
            *v4++ = 0;
          goto LABEL_19;
        }
        v8 = 1;
        v11 = v4++;
        if ( v10 > 0xF )
        {
LABEL_15:
          v12 = -84;
          goto LABEL_16;
        }
      }
      v12 = sDigits[v10];
LABEL_16:
      *v11 = v12;
LABEL_19:
      v5 %= v9;
      v13 = v9;
      v9 /= 16;
    }
    while ( v13 / 16 > 0 );
  }
  *v4 = -1;
  return v4;
}
