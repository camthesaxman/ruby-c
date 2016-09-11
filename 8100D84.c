int SetUpPuttingAwayDecorationPlayerAvatar()
{
  void (*v0)(); // r1@2
  unsigned __int8 v1; // r0@2
  unsigned __int8 v2; // r0@4
  int v4; // [sp+14h] [bp-4h]@0

  player_get_direction_lower_nybble();
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  v20391A8 = *(_WORD *)&gSprites[68 * dword_3004884 + 46];
  sub_81016C8();
  LOBYTE(dword_3004884) = CreateSprite((int)&gSpriteTemplate_83ECA88, 120, 80);
  dword_3004884 = (unsigned __int8)dword_3004884;
  if ( v2024EAC )
  {
    v0 = SpriteCallbackDummy;
    v1 = -62;
  }
  else
  {
    v0 = SpriteCallbackDummy;
    v1 = -63;
  }
  v2 = AddPseudoFieldObject(v1, (int)v0, 136, 72);
  v20391A9 = v2;
  gSprites[68 * v2 + 5] = gSprites[68 * v2 + 5] & 0xF3 | 4;
  DestroySprite((int)&gSprites[68 * v20391A8]);
  v20391A8 = dword_3004884;
  gSprites[68 * (unsigned __int8)dword_3004884 + 5] = gSprites[68 * (unsigned __int8)dword_3004884 + 5] & 0xF3 | 4;
  return v4;
}
