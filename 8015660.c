int __fastcall sub_8015660(int a1)
{
  unsigned int v1; // r2@2
  int v2; // r1@6
  int result; // r0@10

  result = 1;
  if ( !((unsigned int)*(_BYTE *)((16 * a1 & 0xFFF) + 0x2024D28) >> 7) )
  {
    v1 = *(_BYTE *)((16 * a1 & 0xFFF) + 0x2024D29);
    if ( !(v1 & 2) && !(v1 & 0x20) && !(v1 & 0x40) && !(v1 >> 7) )
    {
      v2 = *(_BYTE *)((16 * a1 & 0xFFF) + 0x2024D2A);
      if ( !(v2 << 31) && !(v2 & 2) && !(v2 & 4) && !(*(_BYTE *)((16 * a1 & 0xFFF) + 0x2024D29) << 31) )
        result = 0;
    }
  }
  return result;
}
