int __fastcall sub_81074F8(unsigned __int8 a1, char a2)
{
  unsigned __int8 v2; // r4@1
  char v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( !(battle_side_get_owner(a1) << 24) )
    *(_BYTE *)((battle_get_per_side_status(v2) & 1) + 0x2016A22) = v3;
  return v5;
}
