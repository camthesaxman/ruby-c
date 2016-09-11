int __fastcall AddToCursorX(int a1, char a2)
{
  int v2; // r3@2
  int v4; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)a1 )
  {
    *(_BYTE *)(a1 + 16) += a2;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 16);
    *(_BYTE *)(a1 + 16) = a2 + v2;
    if ( ((*(_BYTE *)(a1 + 18) + *(_BYTE *)(a1 + 16)) & 0xF8) != ((*(_BYTE *)(a1 + 18) + v2) & 0xF8) )
      *(_WORD *)(a1 + 28) += 2;
  }
  return v4;
}
