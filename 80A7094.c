int __fastcall sub_80A7094(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 12) = (unsigned int)sub_802E424 >> 16;
  *((_WORD *)v1 + 13) = (unsigned int)sub_802E424;
  *v1 = (int)sub_80A5B00;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  return v3;
}
