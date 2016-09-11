int __fastcall sub_8124CE8(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r4@1
  int v3; // r2@3
  int v5; // [sp+10h] [bp-4h]@0

  v2 = 0;
  ++*(_BYTE *)a1;
  do
  {
    if ( ((signed int)a2 >> v2) & 1 )
    {
      v3 = a1 + 12 * v2;
      if ( (unsigned int)*(_BYTE *)(v3 + 4) >> 7 )
      {
        *(_WORD *)(a1 + 2) |= 1 << v2;
        *(_BYTE *)(v3 + 4) = *(_BYTE *)(v3 + 4) & 0x80 | 1;
      }
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0xF );
  return v5;
}
