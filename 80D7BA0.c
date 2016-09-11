int __fastcall sub_80D7BA0(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 36);
  *(_WORD *)(v1 + 34) += *(_WORD *)(a1 + 38);
  *(_WORD *)(a1 + 38) = 0;
  *(_WORD *)(a1 + 36) = 0;
  *(_WORD *)(a1 + 46) = 128;
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -20;
  if ( v2 << 24 )
    v3 = 20;
  *(_WORD *)(v1 + 52) = sine(*(_WORD *)(v1 + 46), v3);
  *(_WORD *)(v1 + 54) = cosine(*(_WORD *)(v1 + 46), 15);
  *(_WORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 28) = sub_80D7C08;
  call_via_r1(v1, sub_80D7C08);
  return v5;
}
