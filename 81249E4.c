signed int __fastcall sub_81249E4(int a1)
{
  int v1; // r5@1
  unsigned int i; // r12@1
  int v3; // r0@2
  int v4; // r3@2
  _DWORD *v5; // r6@2
  int v6; // r0@2
  int v7; // r1@5
  unsigned int v8; // r2@7
  int v9; // r1@7
  unsigned int v10; // r2@9
  int v11; // r1@9
  int v12; // r0@10
  int v13; // r2@12
  unsigned int v14; // r4@14
  int v15; // r2@14
  unsigned int v16; // r4@16
  int v17; // r2@16
  int v18; // r2@18
  unsigned int v19; // r4@20
  int v20; // r2@20
  int v21; // r1@26
  signed int result; // r0@27
  char v23; // r2@28
  char v24; // r0@29

  v1 = a1;
  for ( i = 0; i < *(_BYTE *)(v1 + 8); i = (i + 1) & 0xFF )
  {
    v3 = 2 * (*(_WORD *)(v1 + 6) + i);
    v4 = v3 + 33746632;
    v5 = (_DWORD *)(v3 + 33745608);
    v6 = *(_BYTE *)v1 & 0x7F;
    if ( v6 == 1 )
    {
      v7 = *(_BYTE *)(v1 + 3);
      if ( (*(_DWORD *)v4 & 0x1Fu) + v7 <= 0x1F )
        *(_BYTE *)v4 = *(_BYTE *)v4 & 0xE0 | ((*(_BYTE *)v4 & 0x1F) + v7) & 0x1F;
      v8 = *(_DWORD *)v4 << 22;
      v9 = *(_BYTE *)(v1 + 3);
      if ( (v8 >> 27) + v9 <= 0x1F )
        *(_WORD *)v4 = *(_WORD *)v4 & 0xFC1F | 32 * (((*(_DWORD *)v4 << 22 >> 27) + v9) & 0x1F);
      v10 = *(_DWORD *)v4 << 17;
      v11 = *(_BYTE *)(v1 + 3);
      if ( (v10 >> 27) + v11 > 0x1F )
        continue;
      v12 = (*(_DWORD *)v4 << 17 >> 27) + v11;
    }
    else
    {
      if ( v6 != 2 )
        continue;
      if ( (signed int)*(_BYTE *)(v1 + 3) >= 0 )
      {
        v18 = *(_BYTE *)(v1 + 3);
        if ( (*(_DWORD *)v4 & 0x1F) + v18 <= (*v5 & 0x1F) )
          *(_BYTE *)v4 = *(_BYTE *)v4 & 0xE0 | ((*(_BYTE *)v4 & 0x1F) + v18) & 0x1F;
        v19 = *(_DWORD *)v4 << 22;
        v20 = *(_BYTE *)(v1 + 3);
        if ( (signed int)((v19 >> 27) + v20) <= *v5 << 22 >> 27 )
          *(_WORD *)v4 = *(_WORD *)v4 & 0xFC1F | 32 * (((*(_DWORD *)v4 << 22 >> 27) + v20) & 0x1F);
        v16 = *(_DWORD *)v4 << 17;
        v17 = *(_BYTE *)(v1 + 3);
        if ( (signed int)((v16 >> 27) + v17) > *v5 << 17 >> 27 )
          continue;
      }
      else
      {
        v13 = *(_BYTE *)(v1 + 3);
        if ( (*(_DWORD *)v4 & 0x1F) + v13 >= (*v5 & 0x1F) )
          *(_BYTE *)v4 = *(_BYTE *)v4 & 0xE0 | ((*(_BYTE *)v4 & 0x1F) + v13) & 0x1F;
        v14 = *(_DWORD *)v4 << 22;
        v15 = *(_BYTE *)(v1 + 3);
        if ( (signed int)((v14 >> 27) + v15) >= *v5 << 22 >> 27 )
          *(_WORD *)v4 = *(_WORD *)v4 & 0xFC1F | 32 * (((*(_DWORD *)v4 << 22 >> 27) + v15) & 0x1F);
        v16 = *(_DWORD *)v4 << 17;
        v17 = *(_BYTE *)(v1 + 3);
        if ( (signed int)((v16 >> 27) + v17) < *v5 << 17 >> 27 )
          continue;
      }
      v12 = (v16 >> 27) + v17;
    }
    *(_BYTE *)(v4 + 1) = *(_BYTE *)(v4 + 1) & 0x83 | 4 * (v12 & 0x1F);
  }
  v21 = *(_BYTE *)(v1 + 2);
  *(_BYTE *)(v1 + 2) = v21 + 1;
  if ( v21 << 24 == *(_BYTE *)(v1 + 11) << 27 >> 3 )
  {
    *(_BYTE *)(v1 + 2) = 0;
    *(_BYTE *)(v1 + 3) = -*(_BYTE *)(v1 + 3);
    v23 = *(_BYTE *)v1;
    if ( (*(_BYTE *)v1 & 0x7F) == 1 )
      v24 = (v23 & 0x7F) + 1;
    else
      v24 = (v23 & 0x7F) - 1;
    *(_BYTE *)v1 = v23 & 0x80 | v24 & 0x7F;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
