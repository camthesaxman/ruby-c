int __fastcall sub_8143FDC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 4) )
  {
    --*((_WORD *)v1 + 4);
  }
  else
  {
    BeginNormalPaletteFade(-1, 6, 0, 0x10u, *((_WORD *)v1 + 4));
    *v1 = (int)sub_8144024;
  }
  return v3;
}
