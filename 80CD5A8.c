int __fastcall sub_80CD5A8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  signed __int16 v3; // r0@3
  __int16 v4; // r0@4
  signed int v5; // r0@7
  char v6; // r0@8
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 50) )
  {
    v4 = *(_WORD *)(a1 + 48) - 3;
    *(_WORD *)(v1 + 48) = v4;
    if ( !(v4 & 0x8000) )
      goto _080CD5D8;
    v3 = 0;
  }
  else
  {
    v2 = *(_WORD *)(a1 + 48) + 3;
    *(_WORD *)(v1 + 48) = v2;
    if ( v2 <= 16 )
      goto _080CD5D8;
    v3 = 16;
  }
  *(_WORD *)(v1 + 48) = v3;
_080CD5D8:
  v5 = sub_80791A8(1, 1u, 1u, 1u, 1, 0, 0);
  BlendPalettes(v5, *(_BYTE *)(v1 + 48), 0x7FFF);
  if ( *(_WORD *)(v1 + 48) == 16 )
  {
    ++*(_WORD *)(v1 + 50);
    LoadPalette(
      32 * ((unsigned int)*(_BYTE *)(v1 + 5) >> 4) + 33746136,
      16 * ((unsigned int)*(_BYTE *)(v1 + 5) >> 4) | 0x101,
      4);
    v6 = sub_8076F98(0x3Fu);
    audio_play_and_stuff(0xC0u, v6);
  }
  else if ( !*(_WORD *)(v1 + 48) )
  {
    *(_DWORD *)(v1 + 28) = sub_80CD654;
  }
  return v8;
}
