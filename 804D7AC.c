int __fastcall sub_804D7AC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  __int16 v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) == 20 )
    StartSpriteAffineAnim(a1, 1);
  v2 = *(_WORD *)(v1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 20 )
  {
    *(_WORD *)(v1 + 38) -= gTradeBallVerticalVelocityTable[*(_WORD *)(v1 + 46)];
    v3 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 == 23 )
    {
      DestroySprite(v1);
      *(_WORD *)(dword_3004828 + 196) = 14;
    }
  }
  return v5;
}
