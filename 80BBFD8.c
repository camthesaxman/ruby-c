int __fastcall sub_80BBFD8(int a1, int a2)
{
  int v2; // r5@1
  unsigned int v3; // r3@1
  signed int v4; // r3@2
  int v5; // r2@2
  signed int v6; // r0@6
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = 0;
  if ( (signed int)*(_BYTE *)(a2 + 3) > 0 )
  {
    while ( 1 )
    {
      v4 = v3 << 16;
      v5 = 12 * (v4 >> 16) + *(_DWORD *)(a2 + 16);
      if ( *(_BYTE *)(v5 + 5) == 8 && *(_WORD *)v2 == *(_WORD *)v5 + 7 && *(_WORD *)(v2 + 2) == *(_WORD *)(v5 + 2) + 7 )
        break;
      v6 = v4 + 0x10000;
      v3 = (unsigned int)(v4 + 0x10000) >> 16;
      if ( v6 >> 16 >= *(_BYTE *)(a2 + 3) )
        return v8;
    }
    v20387DC = *(_DWORD *)(v5 + 8);
  }
  return v8;
}
