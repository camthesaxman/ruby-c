unsigned int __fastcall sub_809D474(int a1)
{
  return (((a1 & 0x3000000u) >> 18) | ((a1 & 0x30000u) >> 12) | ((a1 & 0x300u) >> 6) | a1 & 3) % 0x1C & 0xFFFF;
}
