int __fastcall sub_80D5DDC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -1;
  if ( !(v2 << 24) )
    v3 = 1;
  *((_WORD *)v1 + 16) = v3;
  *((_WORD *)v1 + 17) = (unsigned __int8)b_side_obj__get_some_boolean(v202F7C9 ^ 2) + 1;
  *((_WORD *)v1 + 18) = (unsigned __int8)obj_id_for_side_relative_to_move(1);
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(3);
  *v1 = (int)sub_80D5E4C;
  return v5;
}
