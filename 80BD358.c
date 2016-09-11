signed int __fastcall sub_80BD358(int a1)
{
  unsigned int v2; // r2@4
  unsigned int v3; // r2@7

  if ( *(_BYTE *)a1 && (unsigned int)*(_BYTE *)(a1 + 1) << 27 >> 31 == v2024EAC )
  {
    v2 = 0;
    while ( *(_BYTE *)(a1 + 9 + v2) == *(_BYTE *)(v2 + 33705646) )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 3 )
      {
        v3 = 0;
        if ( *(_BYTE *)(a1 + 2) == 255 && v2024EA4 == 255 )
          return 1;
        while ( *(_BYTE *)(a1 + 2 + v3) == *(_BYTE *)(v3 + 33705636) )
        {
          v3 = (v3 + 1) & 0xFF;
          if ( v3 > 6 || *(_BYTE *)(a1 + 2 + v3) == 255 && *(_BYTE *)(v3 + 33705636) == 255 )
            return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}
