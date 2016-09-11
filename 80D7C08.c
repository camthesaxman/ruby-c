int __fastcall sub_80D7C08(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -20;
  if ( v2 << 24 )
    v3 = 20;
  if ( (signed int)*(_WORD *)(v1 + 56) > 31 )
  {
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 54) = 0;
    *(_WORD *)(v1 + 52) = 0;
    *(_DWORD *)(v1 + 28) = sub_80D7C8C;
  }
  else
  {
    *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 46), v3) - *(_WORD *)(v1 + 52);
    *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 46), 15) - *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 46) = (*(_WORD *)(v1 + 46) + 16) & 0xFF;
    ++*(_WORD *)(v1 + 56);
  }
  return v5;
}
