int BuyMenuDrawFieldObjects()
{
  signed int v0; // r6@1
  char *v1; // r8@1
  int v2; // r4@2
  _WORD *v3; // r3@2
  char *v4; // r5@3
  int v6; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = &gUnknown_082162D4;
  do
  {
    v2 = 2 * v0;
    v3 = (_WORD *)(dword_3004854 + 154 + 2 * v0);
    if ( *v3 != 255 )
    {
      v4 = &gStringVar1;
      *(_BYTE *)(dword_3004854 + 92 + *v3) = *(_BYTE *)(dword_3004854 + 96 + v0);
      StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 92 + *(_WORD *)(dword_3004854 + 154 + v2))], v0);
      if ( (unsigned __int8)GetMultiplayerId() == *(_WORD *)(dword_3004854 + 154 + v2) )
        v4 = StringCopy(&gStringVar1, &gUnknown_082162C4);
      StringCopy(v4, (_BYTE *)&unk_3002978 + 28 * *(_WORD *)(dword_3004854 + 154 + v2));
      sub_80729D8(&gStringVar1, (8 * (unsigned __int8)*v1 + 1) & 0xFF, 8 * (unsigned __int8)v1[1], 1);
    }
    v1 += 2;
    ++v0;
  }
  while ( v0 <= 3 );
  return v6;
}
