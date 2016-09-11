int __fastcall sub_80D0344(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 52) )
  {
    *(_WORD *)(a1 + 36) = -*(_WORD *)(a1 + 36);
    *(_WORD *)(a1 + 38) = -*(_WORD *)(a1 + 38);
  }
  *(_WORD *)(a1 + 52) ^= 1u;
  v2 = *(_WORD *)(a1 + 54) + 1;
  *(_WORD *)(v1 + 54) = v2;
  if ( v2 == 51 )
  {
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 54) = 0;
    *(_WORD *)(v1 + 52) = 0;
    *(_BYTE *)(v1 + 44) &= 0xBFu;
    StartSpriteAnim(v1, *(_WORD *)(v1 + 56) ^ 1);
    *(_DWORD *)(v1 + 28) = sub_80D03A8;
  }
  return v4;
}
