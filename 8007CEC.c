int ResetBlockSend()
{
  int result; // r0@1

  result = 0;
  byte_30003F0 = 0;
  sBlockSend = 0;
  word_30003EA = 0;
  dword_30003EC = 0;
  return result;
}
