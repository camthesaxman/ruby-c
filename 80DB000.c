int __fastcall sub_80DB000(int a1)
{
  int v1; // r5@1
  __int16 v2; // r1@9
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 )
    sub_8078764(a1, 0);
  else
    sub_80787B0(a1, 0);
  if ( !word_3004B04 && !(battle_side_get_owner(v202F7C8) << 24)
    || word_3004B04 == 1 && !(battle_side_get_owner(v202F7C9) << 24) )
  {
    *(_WORD *)(v1 + 32) += 8;
  }
  SeekSpriteAnim(v1, word_3004B08);
  *(_WORD *)(v1 + 32) -= 32;
  *(_WORD *)(v1 + 48) = 3276;
  v2 = word_3004B08;
  *(_WORD *)(v1 + 36) += 12 * word_3004B08;
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 60) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DB0A0;
  return v4;
}
