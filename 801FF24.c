int atk21_jumpifspecialstatusflag()
{
  int v0; // r6@1
  int v2; // [sp+Ch] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v0 = *(_BYTE *)(v2024C10 + 2)
     + (*(_BYTE *)(v2024C10 + 3) << 8)
     + (*(_BYTE *)(v2024C10 + 4) << 16)
     + (*(_BYTE *)(v2024C10 + 5) << 24);
  if ( *(_BYTE *)(v2024C10 + 6) )
  {
    if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & v0) )
      goto _0801FF94;
_0801FF9C:
    v2024C10 += 11;
    return v2;
  }
  if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & v0) )
    goto _0801FF9C;
_0801FF94:
  v2024C10 = *(_BYTE *)(v2024C10 + 7)
           + (*(_BYTE *)(v2024C10 + 8) << 8)
           + (*(_BYTE *)(v2024C10 + 9) << 16)
           + (*(_BYTE *)(v2024C10 + 10) << 24);
  return v2;
}
