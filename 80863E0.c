int __fastcall sub_80863E0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 56) || task_is_not_running_overworld_fanfare() << 24 )
    ++*(_WORD *)(v1 + 46);
  return v3;
}
