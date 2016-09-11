int __fastcall sub_8102BF8(unsigned __int8 a1, __int16 a2)
{
  signed __int16 v2; // r6@1

  v2 = 0;
  if ( *(_WORD *)(2 * a1 + 0x200001C) % 24 << 16 )
    v2 = -1;
  return (unsigned __int8)sub_8102BA4(a1, a2 + v2);
}
