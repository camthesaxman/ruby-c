int __fastcall s61_set_trainer_flag(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned __int16 v2; // r0@1

  v1 = script_read_halfword(a1);
  v2 = VarGet(v1);
  trainer_flag_set(v2);
  return 0;
}
