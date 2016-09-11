int __fastcall sub_805A20C(int a1)
{
  __int16 v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  script_env_2_enable(a1);
  v2 = sav1_reset_battle_music_maybe();
  sub_8053F84(v2);
  v202E858 = v202E858 & 0xF7 | 1;
  v202E85E = 1;
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask(taskFF_0805D1D4, 255) + 2]) = v1;
  call_via_r5();
  return v4;
}
