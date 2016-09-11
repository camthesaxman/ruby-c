int __fastcall sub_806D098(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r6@1
  __int16 v5; // r0@2
  int v7; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = (3 * (v2001005 - 1) + 1) & 0xFF;
  v4 = (3 * (v2001006 - 1) + 1) & 0xFF;
  sub_806BB3C(v2001008, v3);
  sub_806BB3C(v200100A, v4);
  if ( v2 )
  {
    --v2001008;
    v5 = v200100A - 1;
  }
  else
  {
    ++v2001008;
    v5 = v200100A + 1;
  }
  v200100A = v5;
  sub_806BA94(v2001008, v3, 0, 0xAu);
  sub_806BA94(v200100A, v4, 0, 0xAu);
  return v7;
}
