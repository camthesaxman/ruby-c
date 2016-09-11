unsigned int __fastcall sub_80FE1B0(_WORD *a1)
{
  return (unsigned int)(((signed int)((*a1 & 0x1F)
                                    + (((unsigned int)*a1 << 16 >> 21) & 0x1F)
                                    + (((unsigned int)*a1 << 16 >> 26) & 0x1F))
                       / 3 << 16)
                      + 0x10000) >> 16;
}
