int sub_8031238()
{
  signed int v0; // r2@1
  signed int v1; // r0@8
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v0 == 1 )
  {
    v1 = 33705568;
_0803128A:
    *(_BYTE *)(v2024A60 + v1) = 0;
    goto _08031290;
  }
  if ( v0 > 1 )
  {
    if ( v0 != 2 )
      goto _08031290;
    v1 = 33705572;
    goto _0803128A;
  }
  if ( !*(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
  {
    *(_BYTE *)(v2024A60 + 0x2024E60) = 0;
    *(_BYTE *)(v2024A60 + 0x2024E64) = 0;
  }
_08031290:
  dp01_tbl1_exec_completed();
  return v3;
}
