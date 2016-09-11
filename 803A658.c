int sub_803A658()
{
  int v0; // r2@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v0 == 3 )
    v2024D26 = 3;
  else
    v2024D26 = v0 ^ 3;
  sub_8074D28(5);
  BeginFastPaletteFade(3);
  dp01_tbl4_exec_completed();
  dword_3004330[v2024A60] = (int)sub_8037F34;
  return v2;
}
