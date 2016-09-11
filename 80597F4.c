int sub_80597F4()
{
  int *v0; // r4@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = &dword_30048A0[9 * v202E85D];
  npc_clear_strange_bits((int)v0);
  FieldObjectSetDirection(v0, *((_BYTE *)v0 + 24) & 0xF);
  v1 = TestPlayerAvatarFlags(6u) << 24;
  if ( v1 )
  {
    sub_80E6084(v1);
    sub_80E6010(0);
  }
  return v3;
}
