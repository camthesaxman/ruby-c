int __fastcall sub_808F0B4(int a1)
{
  int v1; // r6@1
  int v2; // r1@4
  int v3; // r0@4
  __int16 v4; // r3@4
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(v202FFB4 + 1610) && *(_BYTE *)(v202FFB4 + 1610) != 3 )
  {
    DestroySprite(a1);
  }
  else
  {
    v2 = (*(_BYTE *)(v202FFB4 + 1580) + *(_WORD *)(a1 + 48)) & 0xFF;
    SetOamMatrix(*(_WORD *)(a1 + 46) & 0xFF, gSineTable[v2 + 64], gSineTable[v2], -gSineTable[v2], gSineTable[v2 + 64]);
    v3 = (*(_WORD *)(v1 + 48) + 64 + *(_BYTE *)(v202FFB4 + 1580)) & 0xFF;
    v4 = gSineTable[v3];
    *(_WORD *)(v1 + 36) = 40 * gSineTable[v3 + 64] / 256;
    *(_WORD *)(v1 + 38) = 40 * v4 / 256;
  }
  return v6;
}
