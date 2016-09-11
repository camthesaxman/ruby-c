int __fastcall sub_8046760(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  char *v3; // r1@5
  char *v4; // r0@4
  char *v5; // r1@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v2;
  if ( v2 == 11 )
    audio_play(60);
  if ( gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0) + 63] & 0x20 )
  {
    StartSpriteAnim(v1, 2);
    v4 = &gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0) + 62];
    *v4 |= 4u;
    *(_WORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 28) = sub_80467F8;
  }
  else
  {
    v3 = &gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)];
    *((_WORD *)v3 + 24) += 96;
    v5 = &gSprites[68 * *(_BYTE *)(*(_WORD *)(v1 + 58) + 0x2024BE0)];
    *((_WORD *)v5 + 19) = -*((_WORD *)v5 + 24) >> 8;
  }
  return v7;
}
