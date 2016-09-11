int __fastcall sub_80A7A94(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v3;
      if ( v3 == 12 )
        sub_80A7AE4(v1);
    }
  }
  else
  {
    *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
    *(_DWORD *)(v1 + 16) = &gSpriteAffineAnimTable_83C1CC4;
    InitSpriteAffineAnim(v1);
    *(_WORD *)(v1 + 54) = 1;
  }
  return v5;
}
