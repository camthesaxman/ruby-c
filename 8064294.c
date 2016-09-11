int __fastcall FilterOutStepOnPuddleGroundEffectIfJumping(_BYTE *a1, _DWORD *a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( *a1 & 0x20 )
    *a2 &= 0xFFFFFBFF;
  return v3;
}
