int __fastcall AlignString(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r4@1
  int v6; // r7@1
  unsigned int v7; // r6@1
  unsigned int v8; // r5@8
  unsigned int v9; // r5@11

  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( a5 == 1 )
  {
    v8 = (unsigned __int8)GetStringWidth(a1, a3);
    if ( v7 > v8 )
    {
      *(_BYTE *)v5 = -4;
      *(_BYTE *)(v5 + 1) = 19;
      *(_BYTE *)(v5 + 2) = v7 - v8;
      v5 += 3;
    }
    v5 = StringCopy(v5, v6);
  }
  else
  {
    if ( (signed int)a5 <= 1 )
    {
      if ( a5 )
        return v5;
      v5 = StringCopy(a2, a3);
      goto LABEL_14;
    }
    if ( a5 == 2 )
    {
      v9 = (unsigned __int8)GetStringWidth(a1, a3);
      if ( v7 > v9 )
      {
        *(_BYTE *)v5 = -4;
        *(_BYTE *)(v5 + 1) = 19;
        *(_BYTE *)(v5 + 2) = (signed int)(v7 - v9) / 2;
        v5 += 3;
      }
      v5 = StringCopy(v5, v6);
      if ( v7 > v9 )
      {
LABEL_14:
        *(_BYTE *)v5 = -4;
        *(_BYTE *)(v5 + 1) = 19;
        *(_BYTE *)(v5 + 2) = v7;
        v5 += 3;
        *(_BYTE *)v5 = -1;
        return v5;
      }
    }
  }
  return v5;
}
