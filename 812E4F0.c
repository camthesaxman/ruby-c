int __fastcall sub_812E4F0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  signed int v3; // r1@1
  int v4; // r0@5
  int v5; // r0@7
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  v3 = *(_WORD *)(v1 + 46);
  if ( *(_WORD *)(v1 + 46) )
  {
    *(_WORD *)(v1 + 46) = v2 + 1;
    if ( v3 > 20 )
    {
      *(_WORD *)(v1 + 48) += 160;
      *(_WORD *)(v1 + 50) += 128;
      if ( battle_side_get_owner(v202F7C8) << 24 )
        v4 = -(*(_WORD *)(v1 + 48) << 16 >> 24);
      else
        v4 = *(_WORD *)(v1 + 48) << 16 >> 24;
      *(_WORD *)(v1 + 36) = v4;
      v5 = (*(_WORD *)(v1 + 50) << 16 >> 24) + *(_WORD *)(v1 + 38);
      *(_WORD *)(v1 + 38) = v5;
      if ( (signed __int16)v5 > 64 )
        move_anim_8072740(v1);
    }
  }
  else
  {
    sub_80787B0(v1, 0);
    ++*(_WORD *)(v1 + 46);
  }
  return v7;
}
