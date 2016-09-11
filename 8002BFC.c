signed int __fastcall MultistepInitWindowTileData(int a1, __int16 a2)
{
  int v2; // r2@1
  __int16 v3; // r4@1
  signed int result; // r0@1
  int v5; // r3@1
  int v6; // r1@1

  v2 = a1;
  v3 = a2;
  sMultistepLoadFont_Window = a1;
  sMultistepLoadFont_Index = 0;
  sMultistepLoadFont_StartOffset = a2;
  *(_WORD *)(a1 + 26) = a2;
  result = 0;
  v5 = *(_DWORD *)(v2 + 44);
  v6 = *(_BYTE *)(v5 + 9);
  if ( v6 == 1 )
  {
    result = 256;
    if ( !*(_BYTE *)(v5 + 8) || *(_BYTE *)(v5 + 8) == 3 )
      result = 512;
  }
  else if ( v6 == 2 )
  {
    result = (unsigned __int16)InitVariableWidthFontTileData(v2, v3);
  }
  return result;
}
