int __fastcall sub_80CD7CC(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 6;
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -2;
  if ( v2 << 24 )
    v3 = 2;
  *(_WORD *)(v1 + 48) = v3;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  oamt_set_x3A_32(v1, (int)sub_80CD81C);
  *(_DWORD *)(v1 + 28) = sub_8078458;
  return v5;
}
