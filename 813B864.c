signed int SetUpCopyrightScreen()
{
  __int16 v1; // [sp+4h] [bp-14h]@8
  int v2; // [sp+8h] [bp-10h]@8

  if ( (unsigned __int8)byte_3001BAC == 140 )
  {
    GameCubeMultiBoot_Main(&unk_3005EE0);
    if ( byte_3005EE2 != 1 )
    {
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      ++byte_3001BAC;
    }
    return 1;
  }
  if ( (signed int)(unsigned __int8)byte_3001BAC <= 140 )
  {
    if ( !byte_3001BAC )
    {
      SetVBlankCallback(0);
      v4000050 = 0;
      v4000052 = 0;
      v4000054 = 0;
      v5000000 = 0x7FFF;
      v4000000 = 0;
      v4000010 = 0;
      v4000012 = 0;
      v2 = 0;
      v1 = 0;
      v40000D4 = &v1;
      v40000D8 = 83886082;
      v40000DC = -2130705921;
      ResetPaletteFade();
      sub_813B808(0, 0x3800u, 0);
      remove_some_task();
      ResetTasks();
      ResetSpriteData();
      FreeAllSpritePalettes();
      BeginNormalPaletteFade(-1, 0, 0x10u, 0, -1);
      v4000008 = 1792;
      v4000200 |= 1u;
      v4000004 |= 8u;
      SetVBlankCallback((int)sub_813B784);
      v4000000 = 320;
      SetSerialCallback((int)SerialCb_CopyrightScreen);
      GameCubeMultiBoot_Init(&unk_3005EE0);
    }
    goto _0813B962;
  }
  if ( (unsigned __int8)byte_3001BAC != 141 )
  {
_0813B962:
    UpdatePaletteFade();
    ++byte_3001BAC;
    GameCubeMultiBoot_Main(&unk_3005EE0);
    return 1;
  }
  if ( UpdatePaletteFade() << 24 )
    return 1;
  CreateTask((int)task_intro_1, 0);
  SetMainCallback2((int)CB2_813B798);
  if ( byte_3005EE2 )
  {
    GameCubeMultiBoot_ExecuteProgram(&unk_3005EE0);
  }
  else
  {
    GameCubeMultiBoot_Quit();
    SetSerialCallback((int)SerialCB);
  }
  return 0;
}
