int b_feature_update_destiny_bond()
{
  int v0; // r5@1
  int v1; // r3@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)battle_side_get_owner(v2024C07);
  v1 = (unsigned __int8)battle_side_get_owner(v2024C08);
  if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x2000000 && v0 != v1 && !(v2024C6C & 0x1000000) )
    v2024C6C |= 0x40u;
  return v3;
}
