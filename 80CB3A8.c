int __fastcall sub_80CB3A8(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r6@1
  int *v3; // r4@1
  int v4; // r1@1
  char *v5; // r5@1
  __int16 v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move(1);
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 4) + *((_WORD *)v3 + 14);
  *((_WORD *)v3 + 14) = v4;
  v5 = &gSprites[68 * v2];
  *((_WORD *)v5 + 18) = v4 << 16 >> 24;
  if ( battle_side_get_owner(v202F7C9) << 24 )
    *((_WORD *)v5 + 18) = -*((_WORD *)v5 + 18);
  *((_WORD *)v3 + 15) += 16;
  obj_id_set_rotscale(v2, *((_WORD *)v3 + 15), *((_WORD *)v3 + 15), 0);
  sub_8079A64(v2);
  v6 = *((_WORD *)v3 + 5) - 1;
  *((_WORD *)v3 + 5) = v6;
  if ( !v6 )
  {
    *((_WORD *)v3 + 4) = 0;
    *v3 = (int)sub_80CB438;
  }
  return v8;
}
