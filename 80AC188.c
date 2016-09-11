int __fastcall sub_80AC188(int a1)
{
  int v1; // r5@1
  int *v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_80AF138(a1);
  word_30042A0 = 0;
  word_3004280 = 0;
  sub_80AFFE0(0);
  v40000D4 = 33746632;
  v40000D8 = 33654276;
  v40000DC = -2080374528;
  LoadPalette(33653252, 0, 1024);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 4) = 0;
  *((_WORD *)v2 + 5) = 0;
  *v2 = (int)sub_80AC204;
  return v4;
}
