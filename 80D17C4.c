int __fastcall sub_80D17C4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = 1;
  *((_WORD *)v1 + 17) = 14;
  *((_WORD *)v1 + 18) = 2;
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *v1 = (int)sub_80D1808;
  return v3;
}
