_BYTE *__fastcall ConvertIntToDecimalString(_BYTE *a1, signed int a2)
{
  _BYTE *v2; // r7@1
  signed int v3; // r5@1
  int v4; // r6@1
  int i; // r6@3
  int v7; // [sp+0h] [bp-24h]@2

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    *((_BYTE *)&v7 + v4++) = sDigits[v3 % 10];
    v3 /= 10;
  }
  while ( v3 );
  for ( i = v4 - 1; i != -1; --i )
    *v2++ = *((_BYTE *)&v7 + i);
  *v2 = -1;
  return v2;
}
