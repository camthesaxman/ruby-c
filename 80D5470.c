int __fastcall sub_80D5470(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = *(_WORD *)&gSprites[68 * *((_WORD *)v1 + 19) + 34];
  *((_WORD *)v1 + 9) = (unsigned __int8)battle_side_get_owner(v202F7C8);
  *((_WORD *)v1 + 10) = 0;
  sub_8078E70(*((_BYTE *)v1 + 38), 0);
  *v1 = (int)sub_80D54E0;
  return v3;
}
