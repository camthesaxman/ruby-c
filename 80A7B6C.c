int __fastcall sub_80A7B6C(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // r0@2
  void **v4; // r0@6
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60);
  if ( *(_WORD *)(a1 + 60) )
  {
    v3 = *(_WORD *)(a1 + 52);
    if ( *(_WORD *)(v1 + 52) )
    {
      if ( v3 == 1 )
      {
        ++*(_WORD *)(v1 + 46);
        sub_80A7B48(v1);
        if ( *(_WORD *)(v1 + 46) == 32 )
        {
          *(_WORD *)(v1 + 46) = 0;
          *(_WORD *)(v1 + 52) = 0;
          *(_BYTE *)(v1 + 40) = *(_WORD *)(v1 + 56);
          *(_BYTE *)(v1 + 41) = *(_WORD *)(v1 + 58);
          FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
          *(_BYTE *)(v1 + 1) &= 0xFCu;
          *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
        }
      }
    }
    else
    {
      *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xFC | 1;
      if ( v2 == 1 )
        v4 = &gSpriteAffineAnimTable_83C1D20;
      else
        v4 = &off_83C1D24;
      *(_DWORD *)(v1 + 16) = v4;
      InitSpriteAffineAnim(v1);
      *(_WORD *)(v1 + 52) = 1;
      *(_WORD *)(v1 + 56) = *(_BYTE *)(v1 + 40);
      *(_WORD *)(v1 + 58) = *(_BYTE *)(v1 + 41);
      sub_80A7B48(v1);
    }
  }
  return v6;
}
