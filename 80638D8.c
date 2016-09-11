int __fastcall GetGroundEffectFlags_Puddle(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( MetatileBehavior_IsPuddle(*(_BYTE *)(a1 + 30)) << 24 && MetatileBehavior_IsPuddle(*(_BYTE *)(v2 + 31)) << 24 )
    *v3 |= 0x400u;
  return v5;
}
