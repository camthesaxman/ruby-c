int __fastcall Unused_LZDecompressWramIndirect(_DWORD *a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  LZ77UnCompWram(*a1, a2);
  return v3;
}
