signed int __fastcall b_side_obj__get_some_boolean(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r0@4

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( !(sub_8076BE0(v1) << 24) )
  {
    v4 = sub_8078874(v2) << 24;
    if ( !v4
      || !(sub_8076BE0(v4) << 24)
      && *(_BYTE *)(4 * v3 + 0x2017800) & 1
      && gSprites[68 * *(_BYTE *)(v3 + 33704928) + 62] & 4 )
    {
      return 0;
    }
    return 1;
  }
  if ( v2 == v202F7C8 )
    return 1;
  return 0;
}
