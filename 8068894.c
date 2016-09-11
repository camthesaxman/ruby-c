signed int sub_8068894()
{
  int v0; // r0@1
  int v1; // r0@1
  void *v2; // r0@2

  v0 = sub_8082B78();
  v1 = happiness_algorithm_step(v0);
  if ( (overworld_poison_step(v1) & 0xFF) == 1 )
  {
    v2 = &gUnknown_081A14B8;
_080688E8:
    script_env_1_execute_new_script((int)v2);
    return 1;
  }
  if ( sub_80422A0() << 24 )
  {
    sav12_xor_increment(0xDu);
    v2 = &Event_EggHatch;
    goto _080688E8;
  }
  if ( (safari_step() & 0xFF) != 1 )
  {
    if ( sub_810D9B0(1) != 1 )
      return 0;
    v2 = &gUnknown_0815FD0D;
    goto _080688E8;
  }
  return 1;
}
