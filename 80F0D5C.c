signed int sub_80F0D5C()
{
  int v1; // r5@4
  void *v2; // r0@6
  __int16 v3; // r2@6
  signed int v4; // r1@7

  if ( v200D15C == 7 )
    return 0;
  ++v2000306;
  if ( v2000306 > 1u )
  {
    v2000306 = 0;
    BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
    v1 = (2 * v200D15C + 2 + v2008778) & 0x1F;
    if ( v200D15C <= 6u )
    {
      switch ( v200D15C )
      {
        case 0u:
          v2 = &gUnknown_08410E40;
          v3 = 8 * v1;
          goto _080F0E54;
        case 1u:
          v4 = 53520;
          goto _080F0E42;
        case 2u:
          v2 = &gUnknown_08410E4C;
          v3 = 8 * v1;
          goto _080F0E54;
        case 3u:
          v4 = 53524;
          goto _080F0E42;
        case 4u:
          v2 = &gUnknown_08410E61;
          v3 = 8 * v1;
          goto _080F0E54;
        case 5u:
          v4 = 53528;
_080F0E42:
          sub_8072C74(33589128, *(_DWORD *)(v4 + 0x2000000), 0x88u, 0);
          v3 = 8 * v1;
          v2 = (void *)33589128;
_080F0E54:
          sub_80729D8((int)v2, 97, v3, 0);
          ++v200D15C;
          return 1;
        case 6u:
          sub_8072C74(33589128, v200D11C, 0x88u, 0);
          sub_80729D8(33589128, 97, 8 * v1, 0);
          return 0;
        default:
          return 0;
      }
    }
    return 0;
  }
  return 1;
}
