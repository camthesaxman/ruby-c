int __fastcall sub_806F06C(unsigned __int8 a1, __int16 a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  __int16 v5; // r5@1
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  audio_play(5);
  dword_3004B20[10 * v4] = (int)TaskDummy;
  sub_806E8D0(v4, v5, v3);
  CreateTask(sub_806F0B4, 5);
  return v7;
}
