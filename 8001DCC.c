unsigned int __fastcall DecrementAffineAnimDelayCounter(int a1, unsigned __int8 a2)
{
  if ( !(*(_BYTE *)(a1 + 44) & 0x80) )
    --sAffineAnimStates[12 * a2 + 2];
  return (unsigned int)*(_BYTE *)(a1 + 44) >> 7;
}
