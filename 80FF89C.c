int __fastcall SetUpPlacingDecorationPlayerAvatar(unsigned __int8 a1, int a2)
{
  int v2; // r2@1
  int v3; // r4@1
  int v4; // r2@1
  void (*v5)(); // r1@6
  unsigned __int8 v6; // r0@6
  unsigned __int8 v7; // r0@8
  int v9; // [sp+8h] [bp-4h]@0

  v2 = BYTE2(dword_3004B20[10 * a1 + 4]);
  v3 = *(_BYTE *)(*(_DWORD *)a2 + 18);
  v4 = (16 * v2 + gUnknown_083EC900[4 * v3 + 2] - 8 * (v2 - 1)) & 0xFF;
  if ( v3 == 2 || v3 == 8 || v3 == 9 )
    v4 = (v4 - 8) & 0xFF;
  if ( v2024EAC )
  {
    v5 = SpriteCallbackDummy;
    v6 = -62;
  }
  else
  {
    v5 = SpriteCallbackDummy;
    v6 = -63;
  }
  v7 = AddPseudoFieldObject(v6, (int)v5, v4, 72);
  v20391A9 = v7;
  gSprites[68 * v7 + 5] = gSprites[68 * v7 + 5] & 0xF3 | 4;
  DestroySprite((int)&gSprites[68 * v20391A8]);
  v20391A8 = dword_3004884;
  return v9;
}
