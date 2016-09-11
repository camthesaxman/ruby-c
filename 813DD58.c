int __fastcall sub_813DD58(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  __int16 v3; // r1@7
  __int16 v4; // r0@16
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
_0813DDAE:
    if ( (signed int)*(_WORD *)(v1 + 52) <= 256 )
    {
      if ( *(_WORD *)(v1 + 50) )
        SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, -256, 0, 0, 256);
      else
        SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, 256, 0, 0, 256);
      ++*(_WORD *)(v1 + 46);
    }
    else
    {
      v3 = *(_WORD *)(v1 + 52) - 128;
      *(_WORD *)(v1 + 52) = v3;
      if ( *(_WORD *)(v1 + 50) )
        SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, -v3, 0, 0, *(_WORD *)(v1 + 52));
      else
        SetOamMatrix(*(_WORD *)(v1 + 48) & 0xFF, *(_WORD *)(v1 + 52), 0, 0, *(_WORD *)(v1 + 52));
    }
    return v6;
  }
  if ( v2 <= 1 )
    goto LABEL_22;
  if ( v2 == 2 )
    return v6;
  if ( v2 != 3 )
  {
LABEL_22:
    *(_BYTE *)(v1 + 62) &= 0xFBu;
    *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (*(_WORD *)(v1 + 48) & 0x1F);
    *(_WORD *)(v1 + 52) = 2048;
    *(_WORD *)(v1 + 46) = 1;
    goto _0813DDAE;
  }
  ++*(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 54) * (signed int)*(_WORD *)(v1 + 54) / 32;
  if ( *(_WORD *)(v1 + 50) )
    v4 = *(_WORD *)(v1 + 54) / 4;
  else
    v4 = *(_WORD *)(v1 + 54) / -4;
  *(_WORD *)(v1 + 36) = v4;
  return v6;
}
