int __fastcall sub_804D80C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  __int16 v3; // r0@2
  __int16 v4; // r0@10
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50);
  if ( *(_WORD *)(a1 + 50) )
  {
    if ( *(_WORD *)(a1 + 46) == 66 )
      audio_play(57);
    if ( *(_WORD *)(v1 + 46) == 92 )
      audio_play(58);
    if ( *(_WORD *)(v1 + 46) == 107 )
      audio_play(59);
    *(_WORD *)(v1 + 38) += gTradeBallVerticalVelocityTable[*(_WORD *)(v1 + 46)];
    v4 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v4;
    if ( v4 == 108 )
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  }
  else
  {
    v3 = *(_WORD *)(a1 + 34) + 4;
    *(_WORD *)(v1 + 34) = v3;
    if ( v3 > (signed int)*(_WORD *)(v1 + 52) )
    {
      *(_WORD *)(v1 + 50) = 1;
      *(_WORD *)(v1 + 46) = 22;
      audio_play(56);
    }
  }
  return v6;
}
