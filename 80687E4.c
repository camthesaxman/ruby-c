_BOOL4 __fastcall sub_80687E4(int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r1@1
  unsigned int v4; // r4@1
  unsigned int v5; // r6@1

  v2 = a1;
  v3 = a2 << 16;
  v4 = v3 >> 16;
  v5 = v3 >> 16;
  return (mapheader_trigger_activate_at__run_now() & 0xFF) == 1
      || (sub_8068A64(v2, v4) & 0xFF) == 1
      || (sub_8068870(v5) & 0xFF) == 1
      || (sub_8068894() & 0xFF) == 1
      || (sub_8085558() & 0xFF) == 1;
}
