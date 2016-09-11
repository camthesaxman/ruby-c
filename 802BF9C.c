int dp01_tbl1_exec_completed()
{
  char v1; // [sp+0h] [bp-Ch]@2
  int v2; // [sp+8h] [bp-4h]@4

  dword_3004330[v2024A60] = (int)sub_802C014;
  if ( v20239F8 & 2 )
  {
    v1 = GetMultiplayerId();
    dp01_prepare_buffer_wireless_probably(2, 4u, (int)&v1);
    *(_BYTE *)((v2024A60 << 9) + 0x2023A60) = 56;
  }
  else
  {
    v2024A64 &= ~gBitTable[v2024A60];
  }
  return v2;
}
