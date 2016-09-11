int __fastcall UpdateBGRegs(int a1)
{
  int v1; // r2@1
  _WORD *v2; // r3@1
  int result; // r0@1

  v1 = 4 * *(_BYTE *)a1;
  **(_WORD **)((char *)&gBGHOffsetRegs + v1) = 0;
  **(_WORD **)((char *)&gBGVOffsetRegs + v1) = 0;
  v2 = *(_WORD **)((char *)&gBGControlRegs + v1);
  LOWORD(v1) = _byteswap_ushort(*(_WORD *)(a1 + 2));
  result = 4 * *(_BYTE *)(a1 + 1);
  *v2 = v1 | result;
  return result;
}
