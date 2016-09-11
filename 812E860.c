int __fastcall sub_812E860(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 16) = 32;
  *((_WORD *)v1 + 17) = 64;
  *((_WORD *)v1 + 18) = 2048;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *((_WORD *)v1 + 19) = v2;
  sub_8078E70(v2, 0);
  *v1 = (int)sub_812E8B4;
  return v4;
}
