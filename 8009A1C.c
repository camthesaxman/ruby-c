int __fastcall Task_WaitForSaveErrorAck(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( MenuUpdateWindowText() << 24 && word_300179E & 1 )
  {
    MenuZeroFillWindowRect(2, 14, 27, 19);
    dword_3004B20[10 * v1] = (int)Task_CheckRtc;
  }
  return v3;
}
