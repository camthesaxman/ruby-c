int __fastcall ScrollWindowTextLines(_BYTE *a1)
{
  signed int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *a1;
  if ( v1 == 1 )
  {
    ScrollWindowTextLines_TextMode1();
  }
  else if ( v1 > 1 )
  {
    if ( v1 == 2 )
      ScrollWindowTextLines_TextMode2();
  }
  else if ( !*a1 )
  {
    ScrollWindowTextLines_TextMode0();
  }
  return v3;
}
