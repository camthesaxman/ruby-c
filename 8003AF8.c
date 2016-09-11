unsigned int __fastcall GetCursorTilemapPointer(int a1)
{
  int v1; // r3@1
  unsigned int result; // r0@1
  int v3; // r4@1

  v1 = a1;
  result = 0;
  v3 = *(_DWORD *)(v1 + 40);
  if ( v3 )
    result = v3
           + 2
           * ((32 * (((*(_WORD *)(v1 + 20) + (unsigned int)*(_BYTE *)(v1 + 17)) >> 3) + *(_BYTE *)(v1 + 8)) & 0x1FFF)
            + ((((*(_BYTE *)(v1 + 18) + (unsigned int)*(_BYTE *)(v1 + 16)) >> 3) + *(_BYTE *)(v1 + 7)) & 0xFF));
  return result;
}
