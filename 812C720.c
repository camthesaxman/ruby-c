int __fastcall sub_812C720(int a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-10h]@1
  __int16 v4; // [sp+2h] [bp-Eh]@1
  int v5; // [sp+Ch] [bp-4h]@3

  v1 = a1;
  sub_80787B0(a1, 1);
  sub_807A3FC(v202F7C9, 0, &v3, &v4);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = word_3004B04 + v3;
  *(_WORD *)(v1 + 54) = word_3004B06 + v4;
  *(_WORD *)(v1 + 56) = -50;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_812C798;
  return v5;
}
