int __fastcall sub_80D18D4(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 4;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 8) = 0;
  *((_WORD *)v1 + 9) = 0;
  *((_WORD *)v1 + 10) = 0;
  *((_WORD *)v1 + 11) = 0;
  *((_WORD *)v1 + 12) = 0;
  *((_WORD *)v1 + 17) = 0;
  *((_WORD *)v1 + 18) = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  *((_WORD *)v1 + 19) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
  *v1 = (int)sub_80D1930;
  return v3;
}
