int sub_80E60D8()
{
  signed int v0; // r4@1
  int v1; // r1@3
  unsigned int v2; // r2@8
  int (*v3)(); // r12@8
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 3;
  if ( v202E8CC <= 0xDu )
  {
    switch ( v202E8CC )
    {
      case 0u:
        v1 = 33718864;
        goto _080E624C;
      case 1u:
        v1 = 33718876;
        goto _080E6276;
      case 2u:
        v1 = 33718888;
        goto _080E624C;
      case 3u:
        v1 = 33718900;
        goto _080E6276;
      case 4u:
        v1 = 36 * v202E8CE + 33718912;
        goto _080E624C;
      case 6u:
        v2 = 0;
        v3 = sub_80546B8;
        do
        {
          *(_WORD *)(2 * v2 + 0x20284D6) = *(_WORD *)(2 * v2 + 0x20284CA);
          v2 = (v2 + 1) & 0xFFFF;
        }
        while ( v2 <= 5 );
        v1 = 33719510;
        goto _080E627A;
      case 5u:
        v1 = 36 * v202E8CE + 33717872;
        v0 = v202E8D0;
        goto _080E6276;
      case 7u:
        v1 = 36 * v202E8CE + 33717896 + 2 * v202E8D0;
        goto _080E624A;
      case 8u:
        v1 = 36 * v202E8CE + 33717870;
        v0 = 0;
        goto _080E6276;
      case 9u:
        v1 = 0;
        goto _080E624C;
      case 0xAu:
        v1 = 33718858;
        v202824A = -1;
        goto _080E624A;
      case 0xBu:
        v1 = 36 * v202E8CE + 33717872 + 2 * v202E8D0;
        v0 = 0;
        goto _080E6276;
      case 0xCu:
        v1 = 36 * v202E8CE + 33717892;
_080E624A:
        v0 = 1;
_080E624C:
        v3 = sub_80546B8;
        goto _080E627A;
      case 0xDu:
        v200AC7C = -1;
        v200AC7E = -1;
        v1 = 33598588;
_080E6276:
        v3 = sub_80546B8;
_080E627A:
        sub_80E62A0(v202E8CC, v1, v3, v0);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
