int sub_8072E74()
{
  signed int v0; // r3@1
  signed int v1; // r1@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  if ( (signed int)(unsigned __int8)byte_30006C0 > 0 )
  {
    v1 = 33745368;
    do
    {
      v40000D4 = *(_DWORD *)v1;
      v40000D8 = *(_DWORD *)(v1 + 4);
      v40000DC = ((unsigned int)*(_WORD *)(v1 + 8) >> 1) | 0x80000000;
      v1 += 12;
      ++v0;
    }
    while ( v0 < (unsigned __int8)byte_30006C0 );
  }
  byte_30006C0 = 0;
  return v3;
}
