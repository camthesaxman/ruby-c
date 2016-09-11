int __fastcall sub_80D0488(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v1 + 4) = v2;
  sub_8078E70(v2, 0);
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = 256;
  *((_WORD *)v1 + 9) = 0;
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 11) = (unsigned __int8)sub_8079E90(v202F7C8);
  *v1 = (int)sub_80D04E0;
  return v4;
}
