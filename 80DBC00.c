int __fastcall sub_80DBC00(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xFC | 1;
  *(_DWORD *)(a1 + 16) = &gUnknown_083DA888;
  *(_WORD *)(a1 + 46) = 0;
  InitSpriteAffineAnim(a1);
  *(_DWORD *)(v1 + 28) = sub_80DBC34;
  return v3;
}
