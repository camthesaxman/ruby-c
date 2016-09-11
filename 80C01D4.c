int sub_80C01D4()
{
  unsigned int v0; // r6@1
  unsigned int v1; // r0@2
  int v2; // r0@4
  int v3; // r5@7
  int v4; // r0@7
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = *(_BYTE *)(36 * v0 + 0x2027E6C);
    if ( v1 > 0x29 )
    {
def_80C01F6:
      sub_80C03A8((unsigned __int8)v0);
    }
    else
    {
      switch ( v1 )
      {
        case 1u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E6E);
          goto _080C035A;
        case 3u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E6E);
          goto _080C035A;
        case 4u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E72);
          goto _080C035A;
        case 5u:
          v3 = (unsigned __int8)v0;
          sub_80C03C8(*(_WORD *)(36 * v0 + 0x2027E6E), (unsigned __int8)v0);
          v4 = *(_WORD *)(36 * v0 + 0x2027E88);
          goto _080C037E;
        case 6u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E6E);
          goto _080C035A;
        case 7u:
          v3 = (unsigned __int8)v0;
          sub_80C03C8(*(_WORD *)(36 * v0 + 0x2027E76), (unsigned __int8)v0);
          v4 = *(_WORD *)(36 * v0 + 0x2027E80);
          goto _080C037E;
        case 0x15u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E7C);
          goto _080C035A;
        case 0x17u:
          v3 = (unsigned __int8)v0;
          sub_80C03C8(*(_WORD *)(36 * v0 + 0x2027E78), (unsigned __int8)v0);
          v4 = *(_WORD *)(36 * v0 + 0x2027E7A);
          goto _080C037E;
        case 0x18u:
          v2 = *(_WORD *)(36 * v0 + 0x2027E70);
_080C035A:
          sub_80C03C8(v2, (unsigned __int8)v0);
          break;
        case 0x19u:
          v3 = (unsigned __int8)v0;
          sub_80C03C8(*(_WORD *)(36 * v0 + 0x2027E74), (unsigned __int8)v0);
          v4 = *(_WORD *)(36 * v0 + 0x2027E70);
_080C037E:
          sub_80C03C8(v4, v3);
          break;
        default:
          goto def_80C01F6;
        case 0u:
        case 2u:
        case 0x16u:
        case 0x29u:
          break;
      }
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x17 );
  return v6;
}
