int __fastcall sub_8110AE4(unsigned __int16 a1, int a2)
{
  int v2; // r6@2
  int v3; // r4@3
  unsigned int v4; // r4@7
  int v5; // r2@8
  int v7; // [sp+Ch] [bp-4h]@0

  a2 = (unsigned __int16)a2;
  if ( v2000112 <= 0x1Fu )
  {
    v2 = get_mapheader_by_bank_and_number(a1, a2);
    if ( (unsigned int)*(_BYTE *)(v2 + 20) <= 0x57 )
    {
      v3 = 0;
      if ( gUnknown_083F857A[0] == 88 )
      {
_08110B42:
        v4 = 0;
        if ( v2000112 > 0u )
        {
          v5 = *(_BYTE *)(v2 + 20);
          if ( v2000620 != v5 )
          {
            do
              v4 = (v4 + 1) & 0xFFFF;
            while ( v4 < v2000112 && *(_WORD *)(2 * v4 + 0x2000620) != v5 );
          }
        }
        if ( v4 == v2000112 )
        {
          *(_WORD *)(2 * v4 + 0x2000620) = *(_BYTE *)(v2 + 20);
          ++v2000112;
        }
      }
      else
      {
        while ( *(_BYTE *)(v2 + 20) != gUnknown_083F857A[2 * v3] || FlagGet(word_83F857C[2 * v3]) << 24 )
        {
          v3 = (v3 + 1) & 0xFFFF;
          if ( gUnknown_083F857A[2 * v3] == 88 )
            goto _08110B42;
        }
      }
    }
  }
  return v7;
}
