int __fastcall sub_808BB80(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2024EB8 = v2024EB8 & 0xF8 | *((_BYTE *)v1 + 10) & 7;
  v2024EB9 = v2024EB9 & 0xFB | 4 * (*((_BYTE *)v1 + 12) & 1);
  v2024EB9 = v2024EB9 & 0xFD | 2 * (*((_BYTE *)v1 + 14) & 1);
  v2024EB9 = v2024EB9 & 0xFE | *((_BYTE *)v1 + 16) & 1;
  v2024EB7 = *((_WORD *)v1 + 9);
  v2024EB8 = v2024EB8 & 7 | 8 * *((_BYTE *)v1 + 20);
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  *v1 = (int)sub_808BC10;
  return v3;
}
