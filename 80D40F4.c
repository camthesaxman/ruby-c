int __fastcall sub_80D40F4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v1 + 9) = *(_WORD *)&gSprites[68 * *((_WORD *)v1 + 19) + 34];
  *((_WORD *)v1 + 5) = (unsigned __int8)sub_80D4394();
  sub_8078E70(*((_BYTE *)v1 + 38), 0);
  *v1 = (int)sub_80D4150;
  return v3;
}
