int sub_802B51C()
{
  int v0; // r0@1
  char v1; // r2@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (battle_side_get_owner(v2024C07) ^ 1) & 0xFF;
  if ( *(_BYTE *)(12 * v0 + 0x2024C80) || (v1 = *(_BYTE *)(12 * v0 + 0x2024C81)) != 0 )
  {
    *(_WORD *)(2 * v0 + 0x2024C7A) &= 0xFFFCu;
    *(_BYTE *)(12 * v0 + 0x2024C80) = 0;
    *(_BYTE *)(12 * v0 + 0x2024C81) = 0;
    v1 = 1;
    v2016002 = 1;
  }
  else
  {
    v2016002 = 0;
  }
  v20160A1 = v1;
  ++v2024C10;
  return v3;
}
