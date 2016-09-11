int __fastcall sub_80DDDF0(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  int *v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v4000050 = 16192;
  v4000052 = 4096;
  v2 = obj_id_for_side_relative_to_move(0);
  v3 = v2;
  sub_8078E70(v2, 1);
  obj_id_set_rotscale(v3, 0x80u, 128, 0);
  gSprites[68 * v3 + 62] &= 0xFBu;
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = 128;
  *((_WORD *)v4 + 5) = word_3004B00[0];
  *((_WORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 7) = 16;
  *v4 = (int)sub_80DDE7C;
  return v6;
}
