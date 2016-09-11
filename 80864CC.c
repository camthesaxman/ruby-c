int __fastcall sub_80864CC(__int16 a1, __int16 a2, __int16 a3, int a4)
{
  __int16 v4; // r5@1
  int v5; // r4@2
  int v7; // [sp+8h] [bp-4h]@0

  v4 = a1;
  if ( a4 << 24 )
  {
    v5 = CreateSpriteAtEnd((int)&gSpriteTemplate_839F250, a2, a3) & 0xFF;
  }
  else
  {
    v5 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_839F238, a2, a3);
    SetSubspriteTables((int)&gSprites[68 * v5], (int)&gUnknown_0839F1C8);
  }
  gSprites[68 * v5 + 62] |= 4u;
  *(_WORD *)&gSprites[68 * v5 + 46] = v4;
  return v7;
}
