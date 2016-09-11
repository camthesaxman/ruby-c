int __fastcall sub_80D0AB8(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 4;
  *((_WORD *)v1 + 7) = 7;
  *((_WORD *)v1 + 8) = 3;
  v2 = *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 9) = *(_WORD *)&gSprites[68 * v2 + 32];
  *((_WORD *)v1 + 10) = *(_WORD *)&gSprites[68 * v2 + 34];
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 12) = 0;
  *((_WORD *)v1 + 13) = 2;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    *((_WORD *)v1 + 6) = -*((_WORD *)v1 + 6);
  *v1 = (int)sub_80D0B3C;
  return v4;
}
