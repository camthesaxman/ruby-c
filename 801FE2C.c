int sub_801FE2C()
{
  signed int v0; // r5@1
  unsigned int v1; // r2@1
  unsigned int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v1 = *(_BYTE *)(88 * (unsigned __int8)sub_8015150(*(_BYTE *)(v2024C10 + 1)) + *(_BYTE *)(v2024C10 + 3) + 0x2024A98);
  v2 = *(_BYTE *)(v2024C10 + 2);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        if ( v1 == *(_BYTE *)(v2024C10 + 4) )
          goto _0801FEE4;
        break;
      case 1u:
        if ( v1 != *(_BYTE *)(v2024C10 + 4) )
          goto _0801FEE4;
        break;
      case 2u:
        if ( v1 > *(_BYTE *)(v2024C10 + 4) )
          goto _0801FEE4;
        break;
      case 3u:
        if ( v1 < *(_BYTE *)(v2024C10 + 4) )
          goto _0801FEE4;
        break;
      case 4u:
        if ( (unsigned __int8)v1 & *(_BYTE *)(v2024C10 + 4) )
          goto _0801FEE4;
        break;
      case 5u:
        if ( !((unsigned __int8)v1 & *(_BYTE *)(v2024C10 + 4)) )
_0801FEE4:
          v0 = 1;
        break;
      default:
        break;
    }
  }
  if ( v0 )
    v2024C10 = *(_BYTE *)(v2024C10 + 5)
             + (*(_BYTE *)(v2024C10 + 6) << 8)
             + (*(_BYTE *)(v2024C10 + 7) << 16)
             + (*(_BYTE *)(v2024C10 + 8) << 24);
  else
    v2024C10 += 9;
  return v4;
}
