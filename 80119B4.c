int sub_80119B4()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024A64;
    if ( v2024A64 < (unsigned int)v2024A68 )
    {
      do
      {
        if ( !(battle_get_per_side_status(v2024A60) << 24) )
        {
          dp01_build_cmdbuf_x2F_2F_2F_2F(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        if ( v20239F8 & 0x40 && (unsigned __int8)battle_get_per_side_status(v2024A60) == 2 )
        {
          dp01_build_cmdbuf_x2F_2F_2F_2F(0);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        ++v2024A60;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
    v2016058 = 0;
    v20160F9 = 0;
    v20160E6 = 0;
    dword_30042D4 = (int)sub_8011B00;
  }
  return v1;
}
