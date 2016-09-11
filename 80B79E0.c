int __fastcall sub_80B79E0(int *a1, int a2)
{
  int *v2; // r2@1
  unsigned int v3; // r0@1
  int v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a1;
  v3 = *a1;
  if ( v3 >= a2 )
    v4 = v3 - a2;
  else
    v4 = 0;
  *v2 = v4;
  return v6;
}
