int __fastcall sub_8122C18(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4) + 1;
  *((_WORD *)v1 + 4) = v2;
  if ( v2 << 16 == 0x1000000 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    *v1 = (int)sub_8122450;
  }
  return v4;
}
