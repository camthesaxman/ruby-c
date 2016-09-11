int __fastcall sub_80F4944(_BYTE *a1)
{
  int v1; // r2@1
  unsigned int v2; // r4@1
  unsigned int v3; // r3@1
  unsigned int i; // r4@6
  int v6; // [sp+14h] [bp-4h]@0

  v1 = 0;
  v2 = v2008FE4;
  v3 = (unsigned int)v2008FE4 >> 1;
  if ( v2008FE4 != v3 )
  {
    do
    {
      if ( *a1 <= (unsigned int)*(_BYTE *)(4 * v3 + 0x200893C) )
        v1 = (v3 + 1) & 0xFFFF;
      else
        v2 = v3;
      v3 = (v1 + (signed int)(v2 - v1) / 2) & 0xFFFF;
    }
    while ( v2 != v3 );
  }
  for ( i = v2008FE4; i > v3; i = (i - 1) & 0xFFFF )
    *(_DWORD *)(4 * i + 0x200893C) = *(_DWORD *)(4 * (i - 1) + 0x200893C);
  *(_DWORD *)(4 * v3 + 0x200893C) = *(_DWORD *)a1;
  ++v2008FE4;
  return v6;
}
