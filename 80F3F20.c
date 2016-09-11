int __fastcall sub_80F3F20(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r8@1
  unsigned int v4; // r5@1
  int v5; // r0@6
  int v6; // r2@6
  int v8; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v4 + 0x2008800) )
    {
      *(_WORD *)(*(_DWORD *)(4 * v4 + 0x2008800) + 46) = v4;
      *(_WORD *)(*(_DWORD *)(4 * v4 + 0x2008800) + 48) = 16 * v4 + 1;
      *(_WORD *)(*(_DWORD *)(4 * v4 + 0x2008800) + 50) = v2;
      *(_WORD *)(*(_DWORD *)(4 * v4 + 0x2008800) + 52) = v4;
      if ( v3 && v2 == 9 )
      {
        v5 = sub_80F3E24(*(_DWORD *)(4 * v4 + 0x2008800));
        sub_80F3FAC(v5);
        v6 = *(_DWORD *)(4 * v4 + 0x2008800);
        *(_DWORD *)(v6 + 28) = sub_80F3E04;
        *(_BYTE *)(v6 + 62) &= 0xFBu;
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(4 * v4 + 0x2008800) + 28) = sub_80F3E9C;
      }
    }
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 9 );
  return v8;
}
