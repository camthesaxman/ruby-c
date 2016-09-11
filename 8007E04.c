int sub_8007E04()
{
  int v1; // [sp+0h] [bp-4h]@0

  GetMultiplayerId();
  BuildSendCmd(0x4444u);
  ++dword_20238BC;
  return v1;
}
