int sub_80B75C4()
{
  int v1; // [sp+0h] [bp-14h]@1
  int v2; // [sp+4h] [bp-10h]@1
  int v3; // [sp+10h] [bp-4h]@1

  v1 = 100720640;
  v2 = 100722688;
  call_via_r1(*(&v1 + v200000C), *(&gUnknown_083CE2F0 + 2 * v200000E));
  call_via_r1(*(&v1 + v200000D), *(&off_83CE2F4 + 2 * v200000E));
  return v3;
}
