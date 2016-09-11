int __fastcall sub_8091AF8(char a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r7@1
  signed int v7; // r10@1
  unsigned int v8; // r5@1
  int i; // r6@1
  int v10; // r1@2
  int v11; // r1@5
  unsigned int v12; // r5@6
  int v13; // r7@7
  char *v14; // r9@7
  int v15; // r2@8
  unsigned int v16; // r5@16
  unsigned int v17; // r5@25
  _DWORD *v18; // r3@26
  int v19; // r1@27
  char *v20; // r0@28
  char v21; // ST00_1@28
  int v22; // r0@28
  unsigned int v23; // r5@33
  int v24; // r2@34
  char *v25; // r0@35
  int v26; // r0@35
  unsigned int j; // r5@43
  int v28; // r1@44
  char v30; // [sp+0h] [bp-34h]@35
  int v31; // [sp+4h] [bp-30h]@1
  int v32; // [sp+8h] [bp-2Ch]@1
  _DWORD *v33; // [sp+10h] [bp-24h]@28

  v6 = a3;
  v31 = a4;
  v32 = a5;
  v7 = a6;
  sub_808D690(a1, a2);
  v8 = 0;
  i = 0;
  do
  {
    v10 = v202FFB4 + 4 * v8;
    if ( *(_BYTE *)(v10 + 2) << 31 )
    {
      *(_DWORD *)(v202FFB4 + 4 * i) = *(_DWORD *)v10;
      i = (i + 1) & 0xFFFF;
    }
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 0x181 );
  v11 = i;
  *(_WORD *)(v202FFB4 + 1548) = i;
  if ( v6 != 255 )
  {
    v12 = 0;
    i = 0;
    if ( v11 << 16 )
    {
      v13 = 4 * v6;
      v14 = (char *)&gUnknown_083B57BC + v13;
      do
      {
        v15 = (unsigned __int8)gSpeciesNames[11
                                           * (unsigned __int16)NationalPokedexNumToSpecies(*(_WORD *)(v202FFB4 + 4 * v12))];
        if ( v15 >= (unsigned int)(unsigned __int8)*v14 && v15 < (unsigned __int8)*v14 + byte_83B57BD[v13]
          || v15 >= (unsigned int)byte_83B57BD[v13 + 1] && v15 < byte_83B57BD[v13 + 1] + byte_83B57BD[v13 + 2] )
        {
          *(_DWORD *)(v202FFB4 + 4 * i) = *(_DWORD *)(v202FFB4 + 4 * v12);
          i = (i + 1) & 0xFFFF;
        }
        v12 = (v12 + 1) & 0xFFFF;
      }
      while ( v12 < *(_WORD *)(v202FFB4 + 1548) );
    }
    *(_WORD *)(v202FFB4 + 1548) = i;
  }
  if ( v31 != 255 )
  {
    v16 = 0;
    for ( i = 0; v16 < *(_WORD *)(v202FFB4 + 1548); v16 = (v16 + 1) & 0xFFFF )
    {
      if ( v31 == (*((_BYTE *)&gBaseStats
                   + 28 * (unsigned __int16)NationalPokedexNumToSpecies(*(_WORD *)(v202FFB4 + 4 * v16))
                   + 25) & 0x7F) )
      {
        *(_DWORD *)(v202FFB4 + 4 * i) = *(_DWORD *)(v202FFB4 + 4 * v16);
        i = (i + 1) & 0xFFFF;
      }
    }
    *(_WORD *)(v202FFB4 + 1548) = i;
  }
  if ( a5 == 255 )
  {
    if ( a6 == 255 )
      goto _08091DA6;
    v32 = a6;
    v7 = 255;
  }
  if ( v7 == 255 )
  {
    v17 = 0;
    i = 0;
    if ( (unsigned int)*(_WORD *)(v202FFB4 + 1548) > 0 )
    {
      v18 = (_DWORD *)33750964;
      do
      {
        v19 = *v18 + 4 * v17;
        if ( *(_BYTE *)(v19 + 2) & 2 )
        {
          v33 = v18;
          v20 = (char *)&gBaseStats + 28 * (unsigned __int16)NationalPokedexNumToSpecies(*(_WORD *)v19);
          v21 = v20[6];
          v22 = (unsigned __int8)v20[7];
          v18 = v33;
          if ( (unsigned __int8)v21 == v32 || v22 == v32 )
          {
            *(_DWORD *)(*v33 + 4 * i) = *(_DWORD *)(*v33 + 4 * v17);
            i = (i + 1) & 0xFFFF;
          }
        }
        v17 = (v17 + 1) & 0xFFFF;
      }
      while ( v17 < *(_WORD *)(v202FFB4 + 1548) );
    }
  }
  else
  {
    v23 = 0;
    for ( i = 0; v23 < *(_WORD *)(v202FFB4 + 1548); v23 = (v23 + 1) & 0xFFFF )
    {
      v24 = v202FFB4 + 4 * v23;
      if ( *(_BYTE *)(v24 + 2) & 2 )
      {
        if ( (v25 = (char *)&gBaseStats + 28 * (unsigned __int16)NationalPokedexNumToSpecies(*(_WORD *)v24),
              v30 = v25[6],
              v26 = (unsigned __int8)v25[7],
              (unsigned __int8)v30 == v32)
          && v26 == v7
          || (unsigned __int8)v30 == v7 && v26 == v32 )
        {
          *(_DWORD *)(v202FFB4 + 4 * i) = *(_DWORD *)(v202FFB4 + 4 * v23);
          i = (i + 1) & 0xFFFF;
        }
      }
    }
  }
  *(_WORD *)(v202FFB4 + 1548) = i;
_08091DA6:
  if ( *(_WORD *)(v202FFB4 + 1548) )
  {
    for ( j = *(_WORD *)(v202FFB4 + 1548); j <= 0x181; j = (j + 1) & 0xFFFF )
    {
      v28 = v202FFB4 + 4 * j;
      *(_WORD *)v28;
      *(_WORD *)v28 = -1;
      *(_BYTE *)(v28 + 2) &= 0xFEu;
      *(_BYTE *)(v202FFB4 + 4 * j + 2) &= 0xFDu;
    }
  }
  return i;
}
