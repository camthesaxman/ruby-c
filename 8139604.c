int sub_8139604()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 62] & 4 )
  {
    dp01_tbl5_exec_completed();
  }
  else
  {
    v2024E6D = 1;
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 48] = 0;
    sub_8047858(v2024A60);
    dword_3004330[v2024A60] = (int)bx_blink_t5;
  }
  return v1;
}
