int __fastcall JumpToTopOfAffineAnimLoop(unsigned __int8 a1, int a2)
{
  _BYTE *v2; // r2@1
  _BYTE *v3; // r3@5
  int v4; // r2@5
  int v6; // [sp+10h] [bp-4h]@0

  v2 = &sAffineAnimStates[12 * a1];
  if ( v2[3] )
  {
    --v2[1];
    while ( 1 )
    {
      v3 = &sAffineAnimStates[12 * a1];
      v4 = v3[1];
      if ( *(_WORD *)(8 * v4 + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)) - 8) == 32765 || !v3[1] )
        break;
      v3[1] = v4 - 1;
    }
    --sAffineAnimStates[12 * a1 + 1];
  }
  return v6;
}
