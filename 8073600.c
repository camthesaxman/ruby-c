int __fastcall sub_8073600(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( ((a1 << 16) & 0xF0000u) >> 16 == 1 )
    sub_8073868((unsigned int)(a1 << 16) >> 20);
  return v2;
}
