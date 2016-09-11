int sub_8030798()
{
  __int16 v0; // r7@1
  char *v1; // r4@1
  int v2; // r4@3
  int *v3; // r1@3
  int v5; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  v1 = (char *)&unk_3004360 + 100 * *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( (unsigned int)GetMonData(v1, 56) <= 0x63 )
  {
    load_gfxc_health_bar(1);
    GetMonData(v1, 11);
    v2 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8);
    v3 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_802D924, 10)];
    *((_WORD *)v3 + 4) = v0;
    *((_WORD *)v3 + 5) = v2;
    *((_WORD *)v3 + 6) = v2024A60;
    dword_3004330[v2024A60] = (int)nullsub_91;
  }
  else
  {
    dp01_tbl1_exec_completed();
  }
  return v5;
}
