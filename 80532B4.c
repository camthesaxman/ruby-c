int __fastcall warp_set(int a1, char a2, char a3, char a4, char a5, char a6)
{
  int v7; // [sp+8h] [bp-4h]@0

  *(_BYTE *)a1 = a2;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)(a1 + 2) = a4;
  *(_WORD *)(a1 + 4) = a5;
  *(_WORD *)(a1 + 6) = a6;
  return v7;
}
