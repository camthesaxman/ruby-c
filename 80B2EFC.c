int __fastcall sub_80B2EFC(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 12) = (unsigned int)BuyMenuDrawGraphics >> 16;
  *((_WORD *)v1 + 13) = (unsigned int)BuyMenuDrawGraphics;
  *v1 = (int)sub_80B2FA0;
  fade_screen(1, 0);
  return v3;
}
