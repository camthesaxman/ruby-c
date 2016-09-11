int DoSoftReset()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v4000208 = 0;
  v0 = m4aSoundVSyncOff();
  remove_some_task(v0);
  v40000C6 &= 0xC5FFu;
  v40000C6 &= 0x7FFFu;
  v40000D2 &= 0xC5FFu;
  v40000D2 &= 0x7FFFu;
  v40000DE &= 0x45FFu;
  SiiRtcProtect(v40000DE);
  ((void (__fastcall *)(signed int))SoftReset)(255);
  return v2;
}
