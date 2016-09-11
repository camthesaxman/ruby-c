int __fastcall AddToCursorY(int a1, char a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( !*(_BYTE *)a1 && (*(_BYTE *)(a1 + 18) + *(_BYTE *)(a1 + 16)) & 7 )
    *(_WORD *)(a1 + 28) += 2;
  *(_BYTE *)(a1 + 17) += a2;
  return v3;
}
