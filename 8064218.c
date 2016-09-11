int __fastcall sub_8064218(int a1, int a2, unsigned int a3)
{
  int v3; // r7@1
  int v4; // r6@1
  unsigned int v5; // r5@1
  unsigned int v6; // r4@1
  int v8; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  do
  {
    if ( v5 & 1 )
      call_via_r2(v3, v4, gUnknown_083760A0[v6]);
    v6 = (v6 + 1) & 0xFF;
    v5 >>= 1;
  }
  while ( v6 <= 0x13 );
  return v8;
}
