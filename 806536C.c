int __fastcall sub_806536C(int a1)
{
  int v1; // r1@1
  int v2; // r3@1
  unsigned int v3; // r2@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 44) + 20) + 896;
  v2 = (*(_BYTE *)(a1 + 6) << 12) & 0xFFFF;
  v3 = 0;
  do
  {
    *(_WORD *)(2 * v3 + v1) = v2;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0xBF );
  return v5;
}
