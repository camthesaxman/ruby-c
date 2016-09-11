int __fastcall unused_sub_8073F60(int a1)
{
  unsigned int v1; // r2@8
  unsigned int v2; // r5@8
  unsigned int v3; // r3@8
  int v5; // [sp+Ch] [bp-4h]@0

  if ( v202F38F & 0x80 && (1 << (*(_WORD *)(a1 + 4) << 21 >> 27)) & v202F388 )
  {
    if ( *(_BYTE *)(*(_DWORD *)a1 + 8) & 1 )
    {
      if ( !(v202F38C & 0x3F) && *(_BYTE *)(a1 + 8) != *(_BYTE *)(*(_DWORD *)a1 + 10) )
      {
        v1 = (unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 9) << 25 >> 27;
        v2 = ((unsigned int)*(_WORD *)(a1 + 6) << 20 >> 25) * v1;
        v3 = 0;
        if ( v1 > 0 )
        {
          do
          {
            *(_WORD *)(2 * (((unsigned int)*(_WORD *)(a1 + 4) << 21 >> 23) + v3) + 0x202EEC8) = *(_WORD *)(2 * (v2 + v3) + *(_DWORD *)(*(_DWORD *)a1 + 4));
            v3 = (v3 + 1) & 0xFF;
          }
          while ( v3 < (unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 9) << 25 >> 27 );
        }
      }
    }
    else if ( v202F38C << 26 != v202F390 << 26 )
    {
      BlendPalette(
        (unsigned int)*(_WORD *)(a1 + 4) << 21 >> 23,
        (unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 9) << 25 >> 27,
        (unsigned int)v202F38C << 21 >> 27,
        v202F38E & 0x7FFF);
    }
  }
  return v5;
}
