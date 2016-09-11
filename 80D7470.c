signed int __fastcall sub_80D7470(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  __int16 v3; // r5@1
  int v4; // r2@1
  char *v5; // r3@2
  __int16 v6; // r0@2
  __int16 v7; // r1@9
  int v8; // r3@10
  __int16 v9; // r2@10
  signed int result; // r0@14

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83D9B40, *(_WORD *)(v2 + 20), *(_WORD *)(v2 + 22));
  if ( v4 != 64 )
  {
    v5 = &gSprites[68 * v4];
    *((_WORD *)v5 + 2) = *((_WORD *)v5 + 2) & 0xFC00 | ((*((_WORD *)v5 + 2) & 0x3FF) + *(_WORD *)(v2 + 16)) & 0x3FF;
    v6 = *(_WORD *)(v2 + 18) + *(_WORD *)(v2 + 16);
    *(_WORD *)(v2 + 16) = v6;
    if ( v6 & 0x8000 )
      *(_WORD *)(v2 + 16) = 7;
    if ( (signed int)*(_WORD *)(v2 + 16) > 7 )
      *(_WORD *)(v2 + 16) = 0;
    *((_WORD *)v5 + 29) = v3;
    *((_WORD *)v5 + 30) = 3;
    ++*(_WORD *)(v2 + 14);
  }
  if ( !*(_WORD *)(v2 + 16) && (signed int)*(_WORD *)(v2 + 18) > 0 )
  {
    v7 = *(_WORD *)(v2 + 38) + *(_WORD *)(v2 + 36);
    *(_WORD *)(v2 + 36) = v7;
    audio_play_and_stuff(0x76u, v7);
  }
  v8 = *(_WORD *)(v2 + 18);
  v9 = *(_WORD *)(v2 + 22);
  if ( (v8 >= 0 || v9 > (signed int)*(_WORD *)(v2 + 24)) && (v8 <= 0 || v9 < (signed int)*(_WORD *)(v2 + 24)) )
  {
    *(_WORD *)(v2 + 22) = v9 + 8 * *(_WORD *)(v2 + 18);
    result = 0;
  }
  else
  {
    ++*(_WORD *)(v2 + 12);
    *(_WORD *)(v2 + 20) += *(_WORD *)(v2 + 26);
    result = 1;
  }
  return result;
}
