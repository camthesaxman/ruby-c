_BOOL4 __fastcall sub_8081658(int a1)
{
  int v1; // r3@1
  unsigned int v2; // r2@1

  v1 = v4000052;
  v2 = (unsigned int)v4000052 >> 8;
  if ( a1 << 16 )
  {
    if ( v4000052 )
      v1 = (v4000052 - 1) & 0xFF;
  }
  else if ( v2 <= 0xF )
  {
    v2 = (v2 + 1) & 0xFF;
  }
  v4000052 = ((_WORD)v2 << 8) | v1;
  return !v1 && v2 == 16;
}
