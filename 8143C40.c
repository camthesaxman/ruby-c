int __fastcall c2_080C9BFC(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  SetVBlankCallback(0);
  v2 = &dword_3004B20[10 * v1];
  if ( sub_8144ECC(*((_BYTE *)v2 + 22), v1) << 24 )
  {
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
    v4000200 |= 1u;
    v4000004 |= 8u;
    SetVBlankCallback((int)sub_8143948);
    *v2 = (int)sub_8143B38;
  }
  return v4;
}
