int sub_80B7794()
{
  int v1; // [sp+Ch] [bp-4h]@0

  BasicInitMenuWindow((int)*(&gUnknown_083CE328 + 4 * v200000E + v200000C));
  call_via_r0(*(&gUnknown_083CE310 + 2 * v200000E));
  BasicInitMenuWindow((int)*(&off_83CE330 + 4 * v200000E + v200000D));
  call_via_r0(*(&off_83CE314 + 2 * v200000E));
  sub_80B772C();
  sub_80B7740();
  return v1;
}
