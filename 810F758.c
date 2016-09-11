int sub_810F758()
{
  int *v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_810F7A8, 9)];
  *((_WORD *)v0 + 4) = v202E8CE;
  *((_WORD *)v0 + 5) = 0;
  *((_WORD *)v0 + 6) = 0;
  *((_WORD *)v0 + 7) = 0;
  *((_WORD *)v0 + 8) = v202E8CC;
  *((_WORD *)v0 + 9) = 5;
  SetCameraPanningCallback(0);
  audio_play(0xD6u);
  return v2;
}
