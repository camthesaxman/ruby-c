int __fastcall GetCursorTileNum(int a1, int a2, int a3)
{
  int result; // r0@2

  if ( *(_BYTE *)a1 == 2 )
    result = (*(_WORD *)(a1 + 28)
            + *(_WORD *)(a1 + 26)
            + (((*(_WORD *)(a1 + 20) + *(_BYTE *)(a1 + 17)) >> 3) + a3) * *(_BYTE *)(a1 + 9)
            + ((*(_BYTE *)(a1 + 18) + *(_BYTE *)(a1 + 16)) >> 3)
            + a2) & 0xFFFF;
  else
    result = (*(_WORD *)(a1 + 28) + *(_WORD *)(a1 + 26) + 2 * a2 + a3) & 0xFFFF;
  return result;
}
