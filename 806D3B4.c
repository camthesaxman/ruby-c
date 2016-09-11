int __fastcall sub_806D3B4(unsigned __int8 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r8@1
  int *v6; // r5@1
  __int16 v7; // r1@1
  int v9; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &dword_3004B20[10 * a1];
  sub_806BA34(*((_WORD *)v6 + 4), 8);
  sub_806BB3C(*((_WORD *)v6 + 4) + 11, 9);
  sub_806BB3C(*((_WORD *)v6 + 4) + 11, 12);
  v7 = *((_WORD *)v6 + 4) - 1;
  *((_WORD *)v6 + 4) = v7;
  sub_806B9A4(v7, 8, 4u);
  if ( v4 )
    sub_806BA94(*((_WORD *)v6 + 4) + 11, 9u, 0, 4u);
  else
    sub_806BA94(*((_WORD *)v6 + 4) + 11, 9u, 1, 4u);
  if ( v5 )
    sub_806BA94(LOWORD(dword_3004B20[10 * v3 + 2]) + 11, 0xCu, 0, 4u);
  else
    sub_806BA94(LOWORD(dword_3004B20[10 * v3 + 2]) + 11, 0xCu, 1, 4u);
  return v9;
}
