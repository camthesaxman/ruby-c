int __fastcall sub_812D008(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *((_WORD *)v1 + 7) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *((_WORD *)v1 + 8) = 32;
  *((_WORD *)v1 + 9) = -20;
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *v1 = (int)sub_812D06C;
  return v3;
}
