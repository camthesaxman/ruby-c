int __fastcall unref_sub_806BCB8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int i; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  for ( i = 0; i < (unsigned __int8)byte_3004350; i = (i + 1) & 0xFF )
    sub_806BC3C(i, v1);
  return v4;
}
