int __fastcall sub_80860BC(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  char *v3; // r3@3
  char *v4; // r1@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  if ( !*(_WORD *)(a1 + 48) || (*(_WORD *)(a1 + 48) = v2 - 1, !((v2 - 1) << 16)) )
  {
    *(_WORD *)(a1 + 48) = 25;
    v3 = (char *)&gUnknown_0839F2A8 + 4 * *(_WORD *)(a1 + 50);
    v4 = &gSprites[68
                 * (unsigned __int8)CreateSpriteAtEnd(
                                      (int)&gSpriteTemplate_839F208,
                                      (signed __int16)(*(_WORD *)(a1 + 36) + *(_WORD *)v3),
                                      *(_WORD *)(a1 + 38) + *((_WORD *)v3 + 1))];
    v4[5] = v4[5] & 0xF3 | 8;
    *((_WORD *)v4 + 23) = *(_WORD *)(v1 + 60);
    ++*(_WORD *)(v1 + 50);
    --*(_WORD *)(v1 + 58);
    audio_play(0x17u);
  }
  if ( !*(_WORD *)(v1 + 58) )
  {
    *(_WORD *)(v1 + 48) = 32;
    ++*(_WORD *)(v1 + 46);
  }
  return v6;
}
