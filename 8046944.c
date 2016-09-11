int __fastcall sub_8046944(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 == 31 )
  {
    *(_WORD *)(v1 + 52) = 0;
    *(_BYTE *)(v1 + 44) |= 0x80u;
    StartSpriteAffineAnim(v1, 1);
    *(_DWORD *)(v1 + 28) = sub_8046984;
    audio_play(23);
  }
  return v4;
}
