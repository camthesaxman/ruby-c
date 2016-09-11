int sub_81377B0()
{
  __int16 v0; // r4@1
  int v1; // r0@3
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = sub_8045C78(v2024A60, (unsigned __int8)byte_3004340[v2024A60], 0);
  sub_8043DFC(byte_3004340[v2024A60]);
  if ( v0 == -1 )
  {
    v1 = sub_80324F8((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
    dp01_tbl5_exec_completed(v1);
  }
  else
  {
    sub_80440EC(byte_3004340[v2024A60], v0, 0);
  }
  return v3;
}
