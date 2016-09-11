int __fastcall sub_80C7C94(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  unsigned int v4; // r4@1
  unsigned int v5; // r7@1
  int v6; // r4@2
  int v7; // r4@6
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) & 0xFF;
  v3 = *(_WORD *)(a1 + 50) << 24;
  v4 = v3 >> 24;
  v5 = v3 >> 24;
  sub_80C7D14(v1);
  if ( v2 == 1 )
  {
    v6 = (v4 + 4) & 0xFF;
    if ( (signed __int16)sub_80E6034() != 1 )
      v6 = (v6 + 8) & 0xFF;
    audio_play(0x30u);
    StartSpriteAffineAnim(v1, v6);
  }
  else if ( v2 == 2 )
  {
    v7 = (v5 + 8) & 0xFF;
    if ( (signed __int16)sub_80E6034() != 1 )
      v7 = (v7 + 8) & 0xFF;
    audio_play(0x30u);
    StartSpriteAffineAnim(v1, v7);
  }
  *(_WORD *)(v1 + 48) = 0;
  return v9;
}
