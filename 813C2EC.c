int __fastcall task_intro_11(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  __int16 v3; // r0@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) += 1024;
  if ( (signed int)*((_WORD *)v2 + 5) > 1727 )
  {
    *v2 = (int)sub_813C384;
  }
  else
  {
    v3 = *((_WORD *)v2 + 6);
    *((_WORD *)v2 + 5) += v3;
    *((_WORD *)v2 + 6) = v3 + 1;
  }
  sub_813CE30(120, 80, 0x10000 / SHIWORD(dword_3004B20[10 * v1 + 2]) & 0xFFFF, LOWORD(dword_3004B20[10 * v1 + 2]));
  if ( dword_3005ED0 == 44 )
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, -1);
  return v5;
}
