int __fastcall sub_80738C0(int a1)
{
  unsigned int v1; // r4@1
  char v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = a1;
  if ( !(a1 & 0x3F) )
    sub_807399C(v1 >> 22);
  if ( (v2 & 7) == 1 )
    sub_8073974(v1 >> 19);
  return v4;
}
