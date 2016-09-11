signed int __fastcall sub_805D4A8(int a1, int a2)
{
  __int16 v2; // r2@1
  signed int result; // r0@2

  v2 = *(_WORD *)(a2 + 50) + 1;
  *(_WORD *)(a2 + 50) = v2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xDF | 32 * ((v2 & 2u) << 16 >> 17);
  *(_BYTE *)(a2 + 44) |= 0x40u;
  if ( (signed int)*(_WORD *)(a2 + 50) > 64 )
  {
    *(_WORD *)(a2 + 48) = 0;
    *(_WORD *)(a2 + 60) &= 0xFFFDu;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
