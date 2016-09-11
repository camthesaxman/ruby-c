int ma11_if_else()
{
  int v0; // r2@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = v202F7A4++;
  if ( v202F7C4 & 1 )
    v202F7A4 = v0 + 5;
  v202F7A4 = *v202F7A4
           + (*(_BYTE *)(v202F7A4 + 1) << 8)
           + (*(_BYTE *)(v202F7A4 + 2) << 16)
           + (*(_BYTE *)(v202F7A4 + 3) << 24);
  return v2;
}
