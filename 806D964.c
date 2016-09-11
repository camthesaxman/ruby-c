int __fastcall unref_sub_806D964(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int i; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  for ( i = 0; i < (unsigned __int8)byte_3004350; i = (i + 1) & 0xFF )
    sub_806D90C(v1, i, (int)&dword_3004360[25 * i]);
  return v4;
}
