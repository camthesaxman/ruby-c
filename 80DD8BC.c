signed int sub_80DD8BC()
{
  signed int v0; // r1@1

  v0 = (((unsigned __int64)*(_BYTE *)(v202F7B4 + 17) >> 4) - (*(_BYTE *)(v202F7B4 + 17) & 0xF)) & 0xFF;
  if ( (((((unsigned __int64)*(_BYTE *)(v202F7B4 + 17) >> 4) - (*(_BYTE *)(v202F7B4 + 17) & 0xF)) << 24) - 0x1000000) >> 24 > 4 )
    v0 = 1;
  return v0;
}
