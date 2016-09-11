int __fastcall move_anim_start_t2(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a1;
  v202F7C8 = a1;
  v202F7C9 = a1;
  move_something((int)&gBattleAnims_StatusConditions, a2, 0);
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_807BDAC, 10) + 2]) = v2;
  return v4;
}
