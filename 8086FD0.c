int __fastcall waterfall_1_do_anim_probably(int a1, _BYTE *a2)
{
  int v2; // r4@1
  _BYTE *v3; // r5@1

  v2 = a1;
  v3 = a2;
  script_env_2_enable();
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v3) << 24) )
  {
    FieldObjectClearAnimIfSpecialAnimFinished(v3);
    v202FF84 = *(_WORD *)(v2 + 10);
    FieldEffectStart(0x3Bu);
    ++*(_WORD *)(v2 + 8);
  }
  return 0;
}
