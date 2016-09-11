int __fastcall sub_807EC40(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  __int16 v3; // r4@1
  __int16 v4; // r0@1
  char v5; // r6@1
  int v6; // r4@1
  __int16 v7; // r0@1
  signed __int16 v8; // r0@1
  int v10; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = Random();
  v3 = 30 * (5 * *(_WORD *)(v1 + 54) & 7);
  *(_WORD *)(v1 + 34) = -3 - (*(_BYTE *)(v1 + 41) + gSpriteCoordOffsetY);
  *(_WORD *)(v1 + 32) = v3 + v2 % 0x1Eu - (*(_BYTE *)(v1 + 40) + gSpriteCoordOffsetX);
  *(_WORD *)(v1 + 46) = *(_WORD *)(v1 + 34) << 7;
  *(_WORD *)(v1 + 36) = 0;
  v4 = Random();
  v5 = v4;
  v6 = v4 & 3;
  v7 = 5 * (v4 & 3) + 64;
  *(_WORD *)(v1 + 48) = v7;
  *(_WORD *)(v1 + 60) = v7;
  StartSpriteAnim(v1, ~v5 & 1);
  *(_WORD *)(v1 + 52) = 0;
  v8 = 1;
  if ( !v6 )
    v8 = 2;
  *(_WORD *)(v1 + 50) = v8;
  *(_WORD *)(v1 + 58) = (v5 & 0x1F) + 210;
  *(_WORD *)(v1 + 56) = 0;
  return v10;
}
