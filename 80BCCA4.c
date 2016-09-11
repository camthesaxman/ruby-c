unsigned int __fastcall sub_80BCCA4(unsigned __int8 a1)
{
  return (*(_BYTE *)(160 * a1 + 0x2027145) % 5u + 5 * ((unsigned int)*(_BYTE *)(160 * a1 + 0x202713D) << 27 >> 31)) & 0xFF;
}
