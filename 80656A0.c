int __fastcall mapheader_get_first_match_from_tagged_ptr_list(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r1@2
  int v4; // r6@4
  int v5; // r5@4
  int v6; // r6@4
  int v7; // r4@4

  v1 = mapheader_get_tagged_pointer(a1);
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = *(_BYTE *)v1 | (*(_BYTE *)(v1 + 1) << 8);
      if ( !v2 )
        break;
      v4 = v1 + 2;
      v5 = *(_BYTE *)v4 | (*(_BYTE *)(v4 + 1) << 8);
      v6 = v4 + 2;
      v7 = VarGet(v2);
      if ( v7 << 16 == VarGet(v5) << 16 )
        return *(_BYTE *)v6 + (*(_BYTE *)(v6 + 1) << 8) + (*(_BYTE *)(v6 + 2) << 16) + (*(_BYTE *)(v6 + 3) << 24);
      v1 = v6 + 4;
    }
  }
  return 0;
}
