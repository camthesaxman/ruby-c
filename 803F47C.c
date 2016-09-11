unsigned int __fastcall GetNatureFromPersonality(unsigned int a1)
{
  return a1 % 0x19 & 0xFF;
}
