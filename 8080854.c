int __fastcall sub_8080854(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  int v5; // [sp+0h] [bp-4h]@0

  v2 = a1 << 24;
  v3 = v2 >> 24;
  if ( v2 != a2 << 24 && (v3 == 3 || v3 == 5) )
    sav12_xor_increment(0x28u);
  return v5;
}
