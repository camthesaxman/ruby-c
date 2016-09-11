int sub_8020D7C()
{
  unsigned int v0; // r6@1
  unsigned int *v1; // r5@1
  unsigned int v2; // r4@1
  int v3; // r2@1
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1);
  v1 = (unsigned int *)(*(_BYTE *)(v2024C10 + 2)
                      + (*(_BYTE *)(v2024C10 + 3) << 8)
                      + (*(_BYTE *)(v2024C10 + 4) << 16)
                      + (*(_BYTE *)(v2024C10 + 5) << 24));
  v2 = *(_BYTE *)(v2024C10 + 6) | (*(_BYTE *)(v2024C10 + 7) << 8) | (*(_BYTE *)(v2024C10 + 8) << 16) | (*(_BYTE *)(v2024C10 + 9) << 24);
  v3 = *(_BYTE *)(v2024C10 + 10)
     + (*(_BYTE *)(v2024C10 + 11) << 8)
     + (*(_BYTE *)(v2024C10 + 12) << 16)
     + (*(_BYTE *)(v2024C10 + 13) << 24);
  v2024C10 += 14;
  if ( v0 <= 5 )
  {
    switch ( v0 )
    {
      case 0u:
        if ( *v1 == v2 )
          goto _08020E26;
        break;
      case 1u:
        if ( *v1 != v2 )
          goto _08020E26;
        break;
      case 2u:
        if ( *v1 > v2 )
          goto _08020E26;
        break;
      case 3u:
        if ( *v1 < v2 )
          goto _08020E26;
        break;
      case 4u:
        if ( *v1 & v2 )
          goto _08020E26;
        break;
      case 5u:
        if ( !(*v1 & v2) )
_08020E26:
          v2024C10 = v3;
        break;
      default:
        return v5;
    }
  }
  return v5;
}
