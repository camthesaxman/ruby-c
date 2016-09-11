int __fastcall sub_810028C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  fade_screen(1, 0);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 6) = 0;
  *v2 = (int)c1_overworld_prev_quest;
  return v4;
}
