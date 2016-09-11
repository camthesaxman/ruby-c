int __fastcall sub_809D104(int a1, int a2, unsigned __int16 a3, int a4, int a5, int a6, int a7, unsigned __int16 a8)
{
  int v8; // r5@1
  unsigned int v9; // r4@1
  unsigned int v10; // r6@1
  unsigned int v11; // r7@2
  int v13; // [sp+14h] [bp-4h]@0

  v8 = a4 + ((a6 << 6) & 0x3FFFFF) + (2 * a5 & 0x1FFFF);
  v9 = a1 + (a3 << 6) + (2 * a2 & 0x1FFFF);
  v10 = a1 + ((a3 + a8) << 6);
  if ( v9 < v10 )
  {
    v11 = (2 * a7 & 0x1FFFFu) >> 1;
    do
    {
      CpuSet(v8, v9, v11 & 0x1FFFFF);
      v9 += 64;
      v8 += 64;
    }
    while ( v9 < v10 );
  }
  return v13;
}
