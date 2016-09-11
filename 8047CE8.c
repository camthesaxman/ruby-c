int sub_8047CE8()
{
  int v0; // r0@1
  int v2; // [sp+Ch] [bp-4h]@0

  sub_804AFB8(&gWindowConfig_81E725C, v20296CC, 33705636, 12);
  v0 = GetMultiplayerId();
  sub_804AFB8(&gWindowConfig_81E725C, v20296D8, (char *)&unk_3002978 + 28 * (((v0 << 24) ^ 0x1000000u) >> 24), 12);
  sub_804AFB8(&gWindowConfig_81E725C, v20296E4, 138593878, 8);
  sub_804ACD8(138593885, v20296EC, 20);
  nullsub_5(3, 0);
  return v2;
}
