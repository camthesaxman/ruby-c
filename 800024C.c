void AgbMain()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@1
  char *i; // r0@3
  int v8; // r0@14
  int v9; // r0@14

  RegisterRamReset(255);
  v4000204 = 16404;
  v0 = InitKeys();
  v1 = InitIntrHandlers(v0);
  v2 = m4aSoundInit(v1);
  v3 = RtcInit(v2);
  v4 = CheckForFlashMemory(v3);
  v5 = InitMainCallbacks(v4);
  v6 = sound_sources_off(v5);
  SeedRngWithRtc(v6);
  gUnknown_3001BB4 = 0;
  if ( dword_3004820 != 1 )
    SetMainCallback2(0);
  gUnknown_3001764 = 0;
  for ( i = &byte_300402D; ; i = (char *)WaitForVBlank(v9) )
  {
    ReadKeys(i);
    if ( !gUnknown_3001BB4 && word_3001798 & 1 && (word_3001798 & 0xE) == 14 )
      DoSoftReset();
    if ( (unsigned __int8)byte_30033A9 <= 1u || sub_8055910() != 1 )
    {
      gUnknown_3001764 = 0;
      UpdateLinkAndCallCallbacks();
      if ( (unsigned __int8)byte_300402D > 1u && sub_80558AC() == 1 )
      {
        word_300179E = 0;
        gUnknown_3001764 = 1;
        UpdateLinkAndCallCallbacks();
        gUnknown_3001764 = 0;
      }
    }
    else
    {
      gUnknown_3001764 = 1;
      UpdateLinkAndCallCallbacks();
      gUnknown_3001764 = 0;
    }
    v8 = PlayTimeCounter_Update();
    v9 = sound_something(v8);
  }
}
