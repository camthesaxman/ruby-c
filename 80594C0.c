int sub_80594C0()
{
  unsigned __int8 v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  if ( v202E85B == 2 || !v202E85B )
  {
    if ( player_should_look_direction_be_enforced_upon_movement() << 24 )
    {
      v0 = GetFaceDirectionAnimId(dword_30048A0[9 * v202E85D + 6] & 0xF);
      sub_8059348(v0);
    }
  }
  return v2;
}
