int __fastcall sub_804D738(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 38) += gTradeBallVerticalVelocityTable[*(_WORD *)(a1 + 46)];
  if ( *(_WORD *)(a1 + 46) == 22 )
    audio_play(56);
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 44 )
  {
    audio_play(140);
    *(_DWORD *)(v1 + 28) = sub_804D7AC;
    *(_WORD *)(v1 + 46) = 0;
    BeginNormalPaletteFade(1 << ((*(_BYTE *)(v1 + 5) >> 4) + 16), -1, 0, 16);
  }
  return v4;
}
