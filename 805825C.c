signed int InstallCameraPanAheadCallback()
{
  signed int result; // r0@1

  dword_30005A0 = (int)CameraPanningCB_PanAhead;
  byte_300059C = 0;
  word_3000598 = 0;
  result = 32;
  word_300059A = 32;
  return result;
}
