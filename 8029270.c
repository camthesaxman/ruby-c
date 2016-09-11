int sub_8029270()
{
  signed int v0; // r0@2
  signed int i; // r1@12
  int v3; // [sp+1Ch] [bp-4h]@0

  if ( v2024C0E == 1 )
  {
    v0 = battle_side_get_owner(v2024C07) << 24 == 0;
  }
  else if ( battle_side_get_owner(v2024C07) << 24 )
  {
    v0 = 2;
  }
  else
  {
    v0 = 3;
  }
  v2024C08 = battle_get_side_with_given_state(v0);
  if ( *(_BYTE *)(v2024C08 + 0x2024C18)
    || v2024C07 != *(_BYTE *)(v2024C08 + 0x2016010)
    || *(_DWORD *)(88 * v2024C08 + 0x2024ACC) & 0x27
    || !*(_WORD *)(88 * v2024C07 + 0x2024AA8)
    || *(_BYTE *)(28 * v2024C08 + 0x2024CC0) << 31
    || *(_WORD *)(2 * v2024C08 + 0x2024C60) != 228 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    for ( i = 0; i < v2024A68; ++i )
    {
      if ( *(_BYTE *)(i + 33704570) == v2024C08 )
        *(_BYTE *)(i + 33704566) = 11;
    }
    v2024BE6 = 228;
    v2024C10 += 5;
    v2016002 = 1;
    v2024C6C &= 0xFFFFFBFF;
  }
  return v3;
}
