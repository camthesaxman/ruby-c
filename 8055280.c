int __fastcall sub_8055280(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = v1 >> 16;
  if ( (v1 - 1114112) >> 16 > 0xC )
    word_3004858 = 17;
  else
    word_3004858 = v2;
  return v4;
}
