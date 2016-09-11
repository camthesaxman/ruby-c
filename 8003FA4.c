signed int __fastcall GetTextDelay(int a1)
{
  signed int result; // r0@2

  if ( PlayerCanInterruptWait(a1) << 24 )
    result = sTextSpeedDelays[v2024EB8 & 7];
  else
    result = 3;
  return result;
}
