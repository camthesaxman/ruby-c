signed int __fastcall sub_8119E3C(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  signed int v3; // r9@1
  int v4; // r0@7
  unsigned int v5; // r3@8
  unsigned __int8 v6; // r4@8
  char *v7; // r1@11
  int v8; // r7@12
  unsigned int v9; // r6@12
  int v10; // r0@12
  unsigned int v11; // r3@13
  unsigned __int8 v12; // r4@13
  __int16 v13; // r2@14
  int v14; // r4@16

  v2 = a1;
  v3 = 0;
  if ( byte_3005E98 == 1 )
  {
    v8 = (*(_BYTE *)(a1 + 2) << 11) & 0xFFFF;
    v9 = ((*(_BYTE *)(a1 + 3) << 12) + ((unsigned int)*(_WORD *)a1 << 18 >> 23)) & 0xFFFF;
    v10 = 0;
    do
    {
      v11 = 0;
      v12 = v10 + 1;
      do
      {
        v13 = v9;
        v9 = (v9 + 1) & 0xFFFF;
        *(_WORD *)(2 * v11 + (v10 << 6) + v8 + 100663296) = v13;
        v11 = (v11 + 1) & 0xFF;
      }
      while ( v11 <= 0x1F );
      v10 = (unsigned __int8)(v10 + 1);
    }
    while ( v12 <= 6u );
    v14 = 0;
    if ( v201C016 )
    {
      do
      {
        sub_811A1C8(v14, 0);
        v14 = (v14 + 1) & 0xFF;
      }
      while ( v14 < 8 * v201C016 );
    }
    v7 = &byte_3005E98;
_08119F50:
    ++*v7;
    return v3;
  }
  if ( (signed int)(unsigned __int8)byte_3005E98 <= 1 )
  {
    if ( byte_3005E98 )
      return v3;
    v201C014 = *(_WORD *)a1;
    v201C016 = *(_BYTE *)(a1 + 5);
    v201C01A = 0;
    v201C01B = 0;
    v201C010 = 0;
    v201C012 = 28;
    v201C011 = 0;
    sub_811A350(a2, (signed __int16)(-8 * *(_BYTE *)(a1 + 4)), 1);
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = v4 + 1;
      do
      {
        v40000D4 = &gUnknown_083FB718;
        v40000D8 = 32 * (32 * v4 + v5) + 0x2000000;
        v40000DC = -2147483632;
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 0x1F );
      v4 = (unsigned __int8)(v4 + 1);
    }
    while ( v6 <= 6u );
    v7 = &byte_3005E98;
    goto _08119F50;
  }
  if ( byte_3005E98 == 2 )
  {
    sub_811A324();
    LoadPalette((int)&gUnknown_083FB6F8, 16 * *(_BYTE *)(v2 + 3), 32);
    v3 = 1;
  }
  return v3;
}
