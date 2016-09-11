int __fastcall sub_8140A08(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 48) )
    --*(_WORD *)(a1 + 48);
  else
    *(_DWORD *)(a1 + 28) = sub_8140A28;
  return v2;
}
