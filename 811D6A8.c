int __fastcall sub_811D6A8(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r3@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = ((unsigned int)v4000008 >> 2 << 14) & 0xFFFF;
  *a1 = (((unsigned int)v4000008 >> 8 << 11) & 0xFFFF) + 100663296;
  *a2 = v2 + 100663296;
  return v4;
}
