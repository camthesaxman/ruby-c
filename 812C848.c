int __fastcall sub_812C848(int a1)
{
  int v1; // r4@1
  int v2; // r0@4
  __int16 v3; // r0@9
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    sub_8078650(a1);
    sub_807867C(v1, word_3004B00[0]);
    if ( sub_8076BE0() << 24 )
    {
      v2 = -word_3004B04;
    }
    else
    {
      if ( battle_side_get_owner(v202F7C8) << 24 )
      {
        *(_WORD *)(v1 + 48) = -word_3004B04;
        v2 = -word_3004B06;
_0812C8A6:
        *(_WORD *)(v1 + 50) = v2;
        goto _0812C8A8;
      }
      LOWORD(v2) = word_3004B04;
    }
    *(_WORD *)(v1 + 48) = v2;
    LOWORD(v2) = word_3004B06;
    goto _0812C8A6;
  }
_0812C8A8:
  v3 = 20 * ++*(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 52) += *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 54) += *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 52) / 2;
  *(_WORD *)(v1 + 38) = sine((unsigned __int8)v3, 5) + *(_WORD *)(v1 + 54) / 2;
  if ( ((*(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32)) & 0xFFFFu) > 0xF0 )
    move_anim_8072740(v1);
  return v5;
}
