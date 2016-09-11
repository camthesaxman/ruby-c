int __fastcall sub_80DECB0(unsigned __int8 a1)
{
  int v1; // r7@1
  signed __int16 v2; // r6@3
  int *v3; // r0@5
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000048 = 16191;
  v400004A = 16159;
  v4000050 = 200;
  v4000054 = 16;
  if ( battle_side_get_owner(v202F7C8) << 24 || sub_8076BE0() << 24 )
    v2 = 40;
  else
    v2 = 200;
  word_30042C4 = (v2 << 8) | v2;
  word_3004240 = 10280;
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 5) = v2;
  *((_WORD *)v3 + 6) = 240 - v2;
  *((_WORD *)v3 + 7) = 40;
  *((_WORD *)v3 + 8) = 72;
  *((_WORD *)v3 + 9) = v2;
  *((_WORD *)v3 + 10) = 40;
  *v3 = (int)sub_80DED60;
  return v5;
}
