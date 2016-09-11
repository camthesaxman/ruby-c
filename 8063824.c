int __fastcall GetGroundEffectFlags_SandHeap(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( MetatileBehavior_IsDeepSand(*(_BYTE *)(a1 + 30)) << 24 && MetatileBehavior_IsDeepSand(*(_BYTE *)(v2 + 31)) << 24 )
  {
    if ( !(*(_BYTE *)(v2 + 2) & 0x10) )
    {
      *(_BYTE *)(v2 + 2) = *(_BYTE *)(v2 + 2) & 0xEF | 0x10;
      *v3 |= 0x800u;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 2) &= 0xEFu;
  }
  return v5;
}
