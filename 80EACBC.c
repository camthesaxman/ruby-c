int __fastcall sub_80EACBC(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r0@1
  int v6; // [sp+20h] [bp-4h]@0

  v3 = a1;
  v4 = (*(_WORD *)(a2 + 6) - *(_WORD *)(a2 + 4)) & 0xFFFF;
  if ( (*(_WORD *)(a2 + 2) - *(_WORD *)a2) << 16 > 0 && (*(_WORD *)(a2 + 6) - *(_WORD *)(a2 + 4)) << 16 > 0 )
    sub_809D104(
      v3,
      *(_WORD *)a2,
      *(_WORD *)(a2 + 4),
      *(_DWORD *)(a3 + 8),
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      (*(_WORD *)(a2 + 2) - *(_WORD *)a2) & 0xFFFF,
      v4);
  return v6;
}
