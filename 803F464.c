unsigned int __fastcall GetNature(int a1)
{
  return GetMonData(a1, 0, 0) % 0x19u & 0xFF;
}
