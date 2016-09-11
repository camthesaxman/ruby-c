int __fastcall DrawGlyphTiles(int a1, unsigned __int16 a2, char a3)
{
  int v3; // r6@1
  char v4; // r5@1
  int v5; // r7@1
  unsigned int v6; // r0@1
  int v7; // r0@3
  char v9; // [sp+4h] [bp-2Ch]@1
  char v10; // [sp+5h] [bp-2Bh]@1
  char v11; // [sp+6h] [bp-2Ah]@1
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int *v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1
  int v16; // [sp+18h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = 0;
  GetGlyphTilePointers(*(_BYTE *)(a1 + 1), *(_BYTE *)(a1 + 2), a2, &v15, &v16);
  v9 = *(_BYTE *)v3;
  v10 = (*(_BYTE *)(v3 + 16) + *(_BYTE *)(v3 + 18)) & 7;
  v11 = v4;
  v12 = v15;
  v13 = *(_DWORD *)(v3 + 36) + (32 * GetCursorTileNum(v3, 0, 0) & 0x1FFFFF);
  v14 = &dword_30003A4;
  v6 = *(_BYTE *)(v3 + 1);
  if ( v6 <= 6 )
  {
    switch ( v6 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 6u:
        DrawGlyphTile_UnshadowedFont((int)&v9);
        v12 = v16;
        v13 = *(_DWORD *)(v3 + 36) + (32 * GetCursorTileNum(v3, 0, 1) & 0x1FFFFF);
        v7 = DrawGlyphTile_UnshadowedFont((int)&v9);
        goto LABEL_5;
      case 3u:
      case 4u:
      case 5u:
        DrawGlyphTile_ShadowedFont((int)&v9);
        v12 = v16;
        v13 = *(_DWORD *)(v3 + 36) + (32 * GetCursorTileNum(v3, 0, 1) & 0x1FFFFF);
        v7 = DrawGlyphTile_ShadowedFont((int)&v9);
LABEL_5:
        v5 = v7;
        break;
      default:
        return v5;
    }
  }
  return v5;
}
