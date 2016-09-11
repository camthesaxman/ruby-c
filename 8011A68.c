int unref_sub_8011A68()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024A64;
    if ( v2024A64 < (unsigned int)v2024A68 )
    {
      do
      {
        if ( !(battle_side_get_owner(v2024A60) << 24) )
        {
          sub_800C704(0, *(_BYTE *)(2 * v2024A60 + 0x2024A6A), 0);
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
