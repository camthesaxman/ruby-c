int __fastcall sub_808A1E0(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v202E8F6 != 1 )
  {
    v2 = sub_806CA38(a1);
    sub_806DF60(v1, v2);
    sub_806D538(0, 0);
    dword_3004B20[10 * v1] = (int)sub_8089CD4;
  }
  return v4;
}
