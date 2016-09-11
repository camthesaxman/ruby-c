int sub_8037B78()
{
  int v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( !((unsigned __int8)gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 62] << 31) )
  {
    v0 = sub_8043DB0((unsigned __int8)byte_3004340[v2024A60]);
    dp01_tbl4_exec_completed(v0);
  }
  return v2;
}
