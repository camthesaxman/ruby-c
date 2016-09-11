int __fastcall sub_8130D20(unsigned __int8 a1)
{
  int *v1; // r6@1
  signed int v2; // r4@3
  signed __int16 v3; // r0@5
  int v5; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  if ( sub_8076BE0() << 24 )
    goto _08130DA8;
  if ( (unsigned __int8)battle_type_is_double() != 1 )
  {
    if ( !(battle_side_get_owner(v202F7C8) << 24) )
    {
      v3 = -1;
      goto _08130DAA;
    }
_08130DA8:
    v3 = 1;
    goto _08130DAA;
  }
  v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  if ( v2 <= (unsigned __int8)sub_8077ABC(v202F7C8 ^ 2, 0) )
  {
    v3 = -1;
_08130DAA:
    *((_WORD *)v1 + 18) = v3;
    goto _08130DAC;
  }
  *((_WORD *)v1 + 18) = 1;
_08130DAC:
  *v1 = (int)sub_8130DBC;
  return v5;
}
