int atk27_cmd27()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = v2024C0E - 1;
  --v2024C0E;
  if ( v0 << 24 )
    v2024C10 = *(_BYTE *)(v2024C10 + 1)
             + (*(_BYTE *)(v2024C10 + 2) << 8)
             + (*(_BYTE *)(v2024C10 + 3) << 16)
             + (*(_BYTE *)(v2024C10 + 4) << 24);
  else
    v2024C10 += 5;
  return v2;
}
