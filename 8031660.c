int __fastcall move_anim_start_t4(unsigned __int8 a1, char a2, char a3, unsigned __int8 a4)
{
  __int16 v4; // r4@1
  int *v5; // r1@1
  int v7; // [sp+4h] [bp-4h]@0

  v4 = a1;
  v202F7C8 = a2;
  v202F7C9 = a3;
  move_something(&gBattleAnims_Unknown2, a4, 0);
  v5 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_80316CC, 10)];
  *((_WORD *)v5 + 4) = v4;
  *(_BYTE *)(12 * *((_WORD *)v5 + 4) + 0x2017810) |= 0x40u;
  return v7;
}
