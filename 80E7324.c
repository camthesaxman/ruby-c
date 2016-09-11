int sub_80E7324()
{
  int v0; // r0@3
  int v1; // r1@5
  int v3; // [sp+0h] [bp-4h]@0

  if ( v2001024 <= 4u )
  {
    switch ( v2001024 )
    {
      case 0u:
        v0 = sub_80E7DD0() << 24;
        if ( v0 )
        {
          sub_80E88F0(v0);
          sub_80E87CC(0, v1);
          goto _080E7394;
        }
        sub_80E682C((int)sub_80E7294);
        break;
      case 1u:
        ++v2001024;
        break;
      case 2u:
        sub_80E9E98(33558528);
        goto _080E7394;
      case 3u:
        if ( sub_80EA184() << 24 )
_080E7394:
          ++v2001024;
        break;
      case 4u:
        if ( v2001008 == 6 && sub_80E7FA8() << 24 )
          sub_80E682C((int)sub_80E6D7C);
        else
          sub_80E682C((int)sub_80E6AC4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
