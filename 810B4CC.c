int __fastcall sub_810B4CC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  call_via_r1(
    HIWORD(dword_3004B20[10 * a1 + 6]),
    (LOWORD(dword_3004B20[10 * a1 + 6]) << 16) | HIWORD(dword_3004B20[10 * a1 + 6]));
  v202E85E = 0;
  DestroyTask(v1);
  return v3;
}
