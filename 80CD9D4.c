int __fastcall sub_80CD9D4(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@7
  signed __int16 v4; // r1@7
  __int16 v5; // r0@10
  __int16 v6; // r0@12
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
_080CDA2E:
    *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 54);
    obj_id_set_rotscale(*(_BYTE *)(v1 + 50), 0x100u, 256, *(_WORD *)(v1 + 56));
    sub_8078F9C(*(_BYTE *)(v1 + 50));
    v5 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v5;
    if ( v5 > 3 )
    {
      *(_WORD *)(v1 + 48) = 0;
      *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 54);
      ++*(_WORD *)(v1 + 46);
    }
    return v8;
  }
  if ( v2 <= 1 )
  {
    if ( *(_WORD *)(a1 + 46) )
      return v8;
    *(_WORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 50) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
    v3 = (unsigned __int8)battle_side_get_owner(v202F7C8);
    *(_WORD *)(v1 + 52) = v3;
    v4 = -512;
    if ( v3 )
      v4 = 512;
    *(_WORD *)(v1 + 54) = v4;
    *(_WORD *)(v1 + 56) = 0;
    sub_8078E70(*(_BYTE *)(v1 + 50), 0);
    ++*(_WORD *)(v1 + 46);
    goto _080CDA2E;
  }
  if ( v2 == 2 )
  {
    *(_WORD *)(a1 + 56) += *(_WORD *)(a1 + 54);
    obj_id_set_rotscale(*(_BYTE *)(a1 + 50), 0x100u, 256, *(_WORD *)(a1 + 56));
    sub_8078F9C(*(_BYTE *)(v1 + 50));
    v6 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v6;
    if ( v6 > 3 )
    {
      sub_8078F40(*(_BYTE *)(v1 + 50));
      move_anim_8072740(v1);
    }
  }
  return v8;
}
