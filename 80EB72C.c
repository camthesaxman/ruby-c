int __fastcall sub_80EB72C(unsigned __int16 a1)
{
  int v1; // r4@1
  int v2; // r2@1

  v1 = a1;
  v2 = (unsigned __int16)Random() % (signed int)(unsigned __int8)gEasyChatGroupSizes[a1] & 0xFFFF;
  if ( !v1 || v1 == 21 || v1 == 18 || v1 == 19 )
    LOWORD(v2) = *(_WORD *)(2 * v2 + gEasyChatGroupWords[v1]);
  return ((v1 & 0x7F) << 9) | v2 & 0x1FF;
}
