int __fastcall sub_80316CC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  call_via_r0(v202F7AC);
  if ( !v202F7B1 )
  {
    *(_BYTE *)(12 * LOWORD(dword_3004B20[10 * v1 + 2]) + 0x2017810) &= 0xBFu;
    DestroyTask(v1);
  }
  return v3;
}
