int __fastcall sub_80C997C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned __int8 v2; // r0@1
  unsigned __int8 v3; // r0@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  FieldObjectClearAnimIfSpecialAnimFinished(&dword_30048A0[9 * v2]);
  v3 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  FieldObjectClearAnim((int)&dword_30048A0[9 * v3]);
  v4 = GetFieldObjectIdByLocalIdAndMap(0xFFu);
  npc_sync_anim_pause_bits((int)&dword_30048A0[9 * v4]);
  PlayerTurnInPlace(v1);
  return v6;
}
