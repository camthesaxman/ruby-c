int sub_8040B8C()
{
  __int16 v0; // r0@2
  int v2; // [sp+8h] [bp-4h]@0

  v2024C06 = v20160C0;
  byte_30041C0[0] = -3;
  byte_30041C1 = 4;
  LOBYTE(word_30041C2) = v2016054;
  byte_30041C4 = -1;
  if ( battle_side_get_owner(v2016054) << 24 )
    v0 = *(_WORD *)(2 * v2016054 + 0x2024A6A);
  else
    LOBYTE(v0) = pokemon_order_func(*(_BYTE *)(2 * v2016054 + 0x2024A6A));
  HIBYTE(word_30041C2) = v0;
  byte_3004290[0] = -3;
  byte_3004291 = 4;
  LOBYTE(word_3004292) = v2024E6C;
  HIBYTE(word_3004292) = pokemon_order_func(*(_BYTE *)(2 * v2024E6C + 0x2024A6A));
  byte_3004294 = -1;
  sub_8120FFC(&gUnknown_083FFCCA, &gStringVar4);
  return v2;
}
