int __fastcall mapheader_get_tagged_pointer(unsigned __int8 a1)
{
  int v1; // r2@1

  v1 = v202E830;
  if ( v202E830 )
  {
    while ( *(_BYTE *)v1 )
    {
      if ( *(_BYTE *)v1 == a1 )
        return *(_BYTE *)(v1 + 1) + (*(_BYTE *)(v1 + 2) << 8) + (*(_BYTE *)(v1 + 3) << 16) + (*(_BYTE *)(v1 + 4) << 24);
      v1 += 5;
    }
  }
  return 0;
}
