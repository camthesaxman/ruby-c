int bx_t1_healthbar_update()
{
  int v0; // r1@1
  __int16 v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = (unsigned __int8)byte_3004340[v2024A60];
  v1 = sub_8045C78();
  sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
  if ( v1 == -1 )
  {
    sub_80324F8((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v2024A60);
    dp01_tbl1_exec_completed();
  }
  else
  {
    sub_80440EC((unsigned __int8)byte_3004340[v2024A60]);
  }
  return v3;
}
