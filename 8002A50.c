int __fastcall InitWindowTileData(int a1, unsigned __int16 a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  unsigned __int16 v7; // r0@3
  unsigned int v8; // r0@4

  v2 = a1;
  v3 = a2;
  *(_WORD *)(a1 + 26) = a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 44);
  v6 = *(_BYTE *)(v5 + 9);
  if ( v6 == 1 )
  {
    v8 = *(_BYTE *)(v5 + 8);
    if ( v8 <= 6 )
    {
      switch ( v8 )
      {
        case 0u:
        case 3u:
          v7 = LoadFixedWidthFont(v2, v3);
          goto LABEL_10;
        case 1u:
        case 2u:
          v7 = LoadFixedWidthFont_Font1Latin(v2, v3);
          goto LABEL_10;
        case 4u:
        case 5u:
          v7 = LoadFixedWidthFont_Font4Latin(v2, v3);
          goto LABEL_10;
        case 6u:
          v7 = LoadFixedWidthFont_Braille(v2, v3);
          goto LABEL_10;
        default:
          return v4;
      }
    }
  }
  else if ( v6 == 2 )
  {
    v7 = InitVariableWidthFontTileData(v2, v3);
LABEL_10:
    v4 = v7;
  }
  return v4;
}
