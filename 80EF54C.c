int __fastcall sub_80EF54C(unsigned __int8 a1)
{
  signed __int16 v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( a1 == 2 )
    v1 = 1;
  v200CE4C = 30 * v1;
  LoadPalette(2 * (unsigned __int16)(30 * v1) + 33607250, 49, 4);
  return v3;
}
