int DisplayMessageAndContinueTask()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( (unsigned int)++*(_BYTE *)(dword_3004824 + 180) > 0x78 )
  {
    DrawTextWindow(dword_3004824 + 4, 24, 14, 29);
    InitYesNoMenu(24, 14, 4);
    *(_BYTE *)(dword_3004824 + 180) = 0;
    *(_BYTE *)(dword_3004824 + 123) = 3;
  }
  return v1;
}
