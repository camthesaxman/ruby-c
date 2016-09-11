int __fastcall sub_8102CCC(unsigned __int8 a1, __int16 a2)
{
  int v2; // r6@1
  __int16 v3; // r4@1
  signed __int16 *v4; // r5@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = (signed __int16 *)(2 * a1 + 33554460);
  LOWORD(result) = *(_WORD *)(2 * a1 + 0x200001C) % 24;
  if ( (_WORD)result )
  {
    if ( (signed __int16)result < a2 )
      v3 = result;
    sub_8102C84(v2, v3);
    result = *v4 % 24 & 0xFFFF;
  }
  return (signed __int16)result;
}
