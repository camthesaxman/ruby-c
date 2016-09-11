int __fastcall sub_81414BC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v1 + 6) > 16 )
  {
    DestroyTask(a1);
  }
  else
  {
    BlendPalette(
      (unsigned int)((HIWORD(dword_3004B20[10 * a1 + 3]) << 20) + 0x1000000) >> 16,
      0x10u,
      dword_3004B20[10 * a1 + 2],
      gUnknown_0840B4D4[HIWORD(dword_3004B20[10 * a1 + 9]) & 0xFF]);
    *((_WORD *)v1 + 4) += *((_WORD *)v1 + 5);
    ++*((_WORD *)v1 + 6);
  }
  return v3;
}
