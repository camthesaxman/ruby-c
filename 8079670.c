int __fastcall sub_8079670(unsigned __int8 a1)
{
  signed __int16 v1; // r5@1
  signed __int16 v2; // r3@1
  int *v3; // r1@9
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = 0;
  v2 = 0;
  if ( word_3004B04 > word_3004B00[0] )
    v2 = 1;
  if ( word_3004B04 < word_3004B00[0] )
    v2 = -1;
  if ( word_3004B06 > word_3004B02 )
    v1 = 1;
  if ( word_3004B06 < word_3004B02 )
    v1 = -1;
  v3 = &dword_3004B20[10 * a1];
  *((_WORD *)v3 + 4) = 0;
  *((_WORD *)v3 + 5) = word_3004B08;
  *((_WORD *)v3 + 6) = 0;
  *((_WORD *)v3 + 7) = word_3004B00[0];
  *((_WORD *)v3 + 8) = word_3004B02;
  *((_WORD *)v3 + 9) = v2;
  *((_WORD *)v3 + 10) = v1;
  *((_WORD *)v3 + 11) = word_3004B04;
  *((_WORD *)v3 + 12) = word_3004B06;
  v4000052 = (word_3004B02 << 8) | word_3004B00[0];
  *v3 = (int)sub_80796F8;
  return v5;
}
