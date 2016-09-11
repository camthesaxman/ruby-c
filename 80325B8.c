int sub_80325B8()
{
  int v0; // r4@1
  int v1; // r0@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)battle_get_side_with_given_state(0);
  v1 = *(_BYTE *)(4 * v0 + 0x2017800) & 0xFD;
  *(_BYTE *)(4 * v0 + 0x2017800) = v1;
  if ( battle_type_is_double(v1) << 24 )
    *(_BYTE *)(4 * (v0 ^ 2) + 0x2017800) &= 0xFDu;
  m4aSongNumStop(90);
  return v3;
}
