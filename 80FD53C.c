unsigned int __fastcall sub_80FD53C(_WORD *a1)
{
  return (((~((unsigned int)*a1 << 16 >> 26) & 0x1F) << 10) | 32 * (~((unsigned int)*a1 << 16 >> 21) & 0x1F) | (31 - (*a1 & 0x1F))) & 0xFFFF;
}
