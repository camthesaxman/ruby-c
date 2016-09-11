int __fastcall sub_809A23C(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r1@1
  __int16 v3; // r0@1
  __int16 v4; // r0@1
  unsigned __int8 v5; // r0@1
  unsigned int v6; // r4@1
  __int16 v7; // r6@1
  char *v8; // r0@2
  int v10; // [sp+0h] [bp-44h]@1
  __int16 v11; // [sp+4h] [bp-40h]@1
  int v12; // [sp+8h] [bp-3Ch]@1
  __int16 v13; // [sp+Ch] [bp-38h]@1
  char v14; // [sp+10h] [bp-34h]@1
  int v15; // [sp+18h] [bp-2Ch]@1
  signed int v16; // [sp+1Ch] [bp-28h]@1
  int *v17; // [sp+20h] [bp-24h]@1
  int v18; // [sp+40h] [bp-4h]@3

  v1 = a1;
  v15 = 33556682;
  v17 = &v15;
  v16 = 197120;
  v10 = 33557708;
  v11 = -9528;
  v12 = 33557708;
  v13 = -9527;
  memset(&v14, 0, 8);
  v2 = 4 * *(_BYTE *)(v1 + 33784930);
  v2000CE8 = *(_WORD *)((char *)&gUnknown_083BB0A8 + v2);
  v2000CEA = *(_WORD *)((char *)&unk_83BB0AA + v2);
  LoadSpritePalettes((int)&v10);
  v2000D08 = 1008;
  v3 = (unsigned __int8)IndexOfSpritePaletteTag(0xDAC8u);
  v2000CEC = 16 * v3 + 270;
  v2000D08 |= 0x10000 << v3;
  v4 = (unsigned __int8)IndexOfSpritePaletteTag(0xDAC9u);
  v2000CEE = 16 * v4 + 270;
  v2000D08 |= 0x10000 << v4;
  sub_809A1BC(33556682, 9 * v1 + 33784804);
  LoadSpriteSheet((int)v17);
  v5 = sub_8072CA4((_BYTE *)(9 * v1 + 33784804));
  v6 = 0;
  v7 = sub_809A6D0(v5);
  do
  {
    v8 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83BB2B8, v7 + 32 * v6, 28)];
    *(_DWORD *)(4 * v6 + 0x2000CF0) = v8;
    StartSpriteAnim((int)v8, v6);
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 1 );
  v2000CCA = 0;
  return v18;
}
