int sub_8032638()
{
  int v0; // r8@2
  int v1; // r9@2
  int v2; // r4@2
  int v3; // r5@2
  char *v4; // r4@2
  int v5; // r0@2
  int v7; // [sp+18h] [bp-4h]@0

  if ( byte_3001BAD & 2 )
  {
    v0 = (unsigned __int8)battle_get_side_with_given_state(0);
    v1 = (unsigned __int8)battle_get_side_with_given_state(2);
    v2 = (unsigned __int8)pokemon_order_func(*(_BYTE *)(2 * v0 + 0x2024A6A));
    v3 = (unsigned __int8)pokemon_order_func(*(_BYTE *)(2 * v1 + 0x2024A6A));
    v4 = (char *)&unk_3004360 + 100 * v2;
    v5 = GetMonData(v4, 57);
    if ( v5 )
      v5 = sub_80324F8((int)v4, v0);
    if ( battle_type_is_double(v5) << 24 && GetMonData((char *)&unk_3004360 + 100 * v3, 57) )
      sub_80324F8((int)&unk_3004360 + 100 * v3, v1);
  }
  return v7;
}
