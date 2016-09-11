_BYTE *__fastcall ConvertIntToDecimalStringN_DigitWidth6(int a1, signed int a2, int a3, int a4)
{
  signed int v4; // r6@1
  signed int v5; // r1@1
  char *v6; // r4@1
  signed int v7; // r7@1
  signed int i; // r5@5
  unsigned int v9; // r2@6
  char *v10; // r3@7
  char v11; // r0@12
  _BYTE *v12; // r4@18

  v4 = a2;
  v5 = *(_DWORD *)((char *)&sPowersOfTen + (4 * a4 & 0x3FF) - 4);
  *(_BYTE *)a1 = -4;
  *(_BYTE *)(a1 + 1) = 20;
  *(_BYTE *)(a1 + 2) = 6;
  v6 = (char *)(a1 + 3);
  v7 = 0;
  if ( a3 == 1 )
    v7 = 2;
  if ( a3 == 2 )
    v7 = 1;
  for ( i = v5; i > 0; i /= 10 )
  {
    v9 = v4 / i & 0xFFFF;
    if ( v7 == 1 )
    {
      v10 = v6++;
      if ( v9 > 9 )
        goto LABEL_13;
    }
    else
    {
      if ( !v9 && i != 1 )
      {
        if ( v7 == 2 )
          *v6++ = 0;
        goto LABEL_17;
      }
      v7 = 1;
      v10 = v6++;
      if ( v9 > 9 )
      {
LABEL_13:
        v11 = -84;
        goto LABEL_14;
      }
    }
    v11 = sDigits[v9];
LABEL_14:
    *v10 = v11;
LABEL_17:
    v4 -= i * v9;
  }
  *v6 = -4;
  v12 = v6 + 1;
  *v12++ = 20;
  *v12++ = 0;
  *v12 = -1;
  return v12;
}
