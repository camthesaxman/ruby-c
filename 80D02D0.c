int __fastcall sub_80D02D0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 && *(_BYTE *)(v1 + 63) & 0x10 )
  {
    SeekSpriteAnim(v1, 0);
    *(_BYTE *)(v1 + 44) |= 0x40u;
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 36) = 2;
    *(_WORD *)(v1 + 38) = -2;
    *(_WORD *)(v1 + 46) = *(_WORD *)(v1 + 58);
    *(_WORD *)(v1 + 48) ^= 1u;
    *(_WORD *)(v1 + 50) ^= 1u;
    *(_WORD *)(v1 + 54) = 0;
    *(_WORD *)(v1 + 52) = 0;
    *(_DWORD *)(v1 + 28) = sub_80D0344;
  }
  return v3;
}
