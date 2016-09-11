int __fastcall sub_80B03D8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  _WORD *v3; // r1@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = LOBYTE(dword_3004B20[10 * a1 + 2]);
  v3 = &byte_3004B28[8 * (5 * v2019211 + v2)];
  if ( !*v3 || *v3 == 255 )
  {
    *v3 = 255;
    *((_WORD *)&byte_3004B28[40 * v2019211] + 4 * v2 + 1) = 0;
    BlendPalette(16 * (*(_BYTE *)(v2 + 33657368) + 5) + 6, 2u, 0, 19455);
    DestroyTask(v1);
  }
  return v5;
}
