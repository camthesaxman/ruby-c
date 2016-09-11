int __fastcall EraseAtCursor(_BYTE *a1)
{
  _BYTE *v1; // r3@1
  signed int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *a1;
  if ( v2 == 1 )
  {
    call_via_r2(v1, 0, *(&sWriteGlyphTilemapFuncs + v1[1]));
    return v4;
  }
  if ( v2 <= 1 )
  {
    if ( v2 )
      return v4;
    goto LABEL_6;
  }
  if ( v2 == 2 )
LABEL_6:
    DrawGlyphTiles(v1, 0, 8);
  return v4;
}
