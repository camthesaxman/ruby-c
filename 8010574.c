int __fastcall sub_8010574(int result)
{
  *(_BYTE *)(result + 62) = *(_BYTE *)(result + 62) & 0xFB | 4 * (*(_WORD *)(result + 54) & 1);
  *(_WORD *)(result + 54) = 0;
  *(_DWORD *)(result + 28) = nullsub_37;
  return result;
}
