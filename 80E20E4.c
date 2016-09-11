int __fastcall sub_80E20E4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r5@1
  unsigned __int8 v4; // r6@1
  int *v5; // r4@1
  char v6; // r0@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  v5 = &dword_3004B20[10 * a1];
  v6 = IndexOfSpritePaletteTag(*((_WORD *)v5 + 4));
  BeginNormalPaletteFade(1 << (v6 + 16), *((_BYTE *)v5 + 10), v3, v4, *((_WORD *)v5 + 9));
  --*((_WORD *)v5 + 6);
  *((_WORD *)v5 + 12) ^= 1u;
  return v8;
}
