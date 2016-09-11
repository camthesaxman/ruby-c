int __fastcall sub_80FD40C(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r6@1
  int v3; // r7@1
  unsigned int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // r0@6

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = (a1 / 6u & 0xFF) % 3 & 0xFF;
  v5 = a1 % 6u & 0xFF;
  if ( v5 <= 5 )
  {
    switch ( v5 )
    {
      case 0u:
        v2 = (21 - v4) & 0xFFFF;
        v3 = (21 - v4) & 0xFFFF;
        v1 = 0;
        break;
      case 1u:
        v3 = 0;
        v1 = (21 - v4) & 0xFFFF;
        v2 = (21 - v4) & 0xFFFF;
        break;
      case 2u:
        v3 = (21 - v4) & 0xFFFF;
        v2 = 0;
        v1 = (21 - v4) & 0xFFFF;
        break;
      case 3u:
        v3 = 0;
        v2 = 0;
        v6 = (23 - v4) & 0xFFFF;
        goto _080FD4C2;
      case 4u:
        v3 = (23 - v4) & 0xFFFF;
        v2 = 0;
        v1 = 0;
        break;
      case 5u:
        v3 = 0;
        v2 = (23 - v4) & 0xFFFF;
        v6 = 0;
_080FD4C2:
        v1 = v6;
        break;
      default:
        return (v1 | (v3 << 10) | 32 * v2) & 0xFFFF;
    }
  }
  return (v1 | (v3 << 10) | 32 * v2) & 0xFFFF;
}
