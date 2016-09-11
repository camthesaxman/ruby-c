int atk42_jumpiftype2()
{
  int v0; // r0@1
  int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 88 * (unsigned __int8)sub_8015150(*(_BYTE *)(v2024C10 + 1)) + 33704576;
  v1 = *(_BYTE *)(v2024C10 + 2);
  if ( v1 != *(_BYTE *)(v0 + 33) && v1 != *(_BYTE *)(v0 + 34) )
    v2024C10 += 7;
  else
    v2024C10 = *(_BYTE *)(v2024C10 + 3) | (*(_BYTE *)(v2024C10 + 4) << 8) | (*(_BYTE *)(v2024C10 + 5) << 16) | (*(_BYTE *)(v2024C10 + 6) << 24);
  return v3;
}
