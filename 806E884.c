int __fastcall sub_806E884(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( MenuUpdateWindowText() << 24 )
  {
    v202E8F6 = 0;
    if ( !LOWORD(dword_3004B20[10 * v2 + 2]) )
      MenuZeroFillWindowRect(3, 14, 26, 19);
    DestroyTask(v3);
  }
  return v5;
}
