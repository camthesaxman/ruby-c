int __fastcall sub_80DBA4C(int a1)
{
  int v1; // r4@1
  int v2; // r6@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( *(_BYTE *)(a1 + 63) & 0x30 )
      move_anim_8074EE0(a1);
  }
  else
  {
    v2 = 0;
    if ( !word_3004B06 )
      v2 = 1;
    if ( sub_8076BE0() << 24 || !(battle_type_is_double() << 24) )
    {
      if ( word_3004B04 )
        sub_8078764(v1, v2);
      else
        sub_80787B0(v1, v2);
    }
    else if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      *(_WORD *)(v1 + 32) = word_3004B00[0] + 176;
      *(_WORD *)(v1 + 34) = word_3004B02 + 40;
    }
    else
    {
      *(_WORD *)(v1 + 32) = 72 - word_3004B00[0];
      *(_WORD *)(v1 + 34) = word_3004B02 + 80;
    }
    ++*(_WORD *)(v1 + 46);
  }
  return v4;
}
