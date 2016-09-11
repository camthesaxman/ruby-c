int sub_81477B4()
{
  int *v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_814782C, 9)];
  *((_WORD *)v0 + 5) = 0;
  *((_WORD *)v0 + 6) = 0;
  *((_WORD *)v0 + 8) = 2;
  *((_WORD *)v0 + 9) = 5;
  *((_WORD *)v0 + 10) = 50;
  SetCameraPanningCallback(0);
  return v2;
}
