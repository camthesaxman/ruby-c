int __fastcall trainer_flag_set(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  FlagSet((unsigned int)((a1 << 16) + 83886080) >> 16);
  return v2;
}
