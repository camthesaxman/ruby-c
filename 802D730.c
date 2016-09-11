int sub_802D730()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) && !(sub_80753C4() << 24) )
  {
    m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    sub_80324F8((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v2024A60);
    dp01_tbl1_exec_completed();
  }
  return v1;
}
