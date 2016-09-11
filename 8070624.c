int __fastcall dp05_pp_up(int a1, __int16 a2, int a3)
{
  int v4; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  dword_3004B20[10 * a1] = (int)TaskDummy;
  sub_806E8D0(a1, a2, a3);
  audio_play(5);
  sub_806D538(0xBu, 3);
  sub_80702E4(v201C005);
  CreateTask(sub_8070374, 5);
  word_300179E = 0;
  return v4;
}
