int __fastcall sub_81497FC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@3
  __int16 v3; // r3@4
  unsigned int v4; // r2@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(*(_WORD *)(a1 + 60) & 3) )
    ++*(_WORD *)(a1 + 34);
  v2 = *(_WORD *)(a1 + 58);
  if ( (signed int)*(_WORD *)(a1 + 58) > 127 )
  {
    DestroySprite(a1);
  }
  else
  {
    *(_WORD *)(a1 + 38) = -(signed __int16)sine((unsigned __int8)v2, *(_WORD *)(a1 + 56));
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 60) * (signed int)*(_WORD *)(v1 + 52) / 3 + 120;
    v3 = *(_WORD *)(v1 + 58) + 1;
    *(_WORD *)(v1 + 58) = v3;
    v4 = (31 - 12 * *(_WORD *)(v1 + 58) / 128) & 0xFF;
    if ( v3 <= 64 )
    {
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      *(_BYTE *)(v1 + 67) = 20;
      if ( (signed int)*(_WORD *)(v1 + 58) > 112 && *(_WORD *)(v1 + 58) & 1 )
        *(_BYTE *)(v1 + 62) |= 4u;
    }
    else
    {
      *(_BYTE *)(v1 + 67) = 1;
    }
    if ( v4 <= 0x13 )
      LOBYTE(v4) = 20;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (v4 & 0x1F);
    ++*(_WORD *)(v1 + 60);
  }
  return v6;
}
