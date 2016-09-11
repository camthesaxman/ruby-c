int __fastcall sub_81413DC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v2 + 6) > 16 )
  {
    if ( !(v202F38F & 0x80) )
    {
      BeginNormalPaletteFade(
        LOWORD(dword_3004B20[10 * a1 + 7]) | (HIWORD(dword_3004B20[10 * a1 + 7]) << 16),
        0,
        0x10u,
        0,
        0x7FFF);
      DestroyTask(v1);
    }
  }
  else
  {
    BlendPalette(
      (unsigned int)((HIWORD(dword_3004B20[10 * a1 + 3]) << 20) + 0x1000000) >> 16,
      0x10u,
      dword_3004B20[10 * a1 + 2],
      gUnknown_0840B4D4[HIWORD(dword_3004B20[10 * a1 + 9]) & 0xFF]);
    *((_WORD *)v2 + 4) += *((_WORD *)v2 + 5);
    ++*((_WORD *)v2 + 6);
  }
  return v4;
}
