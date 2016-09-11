int __fastcall sub_80ADA4C(unsigned __int8 a1)
{
  int v1; // r1@1
  int *v2; // r4@1
  signed int v3; // r5@1
  __int16 v4; // r0@7
  __int16 v5; // r0@10
  int v7; // [sp+8h] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = LOWORD(dword_3004B20[v1 + 2]);
  if ( v3 == 1 )
  {
    if ( !(v201920B & 2) )
    {
      v5 = *((_WORD *)v2 + 5) + 1;
      *((_WORD *)v2 + 5) = v5;
      if ( v5 > 20 )
      {
        *((_WORD *)v2 + 5) = 0;
        goto _080ADAB2;
      }
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
    {
      sub_80AFF10();
      *((_WORD *)v2 + 4) = 0;
      *((_WORD *)v2 + 5) = 0;
      *v2 = (int)sub_80ADAD8;
    }
  }
  else if ( !LOWORD(dword_3004B20[v1 + 2]) )
  {
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    if ( v4 > 20 )
    {
      sub_80B25E4(2);
      *((_WORD *)v2 + 5) = 0;
_080ADAB2:
      ++*((_WORD *)v2 + 4);
      return v7;
    }
  }
  return v7;
}
