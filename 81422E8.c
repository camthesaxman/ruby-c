int __fastcall sub_81422E8(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  SetUpWindowConfig((int)&gWindowConfig_81E7198);
  InitMenuWindow();
  dword_3004B20[10 * v1] = (int)sub_8142320;
  return v3;
}
