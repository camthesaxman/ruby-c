int __fastcall sub_80B7474(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  int v5; // [sp+0h] [bp-4h]@0

  v2 = a1 << 24;
  a2 = (unsigned __int8)a2;
  v3 = v2 >> 24;
  if ( (v2 - 1258291200) >> 24 <= 4 || ((v3 + 101) & 0xFF) <= 4 )
    v3 = (v3 + 207) & 0xFF;
  *(_BYTE *)(a2 + 33554449) = v3;
  return v5;
}
