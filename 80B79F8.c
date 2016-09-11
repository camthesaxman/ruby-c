int __fastcall sub_80B79F8(int a1, unsigned int a2, unsigned __int8 a3)
{
  int v3; // r4@1
  signed int v4; // r2@2
  _BYTE *v5; // r3@11
  int v6; // r0@11
  int v7; // r2@11
  _BYTE *v8; // r0@13
  int v10; // [sp+4h] [bp-4h]@0

  v3 = a3;
  if ( a2 <= 0xF423F )
  {
    if ( a2 <= 0x1869F )
    {
      if ( a2 <= 0x2710 )
      {
        v4 = 4;
        if ( a2 <= 0x3E7 )
        {
          v4 = 3;
          if ( a2 <= 0x63 )
          {
            v4 = 1;
            if ( a2 > 9 )
              v4 = 2;
          }
        }
      }
      else
      {
        v4 = 5;
      }
    }
    else
    {
      v4 = 6;
    }
  }
  else
  {
    v4 = 7;
  }
  *(_BYTE *)a1 = -4;
  *(_BYTE *)(a1 + 1) = 20;
  *(_BYTE *)(a1 + 2) = 6;
  v5 = (_BYTE *)(a1 + 3);
  v6 = 0;
  v7 = v3 - v4;
  if ( v7 > 0 )
  {
    do
    {
      *v5++ = 0;
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < v7 );
  }
  *v5 = -73;
  v8 = ConvertIntToDecimalString(v5 + 1, a2);
  *v8 = -4;
  v8[1] = 20;
  v8[2] = 0;
  v8[3] = -1;
  return v10;
}
