int __fastcall ObjectCB_SwitchPocketRotatingBallInit(int a1)
{
  int v1; // r4@1
  int (*v2)(); // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xFC | 1;
  InitSpriteAffineAnim(a1);
  if ( *(_BYTE *)(v1 + 62) & 4 )
  {
    v2 = sub_80B02A8;
  }
  else
  {
    StartSpriteAffineAnim(v1, 1);
    v2 = sub_80B0280;
  }
  *(_DWORD *)(v1 + 28) = v2;
  return v4;
}
