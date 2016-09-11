int sub_8010824()
{
  int v1; // [sp+8h] [bp-4h]@0

  call_via_r0(dword_30042D4);
  v2024A60 = 0;
  if ( v2024A68 )
  {
    do
    {
      call_via_r0(dword_3004330[v2024A60]);
      ++v2024A60;
    }
    while ( v2024A60 < (unsigned int)v2024A68 );
  }
  return v1;
}
