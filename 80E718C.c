int sub_80E718C()
{
  int v0; // r0@7
  int v1; // r0@7
  char v2; // r2@9
  int v3; // r0@11
  int v4; // r0@11
  int v5; // r0@13
  int v7; // [sp+4h] [bp-4h]@0

  if ( v2001024 == 1 )
  {
    if ( sub_80E9FD4() << 24 )
    {
      v2 = 0;
      if ( !v2001026 )
        v2 = 1;
      v2001026 = v2;
      v3 = sub_80E683C();
      v4 = sub_80E9974(v3);
      sub_80E9E98(v4);
      goto _080E71EC;
    }
  }
  else if ( (signed int)v2001024 > 1 )
  {
    if ( v2001024 != 8 )
      goto _080E71EC;
    v5 = sub_80EA014() << 24;
    if ( v5 )
    {
      sub_80E8420(v5);
      sub_80E8958(0);
      sub_80E682C((int)sub_80E6FC8);
    }
  }
  else
  {
    if ( v2001024 )
    {
_080E71EC:
      ++v2001024;
      return v7;
    }
    v0 = sub_80E8504();
    v1 = sub_80E9E98(v0);
    sub_80E88F0(v1);
    ++v2001024;
    sub_80E8D54();
  }
  return v7;
}
