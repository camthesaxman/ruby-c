int __fastcall sub_80D6B3C(unsigned __int8 a1)
{
  int *v1; // r5@1
  unsigned __int8 *v2; // r4@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  *((_WORD *)v1 + 18) = (unsigned __int8)sub_8077ABC(*v2, 2u);
  *((_WORD *)v1 + 19) = (unsigned __int8)sub_8077ABC(*v2, 3u);
  *((_WORD *)v1 + 10) = word_3004B02;
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 12) = 0;
  *((_WORD *)v1 + 13) = 0;
  *((_WORD *)v1 + 14) = 0;
  *((_WORD *)v1 + 15) = word_3004B06;
  *((_WORD *)v1 + 16) = 0;
  *((_WORD *)v1 + 17) = word_3004B04;
  *v1 = (int)sub_80D6BB8;
  return v4;
}
