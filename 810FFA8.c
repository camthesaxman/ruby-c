int __fastcall sub_810FFA8(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 4;
  do
  {
    sub_810FF78(v1);
    v1 += 16;
    --v2;
  }
  while ( v2 >= 0 );
  sav12_xor_set(0x17u, 0);
  sav12_xor_set(0x18u, 0);
  sav12_xor_set(0x19u, 0);
  return v4;
}
