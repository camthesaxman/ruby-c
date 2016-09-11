int __fastcall sub_807ED48(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r2@1
  int v6; // r0@4
  int v7; // r3@8
  __int16 v8; // r0@12
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 46) = v2;
  *(_WORD *)(v1 + 34) = v2 << 16 >> 23;
  *(_WORD *)(v1 + 52) = (*(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 52)) & 0xFF;
  *(_WORD *)(v1 + 36) = gSineTable[*(_WORD *)(v1 + 52)] / 64;
  v3 = *(_BYTE *)(v1 + 40);
  v4 = ((unsigned __int16)gSpriteCoordOffsetX + *(_WORD *)(v1 + 32) + v3) & 0x1FF;
  v5 = ((unsigned __int16)gSpriteCoordOffsetX + *(_WORD *)(v1 + 32) + v3) & 0x1FF;
  if ( ((unsigned __int16)gSpriteCoordOffsetX + *(_WORD *)(v1 + 32) + v3) & 0x100 )
    LOWORD(v4) = v5 | 0xFF00;
  if ( (signed __int16)v4 >= -3 )
  {
    if ( (signed __int16)v4 <= 242 )
      goto _0807EDDA;
    v6 = -3 - ((unsigned __int16)gSpriteCoordOffsetX + v3);
  }
  else
  {
    LOWORD(v6) = 242 - (gSpriteCoordOffsetX + v3);
  }
  *(_WORD *)(v1 + 32) = v6;
_0807EDDA:
  v7 = *(_BYTE *)(v1 + 41);
  if ( (((((unsigned __int16)gSpriteCoordOffsetY + *(_WORD *)(v1 + 34) + v7) & 0xFF) - 164) & 0xFFFFu) > 6 )
  {
    if ( (((((unsigned __int16)gSpriteCoordOffsetY + *(_WORD *)(v1 + 34) + v7) & 0xFF) - 243) & 0xFFFFu) <= 6 )
    {
      *(_WORD *)(v1 + 34) = 163;
      *(_WORD *)(v1 + 46) = 20864;
      *(_WORD *)(v1 + 56) = 0;
      *(_WORD *)(v1 + 58) = 220;
      *(_BYTE *)(v1 + 62) |= 4u;
      *(_DWORD *)(v1 + 28) = sub_807ECEC;
    }
  }
  else
  {
    *(_WORD *)(v1 + 34) = 250 - (gSpriteCoordOffsetY + v7);
    *(_WORD *)(v1 + 46) = *(_WORD *)(v1 + 34) << 7;
    *(_WORD *)(v1 + 56) = 0;
    *(_WORD *)(v1 + 58) = 220;
  }
  v8 = *(_WORD *)(v1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v8;
  if ( v8 == *(_WORD *)(v1 + 58) )
  {
    sub_807EC40(v1);
    *(_WORD *)(v1 + 34) = 250;
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_807ECEC;
  }
  return v10;
}
