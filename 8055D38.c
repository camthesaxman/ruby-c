int __fastcall sub_8055D38(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  _BYTE *v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (_BYTE *)(a2 + 33);
  --*(_BYTE *)(a2 + 33);
  *(_BYTE *)(a1 + 3) = 1;
  MoveCoords(*(_BYTE *)(a2 + 25), a2 + 12, a2 + 14);
  if ( !*v4 )
  {
    npc_coords_shift_still(v3);
    *(_BYTE *)(v2 + 3) = 2;
  }
  return v6;
}
