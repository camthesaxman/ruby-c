int __fastcall unused_sub_8074020(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  int v3; // r2@2
  signed int v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 9);
  if ( v2 )
  {
    *(_BYTE *)(v1 + 9) = v2 - 1;
  }
  else
  {
    v3 = *(_DWORD *)v1;
    v4 = (unsigned int)*(_BYTE *)(*(_DWORD *)v1 + 11) >> 5;
    if ( v4 )
    {
      if ( v4 >= 0 && v4 <= 2 )
        ResetPaletteStructByUid(*(_WORD *)v3);
    }
    else
    {
      *(_WORD *)(v1 + 6) &= 0xF01Fu;
      *(_BYTE *)(v1 + 8) = *(_BYTE *)(v3 + 10);
      *(_BYTE *)(v1 + 9) = *(_BYTE *)(v3 + 12);
      *(_DWORD *)(v1 + 4) = *(_DWORD *)(v1 + 4) & 0xFFE007FF | ((unsigned int)*(_WORD *)(v1 + 4) << 21 >> 23 << 11);
    }
  }
  return v6;
}
