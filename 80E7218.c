int sub_80E7218()
{
  int v0; // r0@8
  int v1; // r0@8
  int v2; // r0@8
  int v3; // r0@8
  int v5; // [sp+4h] [bp-4h]@0

  if ( v2001024 == 9 )
  {
    if ( !(sub_80EA050() << 24) )
      return v5;
    sub_80E9C94();
    goto _080E726E;
  }
  if ( (signed int)v2001024 <= 9 )
  {
    if ( v2001024 != 8 )
    {
_080E723C:
      ++v2001024;
      return v5;
    }
    v0 = sub_80E8D8C(0);
    v1 = sub_80E8504(v0);
    sub_80E9AD4(v1);
    v2 = sub_80E68E8();
    v3 = sub_80E88F0(v2);
    sub_80E9E98(v3);
_080E726E:
    ++v2001024;
    return v5;
  }
  if ( v2001024 == 10 )
  {
    sub_80E87CC(1, 33558528);
    sub_80E8958(1);
    sub_80E682C((int)sub_80E7294);
    return v5;
  }
  if ( v2001024 != 11 )
    goto _080E723C;
  return v5;
}
