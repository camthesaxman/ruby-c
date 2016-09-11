int __fastcall RtcGetDateTime(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  RtcDisableInterrupts();
  SiiRtcGetDateTime(v1);
  RtcRestoreInterrupts();
  return v3;
}
