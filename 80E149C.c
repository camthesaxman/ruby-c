int __fastcall sub_80E149C(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r1@1
  int (*v3)(); // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( word_3004B00[0] )
    v3 = sub_80E1560;
  else
    v3 = sub_80E14DC;
  *v2 = (int)v3;
  call_via_r1(v1, *v2);
  return v5;
}
