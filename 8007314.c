int InitLink()
{
  __int16 *v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &word_3002F9E;
  do
  {
    *v0 = -4097;
    --v0;
  }
  while ( (signed int)v0 >= (signed int)&gSendCmd );
  gLinkOpen = 1;
  EnableSerial();
  return v2;
}
