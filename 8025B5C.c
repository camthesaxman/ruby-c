int sub_8025B5C()
{
  int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = *(_BYTE *)(28 * v2024C07 + 0x2024CB1);
  if ( v0 == 3 )
  {
    v2024C68 |= 1u;
    v2024D23 = 1;
  }
  else
  {
    *(_BYTE *)(28 * v2024C07 + 0x2024CB1) = v0 + 1;
    byte_30041C0[0] = -3;
    byte_30041C1 = 1;
    word_30041C2 = 257;
    byte_30041C4 = *(_BYTE *)(28 * v2024C07 + 0x2024CB1);
    byte_30041C5 = -1;
    v2024D23 = 0;
  }
  ++v2024C10;
  return v2;
}
