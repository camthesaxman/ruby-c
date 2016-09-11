int sub_800826C()
{
  unsigned int i; // r4@1
  int v2; // [sp+14h] [bp-4h]@0

  for ( i = 0; i < (unsigned __int8)gSavedLinkPlayerCount; i = (i + 1) & 0xFF )
  {
    if ( dword_3002FD4[7 * i] != dword_3002974[7 * i]
      || StringCompareWithoutExtCtrlCodes((int)&unk_3002FD8 + 28 * i, (int)&unk_3002978 + 28 * i) )
    {
      gLinkErrorOccurred = 1;
      CloseLink();
      SetMainCallback2((int)CB2_LinkError);
    }
  }
  return v2;
}
