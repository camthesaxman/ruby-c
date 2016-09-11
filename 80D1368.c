int __fastcall sub_80D1368(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 0);
  v2 = battle_side_get_owner(v202F7C8);
  v3 = 160;
  if ( v2 << 24 )
    v3 = -160;
  *(_WORD *)(v1 + 46) = 896;
  *(_WORD *)(v1 + 48) = v3;
  *(_WORD *)(v1 + 60) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80D13AC;
  return v5;
}
