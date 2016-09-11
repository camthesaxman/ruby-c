int __fastcall sub_806CFA0(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int16 v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a2;
  v3 = (3 * (v2001006 - 1) + 1) & 0xFF;
  sub_806BA34(v2001008, 3);
  sub_806BB3C(v200100A, v3);
  if ( v2 )
  {
    ++v2001008;
    v4 = v200100A - 1;
  }
  else
  {
    --v2001008;
    v4 = v200100A + 1;
  }
  v200100A = v4;
  sub_806B9A4(v2001008, 3, 0xAu);
  sub_806BA94(v200100A, v3, 0, 0xAu);
  return v6;
}
