int __fastcall sub_80CE3EC(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned __int16 v2; // r0@1
  int v3; // r8@1
  int *v4; // r6@1
  signed int v5; // r10@1
  int v6; // r10@1
  char v7; // r0@1
  int v9; // [sp+28h] [bp-4h]@0

  v1 = a1;
  v2 = sub_80791A8(1, 0, 0, 0, 0, 0, 0);
  v3 = v2;
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = 0;
  *((_WORD *)v4 + 5) = 0;
  *((_WORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 7) = v2;
  *((_WORD *)v4 + 8) = 0;
  *((_WORD *)v4 + 9) = 0;
  *((_WORD *)v4 + 10) = 0;
  *((_WORD *)v4 + 11) = 13;
  *((_WORD *)v4 + 12) = 14;
  *((_WORD *)v4 + 13) = 15;
  v5 = sub_80792C0(1u, 1u, 1u, 1u);
  sub_8079BF4(&byte_3004B28[40 * v1 + 28], &byte_3004B28[40 * v1 + 30], v3 | v5);
  v6 = v5 | (0x10000 << IndexOfSpritePaletteTag(0x27D2u));
  v7 = IndexOfSpritePaletteTag(0x27D3u);
  BeginNormalPaletteFade((0x10000 << v7) | v6, 0, 0, 0x10u, 32699);
  *v4 = (int)sub_80CE4D4;
  call_via_r1(v1, sub_80CE4D4);
  return v9;
}
