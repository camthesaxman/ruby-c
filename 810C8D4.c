int __fastcall sub_810C8D4(int a1)
{
  int v1; // r4@1
  int v2; // r5@3
  __int16 v3; // r0@7
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) > 1 )
    *(_WORD *)(a1 + 46) = 0;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    if ( v2 == 1 )
    {
      v3 = *(_WORD *)(a1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v3;
      if ( v3 > 11 )
      {
        *(_BYTE *)(v1 + 1) &= 0xFCu;
        *(_WORD *)(v1 + 46) = 0;
        *(_WORD *)(v1 + 48) = 0;
        FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
        *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xFC | 1;
    *(_DWORD *)(a1 + 16) = &gUnknown_083F7F70;
    InitSpriteAffineAnim(a1);
    *(_WORD *)(v1 + 46) = 1;
    *(_WORD *)(v1 + 48) = v2;
  }
  return v5;
}
