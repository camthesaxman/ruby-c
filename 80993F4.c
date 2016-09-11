int __fastcall sub_80993F4(int a1)
{
  int v1; // r3@1
  __int16 v2; // r2@1
  int v3; // r0@2
  int v4; // r1@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58);
  if ( *(_WORD *)(a1 + 58) )
  {
    v3 = *(_WORD *)(a1 + 54) + *(_WORD *)(a1 + 50);
    *(_WORD *)(v1 + 50) = v3;
    v4 = *(_WORD *)(v1 + 56) + *(_WORD *)(v1 + 52);
    *(_WORD *)(v1 + 52) = v4;
    *(_WORD *)(v1 + 32) = v3 << 16 >> 19;
    *(_WORD *)(v1 + 34) = v4 << 16 >> 19;
    *(_WORD *)(v1 + 58) = v2 - 1;
  }
  else
  {
    if ( *(_WORD *)(a1 + 48) )
    {
      *(_WORD *)(a1 + 32) = 152;
      a1 = 24 * (*(_WORD *)(a1 + 48) - 1) + 16;
    }
    else
    {
      *(_WORD *)(a1 + 32) = 104;
      LOWORD(a1) = 64;
    }
    *(_WORD *)(v1 + 34) = a1;
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    *(_DWORD *)(4 * *(_WORD *)(v1 + 48) + 0x2001038) = v1;
    --v2001171;
  }
  return v6;
}
