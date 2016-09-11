int __fastcall sub_80704F0(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int *v3; // r0@2
  int (*v4)(); // r1@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_8072DEC(v1);
  MenuZeroFillWindowRect(19, 10, 29, 19);
  if ( byte_3001BAD & 2 )
  {
    v3 = &dword_3004B20[10 * v201C004];
    v4 = sub_8095118;
  }
  else
  {
    v3 = &dword_3004B20[10 * v201C004];
    v4 = sub_808B0C0;
  }
  *v3 = (int)v4;
  sub_806D538(3u, 0);
  DestroyTask(v2);
  return v6;
}
