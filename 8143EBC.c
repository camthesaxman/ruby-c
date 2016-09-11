int __fastcall sub_8143EBC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 16) )
  {
    --*((_WORD *)v1 + 16);
  }
  else
  {
    BeginNormalPaletteFade(-1, 12, 0, 0x10u, *((_WORD *)v1 + 16));
    *v1 = (int)sub_8143F04;
  }
  return v3;
}
