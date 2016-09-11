int __fastcall sub_80A9684(int a1, unsigned int i)
{
  int v2; // r4@1
  unsigned int v3; // r2@1
  int v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v2 = a1;
  v3 = 0;
  for ( i = (unsigned __int8)i; v3 < i; v3 = (v3 + 1) & 0xFFFF )
  {
    v4 = 4 * v3 + v2;
    *(_WORD *)v4 = 0;
    *(_WORD *)(v4 + 2) = 0;
  }
  return v6;
}
