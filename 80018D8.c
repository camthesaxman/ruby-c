int __fastcall JumpToTopOfAnimLoop(int a1)
{
  _BYTE *i; // r4@2
  int v3; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 45) )
  {
    --*(_BYTE *)(a1 + 43);
    for ( i = (_BYTE *)(a1 + 43);
          *(_WORD *)(4 * *i + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)) - 4) != -3;
          *(_BYTE *)(a1 + 43) = *i - 1 )
    {
      if ( !*i )
        break;
    }
    --*i;
  }
  return v3;
}
