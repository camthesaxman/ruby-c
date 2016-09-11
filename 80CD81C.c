int __fastcall sub_80CD81C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@2
  int v3; // r0@2
  signed __int16 v4; // r1@2
  __int16 v5; // r0@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    v2 = *(_BYTE *)(v202F7C8 + 0x2024BE0);
    *(_WORD *)(v1 + 52) = v2;
    sub_8078E70(v2, 0);
    v3 = (unsigned __int8)battle_side_get_owner(v202F7C8);
    *(_WORD *)(v1 + 58) = v3;
    v4 = -768;
    if ( v3 )
      v4 = 768;
    *(_WORD *)(v1 + 54) = v4;
    *(_WORD *)(v1 + 56) = 0;
  }
  *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 54);
  obj_id_set_rotscale(*(_BYTE *)(v1 + 52), 0x100u, 256, *(_WORD *)(v1 + 56));
  sub_8078F9C(*(_BYTE *)(v1 + 52));
  v5 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v5;
  if ( v5 > 3 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_80CD9B8;
  }
  return v7;
}
