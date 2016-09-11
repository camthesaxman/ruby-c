int __fastcall sub_80AE020(int a1, signed int a2)
{
  int i; // r4@1
  int v3; // r0@3
  char *v4; // r0@6
  int v6; // [sp+4h] [bp-4h]@0

  for ( i = a1; ; ++i )
  {
    v3 = *(_BYTE *)i;
    if ( v3 == 255 )
      break;
    if ( v3 == 252 && !*(_BYTE *)(i + 1) )
    {
      v4 = ConvertIntToDecimalStringN((char *)i, a2, 0, 1);
      *v4 = -1;
      StringAppend(v4, (_BYTE *)(i + 2));
      return v6;
    }
  }
  return v6;
}
