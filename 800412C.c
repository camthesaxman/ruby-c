int __fastcall ScrollWindowTextLines_TextMode1(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 17) )
  {
    *(_BYTE *)(a1 + 12) ^= 2u;
    *(_BYTE *)(a1 + 16) = 0;
    DoScroll_TextMode1();
  }
  else
  {
    v10 = 0;
    *(_BYTE *)(a1 + 17) = 16;
  }
  return v2;
}
