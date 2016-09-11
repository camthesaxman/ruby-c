int __fastcall ClearWindowTextLines(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  signed int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *a1;
  if ( v2 == 1 )
  {
    ClearWindowTextLines_TextMode0_TextMode1(v1, (unsigned __int8)sLineLength);
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
      ClearWindowTextLines_TextMode2(v1, (unsigned __int8)sLineLength);
  }
  else if ( !v2 )
  {
    ClearWindowTextLines_TextMode0_TextMode1(v1, (unsigned __int8)sLineLength);
    *((_WORD *)v1 + 14) = 2;
  }
  return v4;
}
