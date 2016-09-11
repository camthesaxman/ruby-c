int sub_80E7114()
{
  int v0; // r0@3
  int v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  if ( v2001024 <= 4u )
  {
    switch ( v2001024 )
    {
      case 0u:
        v0 = sub_80E8504();
        v1 = sub_80E9E98(v0);
        sub_80E88F0(v1);
        sub_80E8D8C(0);
        goto _080E716E;
      case 1u:
      case 2u:
        ++v2001024;
        break;
      case 3u:
        if ( sub_80E9F50() << 24 )
_080E716E:
          ++v2001024;
        break;
      case 4u:
        sub_80E682C((int)sub_80E6AC4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
