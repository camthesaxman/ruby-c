int __fastcall sub_8085DC4(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  call_via_r2(
    &dword_3004B20[10 * a1],
    &dword_3004B20[10 * a1],
    *(&gUnknown_0839F268 + LOWORD(dword_3004B20[10 * a1 + 2])));
  return v2;
}
