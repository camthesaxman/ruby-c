int atkCA_setforcedtarget()
{
  int v1; // [sp+8h] [bp-4h]@0

  *(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024C07) + 0x2024C88) = 1;
  *(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024C07) + 0x2024C89) = v2024C07;
  ++v2024C10;
  return v1;
}
