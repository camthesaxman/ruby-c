int __fastcall sub_80B0548(int a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  *(_WORD *)&byte_3004B28[8 * (5 * v2019212 + a1)] = 255;
  *((_WORD *)&byte_3004B28[40 * v2019212] + 4 * a1 + 1) = 0;
  return v2;
}
