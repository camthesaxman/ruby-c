int __fastcall meta_step(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  DoGroundEffects_OnSpawn();
  sub_80634A0(v2, v3);
  if ( FieldObjectIsSpecialAnimActive(v2) << 24 )
  {
    FieldObjectExecSpecialAnim(v2, v3);
  }
  else if ( !(*(_BYTE *)(v2 + 1) << 31) )
  {
    while ( call_via_r6(v2, v3) << 24 )
      ;
  }
  DoGroundEffects_OnBeginStep(v2, v3);
  DoGroundEffects_OnFinishStep(v2, v3);
  npc_obj_transfer_image_anim_pause_flag(v2, v3);
  sub_80634D0(v2, v3);
  FieldObjectUpdateSubpriority(v2, v3);
  return v5;
}
