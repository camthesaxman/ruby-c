int __fastcall ContinueAnim(int a1)
{
  int v1; // r4@1
  int v2; // r0@3
  int v3; // r2@5
  int v4; // r0@5
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 44) & 0x3F )
  {
    DecrementAnimDelayCounter(a1);
    if ( !(*(_BYTE *)(v1 + 1) & 1) )
    {
      v2 = *(_DWORD *)(4 * *(_BYTE *)(v1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(v1 + 42) + *(_DWORD *)(v1 + 8)));
      SetSpriteOamFlipBits(v1, (unsigned int)(v2 << 9) >> 31, (unsigned int)(v2 << 8) >> 31);
    }
  }
  else if ( !(*(_BYTE *)(a1 + 44) & 0x40) )
  {
    ++*(_BYTE *)(a1 + 43);
    v3 = 3;
    v4 = *(_WORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
    if ( v4 < 0 )
      v3 = (v4 + 3) & 0xFFFF;
    call_via_r1(v1, *(void **)((char *)&sAnimCmdFuncs + (v3 << 16 >> 14)));
  }
  return v6;
}
