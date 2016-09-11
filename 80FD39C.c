int __fastcall sub_80FD39C(_WORD *a1)
{
  int v1; // r0@1

  v1 = (signed int)((*a1 & 0x1F) + (((unsigned int)*a1 << 16 >> 21) & 0x1F) + (((unsigned int)*a1 << 16 >> 26) & 0x1F))
     / 3;
  return (((unsigned __int16)v1 << 10) | 32 * (unsigned __int16)v1 | (unsigned __int16)v1) & 0xFFFF;
}
