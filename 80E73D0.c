int __fastcall sub_80E73D0(int a1, int a2)
{
  int v2; // r0@3
  int v3; // r0@4
  int v4; // r0@6
  int v6; // [sp+0h] [bp-4h]@0

  if ( v2001024 <= 4u )
  {
    switch ( v2001024 )
    {
      case 0u:
        v2 = sub_80E87CC(0, a2);
        sub_80E88F0(v2);
        goto _080E7436;
      case 1u:
        v3 = sub_80E9AD4(v2001024);
        sub_80E9E98(v3);
        goto _080E7436;
      case 2u:
        if ( !(sub_80EA0E4() << 24) )
          return v6;
        v4 = sub_80E8D8C(1);
        sub_80E9A14(v4);
        goto _080E7436;
      case 3u:
        sub_80E8420(v2001024);
        sub_80E8958(0);
_080E7436:
        ++v2001024;
        break;
      case 4u:
        sub_80E9974(v2001024);
        sub_80E682C((int)sub_80E6FC8);
        break;
      default:
        return v6;
    }
  }
  return v6;
}
