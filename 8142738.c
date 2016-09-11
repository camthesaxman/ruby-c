int __fastcall sub_8142738(unsigned __int8 a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int *v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v4000000 = 6464;
  SetUpWindowConfig((int)&gWindowConfig_81E71B4);
  InitMenuWindow();
  v2 = sub_81437A4(v2024EAC, 120, 72, 6);
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 8) = v2;
  *((_WORD *)v3 + 7) = 120;
  *v3 = (int)sub_8142794;
  return v5;
}
