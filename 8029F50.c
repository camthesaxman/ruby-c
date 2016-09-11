int atkCC_callterrainattack()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024C6C &= 0xFFFFFBFF;
  v2024BE6 = gNaturePowerMoves[(unsigned __int8)byte_300428C];
  v2024C08 = sub_801B5C0(v2024BE6, 0);
  b_movescr_stack_push((int)*(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]));
  ++v2024C10;
  return v1;
}
