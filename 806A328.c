int sub_806A328()
{
  int v1; // [sp+0h] [bp-4h]@0

  FlagSet(0x835u);
  RtcCalcLocalTime();
  v2024F44 = *(_DWORD *)&word_3004038;
  v2024F48 = dword_300403C;
  VarSet(0x4040u, word_3004038);
  return v1;
}
