int sub_809CFF0()
{
  unsigned int i; // r4@2
  int v2; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(v20384EC + 4) )
  {
    for ( i = 0; i < *(_BYTE *)(v20384EC + 4); i = (i + 1) & 0xFFFF )
      call_via_r1(*v20384EC + 16 * i, *(_DWORD *)(*v20384EC + 16 * i + 12));
    *(_BYTE *)(v20384EC + 4) = 0;
  }
  return v2;
}
