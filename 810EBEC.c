int sub_810EBEC()
{
  int *v0; // r1@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_810EC34, 9)];
  *((_WORD *)v0 + 4) = 1;
  *((_WORD *)v0 + 5) = 0;
  *((_WORD *)v0 + 6) = 0;
  *((_WORD *)v0 + 7) = 0;
  *((_WORD *)v0 + 8) = 1;
  *((_WORD *)v0 + 9) = 3;
  v1 = SetCameraPanningCallback(0);
  sub_810ECFC(v1);
  audio_play(0x59u);
  return v3;
}
