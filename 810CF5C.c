int __fastcall sub_810CF5C(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v4000052 = 4112;
  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 6);
  if ( v2 > 7 )
  {
    LoadPalette((int)&gCaveTransitionPalette_White, 0, 32);
    *v1 = (int)sub_810CFC4;
    *((_WORD *)v1 + 6) = 8;
  }
  else
  {
    *((_WORD *)v1 + 6) = v2 + 1;
    LoadPalette((int)&gUnknown_083F809C + 2 * v2, 224, (16 - 2 * v2) & 0xFFFF);
  }
  return v4;
}
