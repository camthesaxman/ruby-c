int __fastcall dive_2_unknown(int a1)
{
  int v1; // r4@1

  v1 = a1;
  script_env_2_enable();
  v202FF84 = *(_WORD *)(v1 + 38);
  FieldEffectStart(0x3Bu);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
