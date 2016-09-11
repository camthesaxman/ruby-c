int sub_807784C()
{
  int v0; // r6@1
  int v1; // r4@1
  int v2; // r0@3
  int v3; // r4@5
  int v5; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)(v202F7A4 + 1);
  v202F7A4 += 2;
  v1 = battle_side_get_owner(v202F7C8);
  if ( v1 << 24 != battle_side_get_owner(v202F7C9) << 24 )
  {
    if ( v0 )
      v2 = v202F7C9;
    else
      v2 = v202F7C8;
    v3 = (unsigned __int8)battle_get_per_side_status(v2);
    if ( !(sub_8076BE0() << 24) && (!v3 || v3 == 3) )
    {
      v400000A = v400000A & 0xFC | 1;
      v400000C = v400000C & 0xFC | 2;
    }
  }
  return v5;
}
