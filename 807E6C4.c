int __fastcall sub_807E6C4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    --*(_WORD *)(a1 + 46);
  }
  else
  {
    sub_807E4EC(a1);
    *(_DWORD *)(v1 + 28) = sub_807E5C0;
  }
  return v3;
}
