int sub_80B78A8()
{
  int v1; // [sp+4h] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6F4C);
  call_via_r0(*(&gUnknown_083CE358 + v2000001));
  call_via_r0(*(&gUnknown_083CE368 + *(_BYTE *)(v2000034 + 3)));
  MenuPrint(*(_DWORD *)(v2000034 + 8), 9, 2u);
  return v1;
}
