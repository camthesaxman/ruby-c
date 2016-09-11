int __fastcall sub_80F3E9C(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v3; // r1@5
  void *v4; // r0@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  if ( *(_WORD *)(a1 + 48) )
  {
    *(_WORD *)(a1 + 48) = v2 - 1;
    if ( (v2 - 1) << 16 )
      return v6;
    SeekSpriteAnim(a1, 0);
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  }
  sub_80F3E24(v1);
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    v3 = *(_WORD *)(v1 + 52);
    if ( v3 == *(_WORD *)(v1 + 50) )
    {
      if ( v3 == 9 )
      {
        sub_80F3FAC();
        v4 = sub_80F3E04;
      }
      else
      {
        v4 = sub_80F3DDC;
      }
    }
    else
    {
      v4 = SpriteCallbackDummy;
    }
    *(_DWORD *)(v1 + 28) = v4;
  }
  return v6;
}
