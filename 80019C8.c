int __fastcall ContinueAffineAnim(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@2
  _BYTE *v3; // r3@2
  int v4; // r2@5
  signed int v5; // r1@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 1) & 1 )
  {
    v2 = GetSpriteMatrixNum(a1);
    v3 = &sAffineAnimStates[12 * v2];
    if ( v3[2] )
    {
      AffineAnimDelay(v2, v1);
    }
    else if ( !(*(_BYTE *)(v1 + 44) & 0x80) )
    {
      ++v3[1];
      v4 = 3;
      v5 = *(_WORD *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(v1 + 16)));
      if ( v5 > 32764 )
        v4 = (v5 - 32765) & 0xFFFF;
      call_via_r2(v2, v1, *(void **)((char *)&sAffineAnimCmdFuncs + (v4 << 16 >> 14)));
    }
  }
  return v7;
}
