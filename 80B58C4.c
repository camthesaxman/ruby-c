signed int __fastcall sub_80B58C4(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int16 v3; // r7@1
  int v4; // r6@1
  int v5; // r5@1
  int *v6; // r4@2
  int v7; // r0@2
  signed int result; // r0@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (unsigned __int8)FindTaskIdByFunc((int)task_picbox) == 255 )
  {
    MenuDrawTextWindow(v4, v5);
    v6 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)task_picbox, 80)];
    *((_WORD *)v6 + 4) = 0;
    *((_WORD *)v6 + 5) = v3;
    v7 = (unsigned __int8)sub_8085AD4(
                            v3,
                            (unsigned int)((v4 << 19) + 2621440) >> 16,
                            (unsigned int)((v5 << 19) + 2621440) >> 16);
    *((_WORD *)v6 + 6) = v7;
    *((_WORD *)v6 + 7) = v4;
    *((_WORD *)v6 + 8) = v5;
    dword_2020020[17 * v7] = (int)SpriteCallbackDummy;
    gSprites[68 * v7 + 5] &= 0xF3u;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
