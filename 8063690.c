int __fastcall GetAllGroundEffectFlags_OnFinishStep(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  FieldObjectUpdateMetatileBehaviors();
  GetGroundEffectFlags_ShallowFlowingWater(v2, v3);
  GetGroundEffectFlags_SandHeap(v2, v3);
  GetGroundEffectFlags_Puddle(v2, v3);
  GetGroundEffectFlags_Ripple(v2, v3);
  GetGroundEffectFlags_ShortGrass(v2, v3);
  GetGroundEffectFlags_HotSprings(v2, v3);
  GetGroundEffectFlags_Seaweed(v2, v3);
  GetGroundEffectFlags_JumpLanding(v2, v3);
  return v5;
}
