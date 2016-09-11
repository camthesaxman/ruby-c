int __fastcall sub_8070088(unsigned __int8 a1)
{
  int *v1; // r7@1
  int v2; // r5@2
  _BYTE *v3; // r6@2
  int v4; // r2@2
  int v5; // r0@5
  unsigned __int8 v6; // r0@5
  int v8; // [sp+20h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *v1 = (int)TaskDummy;
  if ( GetMonData((int)&dword_3004360[25 * v201C005], 11, 100 * v201C005) )
  {
    v2 = (unsigned __int8)CreateTask(TaskDummy, 5);
    v3 = &byte_3004B28[40 * v2];
    v201C000 = &dword_3004360[25 * v201C005];
    *((_WORD *)v3 + 10) = GetMonData(v201C000, 58, 40 * v2);
    *((_WORD *)v3 + 11) = GetMonData(v201C000, 57, v4);
    if ( !(ExecuteTableBasedItemEffect__(v201C005, v201C006, 0) << 24) )
    {
      v202E8F4 = 1;
      MenuZeroFillWindowRect(3, 14, 26, 19);
      audio_play(1);
      v5 = sub_806FBB4(v201C000, v201C005);
      v6 = battle_type_is_double(v5);
      task_pc_turn_off(&gUnknown_083769A8[12 * v6] + 2 * v201C005, 9u);
      v201B261 = 2;
      *((_WORD *)v3 + 12) = GetMonData(v201C000, 57, -3487) - *((_WORD *)v3 + 11);
      *((_WORD *)v3 + 14) = 1;
      v201B27E = 1;
      v201B280 = 1;
      v201B282 = *((_WORD *)v3 + 11);
      v201C00C = -32768;
      dword_3004B20[10 * v2] = (int)sub_806F8AC;
      return v8;
    }
    DestroyTask(v2);
  }
  *v1 = (int)sub_80701DC;
  return v8;
}
