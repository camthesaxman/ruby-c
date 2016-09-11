int __fastcall sub_80E8BF4(char a1, char a2)
{
  __int16 v2; // r4@3
  __int16 v3; // r5@3
  char v4; // r0@7
  unsigned __int8 v5; // r8@9
  unsigned __int8 v6; // r1@9
  unsigned __int8 v7; // r0@11
  char *v8; // r0@12
  unsigned __int8 v9; // r0@13
  char *v10; // r0@14
  int v12; // [sp+4h] [bp-28h]@1
  int v13; // [sp+8h] [bp-24h]@1
  int v14; // [sp+Ch] [bp-20h]@1
  int v15; // [sp+10h] [bp-1Ch]@1
  int v16; // [sp+28h] [bp-4h]@15

  v12 = 138263136;
  v13 = 395264;
  v14 = 138263104;
  v15 = 4;
  if ( a2 != 2 && a2 == 5 )
  {
    v2 = 36;
    v3 = 48;
  }
  else
  {
    v2 = 64;
    v3 = 40;
  }
  if ( a1 && a1 == 1 )
    v4 = 68;
  else
    v4 = 67;
  v5 = v4;
  LoadCompressedObjectPic(&v12);
  LoadSpritePalette((int)&v14);
  CreateSprite((int)&gSpriteTemplate_83DBD48, v2, v3);
  v6 = 105;
  if ( !v2024EAC )
    v6 = 100;
  v7 = AddPseudoFieldObject(v6, (int)SpriteCallbackDummy, v2 - 12, v3);
  if ( v7 != 64 )
  {
    v8 = &gSprites[68 * v7];
    v8[5] &= 0xF3u;
    StartSpriteAnim((int)v8, 3);
  }
  v9 = AddPseudoFieldObject(v5, (int)SpriteCallbackDummy, v2 + 12, v3);
  if ( v9 != 64 )
  {
    v10 = &gSprites[68 * v9];
    v10[5] &= 0xF3u;
    StartSpriteAnim((int)v10, 2);
  }
  return v16;
}
