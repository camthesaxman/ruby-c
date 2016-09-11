int __fastcall sub_80D144C(int a1)
{
  int v1; // r4@1
  int (*v2)(); // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    StartSpriteAffineAnim(a1, 1);
    *(_WORD *)(v1 + 46) = 0;
    if ( *(_WORD *)(v1 + 60) )
    {
      *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 32) & 0x3FF;
      v2 = sub_80D154C;
    }
    else
    {
      *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16) & 0x3FF;
      v2 = sub_80D14C4;
    }
    *(_DWORD *)(v1 + 28) = v2;
  }
  return v4;
}
