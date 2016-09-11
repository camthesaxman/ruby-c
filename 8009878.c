int __fastcall Task_CheckSave(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r1@11
  int v3; // r2@11
  int *v4; // r0@13
  int (*v5)(); // r1@13
  void *v6; // r0@14
  int *v7; // r4@15
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( v202F38F & 0x80 )
    return v9;
  v4000040 = 0;
  v4000044 = 0;
  v4000048 = 4369;
  v400004A = 49;
  v4000050 = 241;
  v4000052 = 0;
  v4000054 = 7;
  if ( word_3005EB8 == 2 )
  {
    MenuDrawTextWindow(2, 14, 27, 19);
    v6 = &gSaveFileDeletedMessage;
LABEL_20:
    MenuPrintMessage(v6, 3, 15);
    v4000040 = 4575;
    v4000044 = 29087;
    v4 = &dword_3004B20[10 * v1];
    *((_WORD *)v4 + 4) = 0;
    v5 = Task_WaitForSaveErrorAck;
    goto LABEL_21;
  }
  if ( (signed int)(unsigned __int16)word_3005EB8 <= 2 )
  {
    if ( word_3005EB8 && word_3005EB8 == 1 )
    {
      if ( sub_806918C() == 1 )
      {
        LOWORD(dword_3004B20[10 * v1 + 2]) = 2;
        v2 = dword_3004B20;
        v3 = 4 * v1;
      }
      else
      {
        v3 = 4 * v1;
        LOWORD(dword_3004B20[10 * v1 + 2]) = 1;
        v2 = dword_3004B20;
      }
      v4 = &v2[2 * (v3 + v1)];
      v5 = Task_CheckRtc;
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  if ( word_3005EB8 == 4 )
  {
    MenuDrawTextWindow(2, 14, 27, 19);
    v6 = &gBoardNotInstalledMessage;
    goto LABEL_20;
  }
  if ( word_3005EB8 != 255 )
  {
LABEL_18:
    v4 = &dword_3004B20[10 * a1];
    *((_WORD *)v4 + 4) = 0;
    v5 = Task_CheckRtc;
LABEL_21:
    *v4 = (int)v5;
    return v9;
  }
  MenuDrawTextWindow(2, 14, 27, 19);
  MenuPrintMessage(&gSaveFileCorruptMessage, 3, 15);
  v4000040 = 4575;
  v4000044 = 29087;
  v7 = &dword_3004B20[10 * v1];
  *((_WORD *)v7 + 4) = 1;
  *v7 = (int)Task_WaitForSaveErrorAck;
  if ( sub_806918C() == 1 )
    *((_WORD *)v7 + 4) = 2;
  else
    *((_WORD *)v7 + 4) = 1;
  return v9;
}
