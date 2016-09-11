int sub_81439D0()
{
  unsigned __int8 v0; // r0@1
  int v1; // r7@1
  int *v2; // r0@1
  int *v3; // r5@3
  int v4; // r0@3
  int v6; // [sp+1Ch] [bp-4h]@0

  sub_8144130();
  SetVBlankCallback(0);
  ResetPaletteFade();
  ResetTasks();
  v0 = CreateTask((int)sub_8143B38, 0);
  v1 = v0;
  v2 = &dword_3004B20[10 * v0];
  *((_WORD *)v2 + 8) = 0;
  *((_WORD *)v2 + 11) = 0;
  *((_WORD *)v2 + 15) = 0;
  *((_WORD *)v2 + 17) = 1;
  while ( !(sub_8144ECC(0, v1) << 24) )
    ;
  v3 = &dword_3004B20[10 * v1];
  LOWORD(dword_3004B20[10 * *((_WORD *)v3 + 5) + 2]) = 40;
  SetUpWindowConfig((int)&gWindowConfig_81E7208);
  InitMenuWindow();
  LoadPalette((int)&gUnknown_0840B7BC, 128, 64);
  CpuSet(&gUnknown_0840B7FC, 100712160, 32);
  v4000012 = -4;
  v4 = (unsigned __int8)CreateTask((int)sub_81441B8, 0);
  HIWORD(dword_3004B20[10 * v4 + 2]) = v1;
  *((_WORD *)v3 + 19) = v4;
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000200 |= 1u;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_8143948);
  m4aSongNumStart(455);
  SetMainCallback2((int)sub_814395C);
  v2039325 = 0;
  sub_81458DC();
  v201C088 = 0;
  v201C08A = 0;
  v201C08C = 0;
  v2039322 = v1;
  return v6;
}
