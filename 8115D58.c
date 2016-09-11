int __fastcall sub_8115D58(unsigned __int8 a1)
{
  int v1; // r3@1
  char v2; // r0@1
  int *v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2019028 = 255;
  v2 = v2019019;
  if ( v2019019 != 1 )
    v2 = 0;
  v2019023 = v2;
  v2019021 = 0;
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 5) = 32;
  *v3 = (int)sub_8115ECC;
  return v5;
}
