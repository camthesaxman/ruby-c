int __fastcall sub_807C46C(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r4@2
  int *v3; // r0@3
  int *v4; // r7@4
  int v5; // r0@5
  unsigned __int8 v6; // r0@9
  unsigned __int8 v7; // r0@9
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 0xF || (v2 = 4 * a1, HIWORD(dword_3004B20[10 * a1 + 2])) )
  {
    v3 = &dword_3004B20[10 * a1];
    *((_WORD *)v3 + 5) = 1;
    *((_WORD *)v3 + 4) = 0;
    v2 = 4 * v1;
  }
  v4 = &dword_3004B20[2 * (v2 + v1)];
  if ( *((_WORD *)v4 + 4) )
  {
    v5 = *((_WORD *)v4 + 4);
    if ( v5 == 160 || v5 == 64 )
      sub_807C088(1u);
    --LOWORD(dword_3004B20[2 * (v2 + v1) + 2]);
  }
  else
  {
    v4000000 = 5185;
    v4000048 = 0;
    v400004A = 0;
    v4000050 = 16208;
    v4000052 = 31;
    v4000054 = 0;
    v6 = CreateSprite((int)&gSpriteTemplate_8393ECC, 98, 26);
    gSprites[68 * v6 + 62] |= 4u;
    *(_WORD *)&gSprites[68 * v6 + 48] = v1;
    v7 = CreateSprite((int)&gSpriteTemplate_8393EE4, 162, 26);
    gSprites[68 * v7 + 62] |= 4u;
    *(_WORD *)&gSprites[68 * v7 + 48] = v1;
    *((_WORD *)v4 + 9) = 88;
    *((_WORD *)v4 + 4) = 144;
    *v4 = (int)sub_807C580;
  }
  return v9;
}
