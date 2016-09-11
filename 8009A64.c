int __fastcall Task_CheckRtc(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v4000040 = 0;
    v4000044 = 0;
    v4000048 = 4369;
    v400004A = 49;
    v4000050 = 241;
    v4000052 = 0;
    v4000054 = 7;
    if ( RtcGetErrorStatus() & 0xFF0 )
    {
      MenuDrawTextWindow(2, 14, 27, 19);
      MenuPrintMessage(&gBatteryDryMessage, 3, 15);
      v4000040 = 4575;
      v4000044 = 29087;
      dword_3004B20[10 * v2] = (int)Task_WaitForRtcErrorAck;
    }
    else
    {
      dword_3004B20[10 * v1] = (int)Task_DrawMainMenu;
    }
  }
  return v4;
}
