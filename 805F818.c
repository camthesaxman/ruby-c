signed int __fastcall oac_hopping(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r6@1
  unsigned __int8 v8; // r0@1
  unsigned __int8 v9; // r0@3
  unsigned __int8 v10; // r0@4
  __int16 v12; // [sp+4h] [bp-1Ch]@1
  __int16 v13; // [sp+6h] [bp-1Ah]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = state_to_direction(gUnknown_0836DC09[*(_BYTE *)(a1 + 6)], *(_BYTE *)(a1 + 33), a3);
  v12 = *(_WORD *)(v4 + 16);
  v13 = *(_WORD *)(v4 + 18);
  sub_8060320(v7);
  v8 = GetJumpLedgeAnimId(v7);
  FieldObjectSetRegularAnim(v4, v5, v8);
  if ( npc_block_way(v4, v12, v13, v7) << 24
    || v6 && (v9 = MapGridGetMetatileBehaviorAt(v12, v13), !(call_via_r8(v9) << 24)) )
  {
    v10 = GetFaceDirectionAnimId(v7);
    FieldObjectSetRegularAnim(v4, v5, v10);
  }
  *(_BYTE *)v4 |= 2u;
  *(_WORD *)(v5 + 48) = 2;
  return 1;
}
