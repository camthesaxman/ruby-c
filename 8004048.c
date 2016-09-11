int __fastcall ScrollWindowTextLines_TextMode0(int a1)
{
  char v1; // r4@3
  char *v2; // r3@4
  int v4; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 17) )
  {
    v1 = *(_BYTE *)(a1 + 12);
    if ( *(_BYTE *)(a1 + 12) & 2 )
    {
      *(_WORD *)(a1 + 28) = 2 * (unsigned __int8)sLineLength + 2;
      v2 = &sLineLength;
    }
    else
    {
      *(_WORD *)(a1 + 28) = 2;
      v2 = &sLineLength;
    }
    *(_BYTE *)(a1 + 12) = v1 ^ 2;
    *(_BYTE *)(a1 + 16) = 0;
    DoScroll_TextMode0(a1, (unsigned __int8)*v2);
  }
  else
  {
    *(_WORD *)(a1 + 28) = 2 * (unsigned __int8)sLineLength + 2;
    *(_BYTE *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 17) = 16;
  }
  return v4;
}
