int __fastcall sub_80C6C64(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 8 )
    audio_play(0xC3u);
  if ( (signed int)*(_WORD *)(v1 + 46) > 31 )
    DestroySprite(v1);
  return v4;
}
