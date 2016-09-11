int __fastcall sub_810070C(int a1, int a2)
{
  unsigned int v2; // r2@1
  int v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = 0;
  v3 = *(_DWORD *)(*(_DWORD *)(v202E828 + 16) + 8);
  do
  {
    *(_WORD *)(2 * v2 + a1) = *(_WORD *)(2 * ((16 * a2 & 0xFFFFF) + v2) + v3);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0xF );
  return v5;
}
