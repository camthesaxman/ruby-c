int __fastcall StringCompareN(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r3@1
  int v5; // r0@5

  v3 = a1;
  while ( 1 )
  {
    v5 = *v3;
    if ( v5 != *a2 )
      break;
    if ( v5 != 255 )
    {
      ++v3;
      ++a2;
      if ( --a3 )
        continue;
    }
    return 0;
  }
  return *v3 - *a2;
}
