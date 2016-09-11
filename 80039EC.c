int __fastcall WriteGlyphTilemap(int a1, __int16 a2, __int16 a3)
{
  int v3; // r4@1
  __int16 v4; // r5@1
  __int16 v5; // r6@1
  int v6; // r0@1
  int v7; // r1@2
  int v9; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = GetCursorTilemapPointer();
  if ( v6 )
  {
    v7 = (*(_BYTE *)(v3 + 6) << 12) & 0xFFFF;
    *(_WORD *)v6 = v4 | (*(_BYTE *)(v3 + 6) << 12);
    *(_WORD *)(v6 + 64) = v5 | v7;
  }
  return v9;
}
