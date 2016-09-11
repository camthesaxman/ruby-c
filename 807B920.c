int __fastcall sub_807B920(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r5@1
  unsigned int v3; // r4@1
  unsigned __int8 v4; // r0@3
  __int16 v5; // r4@3
  int *v6; // r0@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (((sub_8077ABC(v202F7C9, 2u) << 16) & 0xFFFFFFu) - 0x200000) >> 16;
  v3 = (((sub_8077ABC(v202F7C9, 3u) << 16) & 0xFFFFFFu) - 2359296) >> 16;
  if ( sub_8076BE0() << 24 )
    v2 = ((v2 << 16) - 393216) >> 16;
  v4000050 = 16192;
  v4000052 = 4096;
  v4 = CreateSprite((int)&gSpriteTemplate_83931E0, v2, v3);
  v5 = v4;
  SetSubspriteTables((int)&gSprites[68 * v4], (int)&gUnknown_083931D8);
  v6 = &dword_3004B20[10 * v1];
  *((_WORD *)v6 + 19) = v5;
  *v6 = (int)sub_807B9D8;
  return v8;
}
