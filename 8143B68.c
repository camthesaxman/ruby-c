int __fastcall sub_8143B68(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r1@1
  int (*v3)(); // r0@2
  __int16 v4; // r2@3
  int v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 8);
  if ( *((_WORD *)v1 + 8) )
  {
    LOWORD(dword_3004B20[10 * *((_WORD *)v1 + 5) + 2]) = 30;
    *((_WORD *)v1 + 16) = 256;
    v3 = sub_8143EBC;
_08143BEE:
    *v1 = (int)v3;
    return v7;
  }
  v2039320 = 0;
  v4 = *((_WORD *)v1 + 15);
  v5 = *((_WORD *)v1 + 15);
  if ( v5 == 1 )
  {
    *((_WORD *)v1 + 17) = v4;
    *((_WORD *)v1 + 15) = v2;
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v2);
    v3 = sub_8143BFC;
    goto _08143BEE;
  }
  if ( v5 == 2 )
  {
    *((_WORD *)v1 + 17) = v4;
    *((_WORD *)v1 + 15) = v2;
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v2);
    v3 = sub_8143CC0;
    goto _08143BEE;
  }
  return v7;
}
