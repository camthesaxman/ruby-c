signed int __fastcall s0D_endscript_killram(int a1)
{
  int v1; // r4@1

  v1 = a1;
  killram();
  script_stop(v1);
  return 1;
}
