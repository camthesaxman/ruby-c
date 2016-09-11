int __fastcall sub_8053D30(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@3
  int result; // r0@7

  v1 = a1;
  result = 0;
  if ( FlagGet(2090) << 24 )
  {
    if ( !*(_BYTE *)v1 )
    {
      v2 = *(_BYTE *)(v1 + 1);
      if ( v2 >= 5 && (v2 <= 8 || v2 <= 43 && v2 >= 39) )
        result = 1;
    }
  }
  return result;
}
