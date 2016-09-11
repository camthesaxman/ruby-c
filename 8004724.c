int __fastcall DrawWindowRect_DefaultPalette(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v7; // [sp+14h] [bp-4h]@0

  DrawWindowRect(a1, ((*(_BYTE *)(a1 + 6) << 28) | (unsigned int)(a2 << 16)) >> 16, a3, a4, a5, a6);
  return v7;
}
