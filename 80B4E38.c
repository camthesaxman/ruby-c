int __fastcall GetStageDurationByBerryType(unsigned __int8 a1)
{
  return 60 * (unsigned __int8)GetBerryInfo(a1)[20] & 0xFFFF;
}
