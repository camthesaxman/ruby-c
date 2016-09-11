int sub_804FE70()
{
  __int16 *v0; // r1@4
  __int16 *v1; // r2@4
  signed int v2; // r6@4
  signed int v3; // r6@8
  int *v4; // r7@8
  int v5; // r9@9
  __int16 *v6; // r8@9
  __int16 v7; // r5@11
  int v8; // r4@11
  _WORD *v9; // r4@12
  int v10; // r1@12
  _WORD *v11; // r1@14
  __int16 v12; // r0@14
  unsigned int v13; // r2@18
  int v14; // r0@22
  signed int v15; // r1@24
  signed int v16; // r6@29
  __int16 *v17; // r1@30
  int v19; // [sp+0h] [bp-24h]@9
  int v20; // [sp+20h] [bp-4h]@0

  if ( v202E8CC )
  {
    if ( word_3002F94 )
    {
      word_3002A30[0] = word_3002F94;
      gRecvCmds[0] = 17476;
      word_3002F94 = 0;
    }
    v0 = &word_3002A22;
    v1 = &word_3002A32;
    v2 = 2;
    do
    {
      if ( *v1 )
        *v0 = 17476;
      ++v0;
      ++v1;
      --v2;
    }
    while ( v2 >= 0 );
  }
  v3 = 0;
  v4 = &dword_3004854;
  if ( (signed int)*(_BYTE *)(dword_3004854 + 136) > 0 )
  {
    v19 = 0;
    v5 = 0;
    v6 = word_3002A30;
    while ( gRecvCmds[v19] != 17476 )
    {
_0805003E:
      ++v19;
      v5 += 6;
      ++v6;
      ++v3;
      v4 = &dword_3004854;
      if ( v3 >= *(_BYTE *)(dword_3004854 + 136) )
        goto _0805005C;
    }
    v7 = *(_WORD *)(*v4 + 162 + v19 * 2);
    v8 = (unsigned __int16)*v6;
    if ( v8 == 17699 )
    {
      sub_804FD30(17699);
      v9 = (_WORD *)(*v4 + 318);
      v10 = *v9 + *(_WORD *)(*v4 + 86) / 55;
      *v9 = v10;
      if ( (unsigned int)(v10 << 16) > 0x3E70000 )
        *v9 = 1000;
      sub_804FC48(0x4523u, (unsigned __int8)v7);
      v11 = (_WORD *)(*v4 + 332 + v5);
      v12 = *v11 + 1;
    }
    else if ( v8 == 21554 )
    {
      sub_804FD30(21554);
      *(_WORD *)(*v4 + 318) += *(_WORD *)(*v4 + 86) / 70;
      sub_804FC48(0x5432u, (unsigned __int8)v7);
      v11 = (_WORD *)(*v4 + 334 + v5);
      v12 = *v11 + 1;
    }
    else
    {
      if ( v8 != 9029 )
        goto _0804FFD6;
      sub_804FC48(0x2345u, (unsigned __int8)v7);
      sub_804FD30(9029);
      v11 = (_WORD *)(*v4 + 336 + v5);
      v13 = *v11;
      if ( v13 > 0x3E6 )
      {
_0804FFCC:
        if ( *v6 == 9029 )
        {
_0804FFE4:
          v15 = *(_WORD *)(dword_3004854 + 86);
          if ( v15 <= 1500 )
            m4aMPlayTempoControl(&unk_3007380, 256);
          else
            m4aMPlayTempoControl(&unk_3007380, ((v15 - 750) / 20 + 256) & 0xFFFF);
          goto _0805003E;
        }
_0804FFD6:
        v14 = (unsigned __int16)*v6;
        if ( v14 != 17699 && v14 != 21554 )
          goto _0805003E;
        goto _0804FFE4;
      }
      v12 = v13 + 1;
    }
    *v11 = v12;
    goto _0804FFCC;
  }
_0805005C:
  if ( v202E8CC )
  {
    v16 = 0;
    if ( (signed int)*(_BYTE *)(dword_3004854 + 136) > 0 )
    {
      v17 = gRecvCmds;
      do
      {
        *v17 = 0;
        v17[8] = 0;
        ++v17;
        ++v16;
      }
      while ( v16 < *(_BYTE *)(dword_3004854 + 136) );
    }
  }
  return v20;
}
