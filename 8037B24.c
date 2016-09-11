int sub_8037B24()
{
  __int16 v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = sub_8045C78(v2024A60, (unsigned __int8)byte_3004340[v2024A60], 0, 0);
  sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
  if ( v0 == -1 )
    dp01_tbl4_exec_completed(-1);
  else
    sub_80440EC((unsigned __int8)byte_3004340[v2024A60]);
  return v2;
}
