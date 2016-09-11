int __fastcall sub_81435DC(int a1)
{
  signed int v1; // r1@2
  signed int v2; // r1@6
  int v4; // [sp+4h] [bp-4h]@0

  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 48) )
  {
    *(_WORD *)(a1 + 46) = 1;
    *(_DWORD *)(a1 + 28) = nullsub_81;
  }
  else
  {
    v1 = *(_WORD *)(a1 + 48);
    if ( *(_WORD *)(a1 + 32) < v1 )
      *(_WORD *)(a1 + 32) += 15;
    if ( *(_WORD *)(a1 + 32) > v1 )
      *(_WORD *)(a1 + 32) -= 15;
    v2 = *(_WORD *)(a1 + 50);
    if ( *(_WORD *)(a1 + 34) < v2 )
      *(_WORD *)(a1 + 34) += 10;
    if ( *(_WORD *)(a1 + 34) > v2 )
      *(_WORD *)(a1 + 34) -= 10;
  }
  return v4;
}
