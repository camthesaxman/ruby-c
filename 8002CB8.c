int __fastcall MultistepLoadFont_LoadGlyph(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r0@1
  int v5; // ST00_4@5
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  a3 = (unsigned __int8)a3;
  v4 = *(_BYTE *)(*(_DWORD *)(a1 + 44) + 8);
  if ( v4 <= 5 )
  {
    switch ( v4 )
    {
      case 0u:
      case 3u:
        LoadFixedWidthGlyph(v3, a3, *(_DWORD *)(v3 + 36) + 32 * a2 + (a3 << 6));
        break;
      case 1u:
      case 2u:
        ApplyColors_UnshadowedFont(
          (char *)&sFont1LatinGlyphs + 8 * a3,
          *(_DWORD *)(v3 + 36) + 32 * (a3 + a2),
          *(_BYTE *)(v3 + 3),
          *(_BYTE *)(v3 + 4));
        break;
      case 4u:
      case 5u:
        v5 = *(_BYTE *)(v3 + 4);
        ApplyColors_ShadowedFont(
          (char *)&gFont4LatinGlyphs + 32 * a3,
          *(_DWORD *)(v3 + 36) + 32 * (a3 + a2),
          *(_BYTE *)(v3 + 3),
          *(_BYTE *)(v3 + 5));
        break;
      default:
        return v7;
    }
  }
  return v7;
}
