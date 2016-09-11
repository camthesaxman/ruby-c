char *__fastcall ConvertIntToDecimalStringN(char *a1, signed int a2, int a3, int a4)
{
  char *v4; // r4@1
  signed int v5; // r6@1
  signed int v6; // r7@1
  signed int i; // r5@5
  unsigned int v8; // r2@6
  char *v9; // r3@7
  char v10; // r0@12

  v4 = a1;
  v5 = a2;
  v6 = 0;
  if ( a3 == 1 )
    v6 = 2;
  if ( a3 == 2 )
    v6 = 1;
  for ( i = *(_DWORD *)((char *)&sPowersOfTen + (4 * a4 & 0x3FF) - 4); i > 0; i /= 10 )
  {
    v8 = v5 / i & 0xFFFF;
    if ( v6 == 1 )
    {
      v9 = v4++;
      if ( v8 > 9 )
        goto LABEL_13;
    }
    else
    {
      if ( !v8 && i != 1 )
      {
        if ( v6 == 2 )
          *v4++ = 0;
        goto LABEL_17;
      }
      v6 = 1;
      v9 = v4++;
      if ( v8 > 9 )
      {
LABEL_13:
        v10 = -84;
        goto LABEL_14;
      }
    }
    v10 = sDigits[v8];
LABEL_14:
    *v9 = v10;
LABEL_17:
    v5 -= i * v8;
  }
  *v4 = -1;
  return v4;
}
