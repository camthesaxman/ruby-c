int __fastcall GetGroundEffectFlags_Tracks(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@2
  signed int v5; // r1@2
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( MetatileBehavior_IsDeepSand(*(_BYTE *)(a1 + 31)) << 24 )
  {
    v4 = *v3;
    v5 = 256;
_0806381A:
    *v3 = v4 | v5;
    return v7;
  }
  if ( MetatileBehavior_IsSandOrDeepSand(*(_BYTE *)(v2 + 31)) << 24
    || MetatileBehavior_IsUnusedFootprintMetatile(*(_BYTE *)(v2 + 31)) << 24 )
  {
    v4 = *v3;
    v5 = 128;
    goto _0806381A;
  }
  return v7;
}
