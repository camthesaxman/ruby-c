int __fastcall AlignInt1(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  unsigned int v8; // r5@8
  unsigned int v9; // r5@11
  int v11; // [sp+0h] [bp-20h]@7

  v5 = a1;
  v6 = a2;
  v7 = a4;
  if ( a5 == 1 )
  {
    ConvertIntToDecimalString(&v11, a3);
    v8 = GetStringWidth(v5, &v11) & 0xFF;
    if ( v7 > v8 )
    {
      *(_BYTE *)v6 = -4;
      *(_BYTE *)(v6 + 1) = 19;
      *(_BYTE *)(v6 + 2) = v7 - v8;
      v6 += 3;
    }
    v6 = StringCopy(v6, &v11);
  }
  else
  {
    if ( (signed int)a5 <= 1 )
    {
      if ( a5 )
        return v6;
      ConvertIntToDecimalString(&v11, a3);
      v6 = StringCopy(v6, &v11);
      goto LABEL_14;
    }
    if ( a5 == 2 )
    {
      ConvertIntToDecimalString(&v11, a3);
      v9 = GetStringWidth(v5, &v11) & 0xFF;
      if ( v7 > v9 )
      {
        *(_BYTE *)v6 = -4;
        *(_BYTE *)(v6 + 1) = 19;
        *(_BYTE *)(v6 + 2) = (signed int)(v7 - v9) / 2;
        v6 += 3;
      }
      v6 = StringCopy(v6, &v11);
      if ( v7 > v9 )
      {
LABEL_14:
        *(_BYTE *)v6 = -4;
        *(_BYTE *)(v6 + 1) = 19;
        *(_BYTE *)(v6 + 2) = v7;
        v6 += 3;
        *(_BYTE *)v6 = -1;
        return v6;
      }
    }
  }
  return v6;
}
