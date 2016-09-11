int __fastcall sub_812CA04(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r0@5
  int v4; // r0@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        *(_BYTE *)(v1 + 62) &= 0xFBu;
        if ( *(_BYTE *)(v1 + 63) & 0x20 )
          goto _0812CA9E;
        break;
      case 1u:
      case 3u:
        v3 = *(_WORD *)(v1 + 48) + 117;
        *(_WORD *)(v1 + 48) = v3;
        *(_WORD *)(v1 + 36) = v3 << 16 >> 24;
        LOWORD(v3) = *(_WORD *)(v1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v3;
        if ( (signed __int16)v3 == 21 )
        {
          *(_WORD *)(v1 + 50) = 0;
          goto _0812CA9E;
        }
        break;
      case 2u:
        v4 = *(_WORD *)(v1 + 48) - 117;
        *(_WORD *)(v1 + 48) = v4;
        *(_WORD *)(v1 + 36) = v4 << 16 >> 24;
        LOWORD(v4) = *(_WORD *)(v1 + 50) + 1;
        *(_WORD *)(v1 + 50) = v4;
        if ( (signed __int16)v4 == 41 )
        {
          *(_WORD *)(v1 + 50) = 0;
          goto _0812CA9E;
        }
        break;
      case 4u:
        ChangeSpriteAffineAnim(v1, 1);
_0812CA9E:
        ++*(_WORD *)(v1 + 46);
        break;
      case 5u:
        if ( *(_BYTE *)(v1 + 63) & 0x20 )
        {
          *(_BYTE *)(v1 + 62) |= 4u;
          *(_DWORD *)(v1 + 28) = sub_812CAD0;
        }
        break;
      default:
        return v6;
    }
  }
  return v6;
}
