int __fastcall sub_813219C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v4; // r1@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 7) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -1;
  if ( !(v2 << 24) )
    v3 = 1;
  *((_WORD *)v1 + 8) = v3;
  v4 = *((_WORD *)v1 + 7);
  *((_WORD *)v1 + 10) = *(_WORD *)&gSprites[68 * v4 + 34];
  *((_WORD *)v1 + 9) = *(_WORD *)&gSprites[68 * v4 + 32];
  *((_WORD *)v1 + 13) = 0;
  *((_WORD *)v1 + 15) = 0;
  *((_WORD *)v1 + 14) = 1;
  *((_WORD *)v1 + 16) = 0;
  *v1 = (int)sub_8132214;
  return v6;
}
