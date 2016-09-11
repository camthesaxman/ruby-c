int __fastcall GetGroundEffectFlags_ShallowFlowingWater(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( MetatileBehavior_IsShallowFlowingWater(*(_BYTE *)(a1 + 30)) << 24
    && MetatileBehavior_IsShallowFlowingWater(*(_BYTE *)(v2 + 31)) << 24
    || MetatileBehavior_IsPacifidlogLog(*(_BYTE *)(v2 + 30)) << 24
    && MetatileBehavior_IsPacifidlogLog(*(_BYTE *)(v2 + 31)) << 24 )
  {
    if ( !(*(_BYTE *)(v2 + 2) & 8) )
    {
      *(_BYTE *)(v2 + 2) = *(_BYTE *)(v2 + 2) & 0xF7 | 8;
      *v3 |= 0x40u;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 2) &= 0xF7u;
  }
  return v5;
}
