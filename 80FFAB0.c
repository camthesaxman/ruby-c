int __fastcall sub_80FFAB0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
  *(_WORD *)&gSprites[68 * v20391A8 + 60] = 1;
  *(_WORD *)&gSprites[68 * v20391A9 + 60] = 1;
  sub_810045C();
  sub_8100038(v1);
  return v3;
}
