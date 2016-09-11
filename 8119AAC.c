int __fastcall sub_8119AAC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 34) <= -16 )
  {
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
    *(_BYTE *)(a1 + 62) |= 4u;
    *(_BYTE *)(a1 + 44) |= 0x40u;
    m4aSongNumStop(94);
    DestroySprite(v1);
    FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * v2019074 + 3] << 26 >> 27);
    DestroySprite((int)&gSprites[68 * v2019074]);
  }
  else
  {
    --*(_WORD *)(a1 + 34);
  }
  return v3;
}
