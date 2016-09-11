int sub_80F9E1C()
{
  unsigned int i; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  for ( i = 0; i < (unsigned __int8)byte_3004350; i = (i + 1) & 0xFF )
  {
    if ( sub_8040574((int)&dword_3004360[25 * i]) << 24 )
      sub_806BC3C(i, 0x8Cu);
    else
      sub_806BC3C(i, 0x9Au);
  }
  return v2;
}
