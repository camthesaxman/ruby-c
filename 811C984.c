int __fastcall sub_811C984(int a1)
{
  __int16 v1; // r2@1

  v1 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 32) = v1;
  if ( *(_WORD *)(a1 + 60) )
  {
    if ( v1 <= 132 )
      goto _0811C9AA;
  }
  else if ( v1 > 103 )
  {
_0811C9AA:
    ++*(_WORD *)(a1 + 46);
    return 0;
  }
  return 0;
}
