int __fastcall sub_80D9DF0(int a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-14h]@3
  __int16 v4; // [sp+2h] [bp-12h]@3
  int v5; // [sp+10h] [bp-4h]@5

  v1 = a1;
  if ( !word_3004B06 )
    StartSpriteAnim(a1, 2);
  sub_80787B0(v1, 1);
  sub_807A3FC(v202F7C9, 1, &v3, &v4);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B08 = -word_3004B08;
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 50) = word_3004B08 + v3;
  *(_WORD *)(v1 + 54) = word_3004B0A + v4;
  *(_WORD *)(v1 + 56) = -30;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80D9E78;
  return v5;
}
