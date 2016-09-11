int __fastcall AlignInt2(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r5@1
  int v6; // r4@1
  unsigned int v7; // r6@1
  int v8; // r5@7
  int v9; // r0@7
  unsigned int v10; // r5@8
  unsigned int v11; // r5@11
  int v12; // r0@13
  int v14; // [sp+0h] [bp-20h]@7

  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( a5 == 1 )
  {
    ConvertIntToDecimalString(&v14, a3);
    v10 = (unsigned __int8)GetStringWidth(v5, &v14);
    if ( v7 > v10 )
    {
      *(_BYTE *)v6 = -4;
      *(_BYTE *)(v6 + 1) = 17;
      *(_BYTE *)(v6 + 2) = v7 - v10;
      v6 += 3;
    }
    v6 = StringCopy(v6, &v14);
  }
  else
  {
    if ( (signed int)a5 <= 1 )
    {
      if ( a5 )
        return v6;
      ConvertIntToDecimalString(&v14, a3);
      v8 = (unsigned __int8)GetStringWidth(v5, &v14);
      v9 = StringCopy(v6, &v14);
      v6 = v9;
      *(_BYTE *)v9 = -4;
      *(_BYTE *)(v9 + 1) = 17;
      LOBYTE(v9) = v7 - v8;
      goto LABEL_15;
    }
    if ( a5 == 2 )
    {
      ConvertIntToDecimalString(&v14, a3);
      v11 = (unsigned __int8)GetStringWidth(v5, &v14);
      if ( v7 > v11 )
      {
        *(_BYTE *)v6 = -4;
        *(_BYTE *)(v6 + 1) = 17;
        *(_BYTE *)(v6 + 2) = (signed int)(v7 - v11) / 2;
        v6 += 3;
      }
      v12 = StringCopy(v6, &v14);
      v6 = v12;
      if ( v7 > v11 )
      {
        *(_BYTE *)v12 = -4;
        *(_BYTE *)(v12 + 1) = 17;
        v9 = (signed int)(v7 - v11) / 2;
LABEL_15:
        *(_BYTE *)(v6 + 2) = v9;
        v6 += 3;
        *(_BYTE *)v6 = -1;
        return v6;
      }
    }
  }
  return v6;
}
