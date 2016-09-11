int __fastcall sub_8094C54(int a1, char a2)
{
  unsigned int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a1 << 24;
  if ( (v2 >> 24) & 1 )
    *(_BYTE *)((v2 >> 25) + 0x2038470) = *(_BYTE *)((v2 >> 25) + 0x2038470) & 0xF0 | a2;
  else
    *(_BYTE *)((v2 >> 25) + 0x2038470) = *(_BYTE *)((v2 >> 25) + 0x2038470) & 0xF | 16 * a2;
  return v4;
}
