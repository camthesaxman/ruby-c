int __fastcall sub_80DDBD8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80DDCC8();
  if ( sub_8078B5C(v1) << 24 )
  {
    *(_DWORD *)(v1 + 28) = sub_80DDC4C;
  }
  else
  {
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 10);
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), 15);
    v2 = *(_WORD *)(v1 + 56);
    *(_WORD *)(v1 + 56) = (v2 + 5) & 0xFF;
    if ( (!v2 || v2 > 196) && *(_WORD *)(v1 + 56) << 16 > 0 )
      audio_play_and_stuff(0xC4u, v202F7D2);
  }
  return v4;
}
