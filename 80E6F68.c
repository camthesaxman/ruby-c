int sub_80E6F68()
{
  int v0; // r0@4
  int v1; // r0@4
  int v2; // r0@6
  int v4; // [sp+4h] [bp-4h]@0

  if ( v2001024 )
  {
    if ( v2001024 == 1 && sub_80E9EA8() << 24 )
    {
      v2 = sub_80E8D8C(1);
      sub_80E8420(v2);
      sub_80E8958(0);
      sub_80E682C((int)sub_80E6FC8);
    }
  }
  else
  {
    sub_80E8398(1);
    sub_80E91D4(10);
    v0 = sub_80E683C();
    v1 = sub_80E9974(v0);
    sub_80E9E98(v1);
    ++v2001024;
  }
  return v4;
}
