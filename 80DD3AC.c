int __fastcall sub_80DD3AC(int a1)
{
  int v1; // r5@1
  int v2; // r1@7
  int v3; // r2@7
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 52);
    v3 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 54);
    *(_WORD *)(a1 + 36) += v2 << 16 >> 24;
    *(_WORD *)(a1 + 38) += v3 << 16 >> 24;
    *(_WORD *)(a1 + 52) = (unsigned __int8)v2;
    *(_WORD *)(a1 + 54) = (unsigned __int8)v3;
    if ( *(_WORD *)(a1 + 56) )
    {
      if ( *(_WORD *)(a1 + 32) + (signed int)*(_WORD *)(a1 + 36) >= -32 )
        return v5;
    }
    else if ( *(_WORD *)(a1 + 32) + (signed int)*(_WORD *)(a1 + 36) <= 272 )
    {
      return v5;
    }
    *(_DWORD *)(a1 + 28) = move_anim_8072740;
    return v5;
  }
  if ( word_3004B06 && battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) = 304;
    word_3004B02 = -word_3004B02;
    *(_WORD *)(v1 + 56) = 1;
    *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 0x10;
  }
  else
  {
    *(_WORD *)(v1 + 32) = -64;
  }
  *(_WORD *)(v1 + 34) = word_3004B00[0];
  SetSubspriteTables(v1, (int)&gUnknown_083DAD10);
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 50) = word_3004B04;
  ++*(_WORD *)(v1 + 46);
  return v5;
}
