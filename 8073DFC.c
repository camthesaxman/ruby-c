int __fastcall unused_sub_8073DFC(int a1, _DWORD *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r8@1
  unsigned int v4; // r6@1
  int v5; // r3@1
  unsigned int v6; // r2@1
  int v7; // r5@1
  int v8; // r3@7
  unsigned int v9; // r1@7
  char v10; // r0@8
  int v12; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = *(_DWORD *)a1;
  v6 = *(_BYTE *)(*(_DWORD *)a1 + 9) << 25;
  v7 = ((unsigned int)*(_WORD *)(a1 + 6) << 20 >> 25) * (v6 >> 27);
  if ( *(_BYTE *)(*(_DWORD *)a1 + 8) & 1 )
  {
    if ( v6 >> 27 > 0 )
    {
      do
      {
        *(_WORD *)(2 * (*(_DWORD *)(a1 + 4) << 11 >> 22) + 0x202EEC8) = *(_WORD *)(2 * v7
                                                                                 + *(_DWORD *)(*(_DWORD *)a1 + 4));
        v4 = (v4 + 1) & 0xFF;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFE007FF | ((((*(_DWORD *)(a1 + 4) << 11 >> 22) + 1) & 0x3FF) << 11);
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v4 < (unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 9) << 25 >> 27 );
    }
  }
  else if ( v6 >> 27 > 0 )
  {
    do
    {
      *(_WORD *)(2 * (*(_DWORD *)(a1 + 4) << 11 >> 22) + 0x202EAC8) = *(_WORD *)(2 * v7 + *(_DWORD *)(v5 + 4));
      *(_WORD *)(2 * (*(_DWORD *)(a1 + 4) << 11 >> 22) + 0x202EEC8) = *(_WORD *)(2 * v7 + *(_DWORD *)(*(_DWORD *)a1 + 4));
      v4 = (v4 + 1) & 0xFF;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFE007FF | ((((*(_DWORD *)(a1 + 4) << 11 >> 22) + 1) & 0x3FF) << 11);
      v7 = (v7 + 1) & 0xFFFF;
      v5 = *(_DWORD *)a1;
    }
    while ( v4 < (unsigned int)*(_BYTE *)(*(_DWORD *)a1 + 9) << 25 >> 27 );
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFFE007FF | ((unsigned int)*(_WORD *)(a1 + 4) << 21 >> 23 << 11);
  v8 = *(_DWORD *)a1;
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(*(_DWORD *)a1 + 10);
  v9 = (unsigned __int16)(*(_WORD *)(a1 + 6) & 0xF01F) | 32
                                                       * ((((unsigned int)*(_WORD *)(a1 + 6) << 20 >> 25) + 1) & 0x7F);
  *(_WORD *)(a1 + 6) = v9;
  if ( (signed int)(v9 << 20 >> 25) >= (*(_BYTE *)(v8 + 11) & 0x1F) )
  {
    v10 = *(_BYTE *)(a1 + 9);
    if ( *(_BYTE *)(v2 + 9) )
      *(_BYTE *)(v2 + 9) = v10 - 1;
    *(_WORD *)(v2 + 6) &= 0xF01Fu;
  }
  *v3 |= 1 << ((unsigned int)*(_WORD *)(v2 + 4) << 21 >> 27);
  return v12;
}
