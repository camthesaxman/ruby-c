int __fastcall sub_80A198C(char a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r4@1
  __int16 v5; // r5@1
  __int16 v6; // r6@1
  unsigned __int8 v7; // r10@1
  _BYTE *v8; // r8@1
  int v10; // [sp+18h] [bp-4h]@0

  v4 = (unsigned __int8)a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (_BYTE *)(a4 + 33660928);
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(a4 + 0x201A000)], a1);
  gSprites[68 * *v8 + 5] = gSprites[68 * *v8 + 5] & 0xF | 16 * gUnknown_083C11D8[v4];
  *(_WORD *)&gSprites[68 * *v8 + 32] = v5 + 16;
  *(_WORD *)&gSprites[68 * *v8 + 34] = v6 + 8;
  sub_80A1918(v7, 0);
  return v10;
}
