int __fastcall sub_812FFE4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = word_3004B02;
  *((_WORD *)v1 + 6) = 16
                     * ((unsigned int)(unsigned __int8)gSprites[68
                                                              * (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]))
                                                              + 5] >> 4)
                     + 256;
  *v1 = (int)sub_813003C;
  return v3;
}
