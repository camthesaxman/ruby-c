int __fastcall sub_8105170(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 36) = 0;
  *(_WORD *)(a1 + 38) = 0;
  if ( *(_BYTE *)(a1 + 42) == 4 )
  {
    *(_WORD *)(a1 + 36) = 8;
    *(_WORD *)(a1 + 38) = 8;
    if ( *(_BYTE *)(a1 + 43) )
    {
      if ( !(*(_BYTE *)(a1 + 44) & 0x3F) )
        return v2;
      goto _081051B2;
    }
    if ( !(*(_BYTE *)(a1 + 44) & 0x3F) )
    {
_081051B2:
      *(_WORD *)(a1 + 38) = -8;
      return v2;
    }
  }
  return v2;
}
