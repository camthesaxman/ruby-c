int __fastcall LoadFixedWidthGlyph(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // ST00_4@4
  int v7; // ST00_4@4
  int v9; // [sp+4h] [bp-14h]@1
  int v10; // [sp+8h] [bp-10h]@3
  int v11; // [sp+14h] [bp-4h]@5

  v3 = a1;
  v4 = a3;
  GetGlyphTilePointers(*(_BYTE *)(a1 + 1), *(_BYTE *)(a1 + 2), a2, &v9);
  v5 = *(_BYTE *)(v3 + 1);
  if ( v5 <= 6 )
  {
    switch ( v5 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 6u:
        ApplyColors_UnshadowedFont(v9, v4, *(_BYTE *)(v3 + 3), *(_BYTE *)(v3 + 4));
        ApplyColors_UnshadowedFont(v10, v4 + 32, *(_BYTE *)(v3 + 3), *(_BYTE *)(v3 + 4));
        break;
      case 3u:
      case 4u:
      case 5u:
        v6 = *(_BYTE *)(v3 + 4);
        ApplyColors_ShadowedFont(v9, v4, *(_BYTE *)(v3 + 3), *(_BYTE *)(v3 + 5));
        v7 = *(_BYTE *)(v3 + 4);
        ApplyColors_ShadowedFont(v10, v4 + 32, *(_BYTE *)(v3 + 3), *(_BYTE *)(v3 + 5));
        break;
      default:
        return v11;
    }
  }
  return v11;
}
