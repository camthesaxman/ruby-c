int LinkCB_BlockSend()
{
  int v0; // r5@1
  signed int v1; // r3@1
  __int16 *v2; // r2@1
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = dword_30003EC;
  gSendCmd[0] = -30584;
  v1 = 0;
  v2 = &word_3002F92;
  do
  {
    *v2 = *(_BYTE *)(2 * v1 + (unsigned __int16)sBlockSend + v0) | (unsigned __int16)(*(_BYTE *)(2 * v1
                                                                                               + (unsigned __int16)sBlockSend
                                                                                               + v0
                                                                                               + 1) << 8);
    ++v2;
    ++v1;
  }
  while ( v1 <= 6 );
  sBlockSend += 14;
  if ( (unsigned __int16)word_30003EA <= (unsigned int)(unsigned __int16)sBlockSend )
  {
    byte_30003F0 = 0;
    gLinkCallback = (int)LinkCB_BlockSendEnd;
  }
  return v4;
}
