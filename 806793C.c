int __fastcall s60_check_trainer_flag(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  unsigned __int16 v3; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  *(_BYTE *)(v1 + 2) = trainer_flag_check(v3);
  return 0;
}
