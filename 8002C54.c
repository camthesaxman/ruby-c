signed int MultistepLoadFont()
{
  signed int v0; // r5@1
  int v1; // r4@2
  int i; // r0@2

  v0 = 1;
  if ( *(_BYTE *)(*(_DWORD *)(sMultistepLoadFont_Window + 44) + 9) == 1 )
  {
    v1 = (unsigned __int16)sMultistepLoadFont_Index;
    for ( i = (unsigned __int16)sMultistepLoadFont_Index; v1 < i + 16; i = (unsigned __int16)sMultistepLoadFont_Index )
      MultistepLoadFont_LoadGlyph(
        sMultistepLoadFont_Window,
        (unsigned __int16)sMultistepLoadFont_StartOffset,
        (unsigned __int8)v1++);
    sMultistepLoadFont_Index += 16;
    if ( (unsigned __int16)sMultistepLoadFont_Index <= 0xFFu )
      v0 = 0;
  }
  return v0;
}
