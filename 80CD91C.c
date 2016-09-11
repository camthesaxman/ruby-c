int __fastcall sub_80CD91C(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r0@3
  __int16 v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 52) = *(_BYTE *)(v202F7C8 + 0x2024BE0);
    *(_WORD *)(a1 + 58) = (unsigned __int8)battle_side_get_owner(v202F7C8);
    if ( battle_side_get_owner(v202F7C8) << 24 )
    {
      *(_WORD *)(v1 + 54) = -1024;
      v2 = 3072;
    }
    else
    {
      *(_WORD *)(v1 + 54) = 1024;
      v2 = -3072;
    }
    *(_WORD *)(v1 + 56) = v2;
  }
  *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 54);
  obj_id_set_rotscale(*(_BYTE *)(v1 + 52), 0x100u, 256, *(_WORD *)(v1 + 56));
  sub_8078F9C(*(_BYTE *)(v1 + 52));
  v3 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v3;
  if ( v3 > 2 )
  {
    sub_8078F40(*(_BYTE *)(v1 + 52));
    *(_DWORD *)(v1 + 28) = sub_80CD9B8;
  }
  return v5;
}
