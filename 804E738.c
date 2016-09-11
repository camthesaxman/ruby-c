int __fastcall sub_804E738(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // r1@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r0@1
  __int16 v7; // r0@2
  __int16 v8; // r0@2
  int v10; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) += *(_WORD *)(a1 + 58);
  v2 = *(_WORD *)(a1 + 54);
  v3 = *(_WORD *)(a1 + 50) - v2;
  v4 = *(_WORD *)(a1 + 60);
  v5 = v3 + v4;
  *(_WORD *)(v1 + 50) = v5;
  v6 = v4 + *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v6;
  *(_WORD *)(v1 + 54) = v2 - 1;
  if ( v6 << 16 < v5 << 16 )
  {
    v7 = *(_WORD *)(v1 + 52) - 1;
    *(_WORD *)(v1 + 54) = v7;
    *(_WORD *)(v1 + 52) = v7;
    v8 = *(_WORD *)(v1 + 56) + 1;
    *(_WORD *)(v1 + 56) = v8;
    if ( v8 <= 3 )
      audio_play(116);
    else
      DestroySprite(v1);
  }
  *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 34) = *(_WORD *)(v1 + 50);
  return v10;
}
