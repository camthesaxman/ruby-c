int __fastcall sub_80312F0(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r5@1
  char *v3; // r3@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 68 * (*(_WORD *)(a1 + 48) & 0xFF);
  v3 = &gSprites[v2];
  if ( gSprites[v2 + 63] & 0x20 && !(v3[62] & 4) )
  {
    if ( v3[44] & 0x40 )
    {
      v3[44] &= 0xBFu;
    }
    else if ( gSprites[v2 + 63] & 0x10 )
    {
      dword_2020020[v2 / 4] = (int)sub_80105DC;
      StartSpriteAffineAnim((int)&gSprites[v2], 0);
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    }
  }
  return v5;
}
