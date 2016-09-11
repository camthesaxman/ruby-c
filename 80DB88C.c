int __fastcall sub_80DB88C(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  v4000052 = ((16 - *(_WORD *)(a1 + 52)) << 8) | *(_WORD *)(a1 + 52);
  if ( *(_WORD *)(a1 + 52) == 13 )
    *(_DWORD *)(a1 + 28) = sub_80DB8C0;
  else
    ++*(_WORD *)(a1 + 52);
  return v2;
}
