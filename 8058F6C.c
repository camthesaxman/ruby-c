signed int __fastcall sub_8058F6C(__int16 a1, __int16 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r6@2
  int *v5; // r4@3
  unsigned __int8 v6; // r0@5
  signed int result; // r0@6
  __int16 v8; // [sp+0h] [bp-18h]@1
  __int16 v9; // [sp+2h] [bp-16h]@1

  v8 = a1;
  v9 = a2;
  v3 = a3;
  if ( !(FlagGet(2089) << 24)
    || (v4 = GetFieldObjectIdByXY(v8, v9) & 0xFF, v4 == 16)
    || (v5 = &dword_30048A0[9 * v4], *((_BYTE *)v5 + 5) != 87)
    || (v8 = *((_WORD *)v5 + 8),
        v9 = *((_WORD *)v5 + 9),
        MoveCoords(v3, &v8, &v9),
        npc_block_way(&dword_30048A0[9 * v4], v8, v9, v3) << 24)
    || (v6 = MapGridGetMetatileBehaviorAt(v8, v9), sub_8056F08(v6) << 24) )
  {
    result = 0;
  }
  else
  {
    task_add_bump_boulder(v4, v3);
    result = 1;
  }
  return result;
}
