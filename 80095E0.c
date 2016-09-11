int __fastcall RtcInitLocalTimeOffset(int a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  RtcCalcLocalTimeOffset(0, a1, a2, 0);
  return v3;
}
