int sub_8102484()
{
  int v0; // r3@4
  int v1; // r3@6
  int v3; // [sp+4h] [bp-4h]@0

  if ( !v200000A && !(v2000004 & 0xC0) )
  {
    if ( !(sub_8102540() << 24)
      || (v0 = sub_8102578() & 0xFF, v0 == 3)
      || (v2000004 |= gUnknown_083ECE42[2 * v0], v0 == 1) )
    {
      v1 = sub_81025BC() & 0xFF;
      if ( v1 != 5 )
        v2000004 |= gUnknown_083ECE48[2 * v1];
    }
  }
  return v3;
}
