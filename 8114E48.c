signed int __fastcall sub_8114E48(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int v4; // r1@2
  int v5; // r3@2
  int v6; // r2@4
  int v7; // r3@11
  unsigned int v8; // r0@12
  int v9; // r2@13
  int v10; // r1@22
  int v11; // r2@24
  signed int v12; // r1@26
  signed int v13; // r3@26
  signed int v14; // r0@26
  signed int v15; // r6@26
  signed int v16; // r7@26
  _BYTE *v17; // r1@28
  int v18; // r1@29
  signed int v19; // r0@29
  signed int i; // r3@35
  _BYTE *v22; // r1@37

  v2 = a1;
  v3 = a2;
  if ( !v201E8C4 )
    return 1;
  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v6 = v5 + 32 * (a1 - 1);
      if ( *(_BYTE *)(v6 + 33638596) )
        break;
      if ( *(_BYTE *)(v6 + 33640644) )
        break;
      if ( ++v5 > 31 )
        break;
      if ( !a1 )
      {
        v4 = 1;
        break;
      }
    }
  }
  else
  {
    v4 = 1;
  }
  if ( v5 == 32 )
    v4 = ((v4 << 24) + 0x1000000) >> 24;
  v7 = 0;
  if ( a1 == 63 )
  {
    v8 = (v4 << 24) + 0x1000000;
_08114EF8:
    v4 = v8 >> 24;
  }
  else
  {
    while ( 1 )
    {
      v9 = v7 + 32 * (a1 + 1);
      if ( *(_BYTE *)(v9 + 33638596) )
        break;
      if ( *(_BYTE *)(v9 + 33640644) )
        break;
      if ( ++v7 > 31 )
        break;
      if ( a1 == 63 )
      {
        v8 = (v4 << 24) + 0x1000000;
        goto _08114EF8;
      }
    }
  }
  if ( v7 == 32 )
    v4 = ((v4 << 24) + 0x1000000) >> 24;
  if ( v4 == 2 )
    return 1;
  v10 = (v3 - 2) & 0xFF;
  if ( (v3 - 2) & 0x80 )
    v10 = 0;
  v11 = (v3 + 2) & 0xFF;
  if ( (char)(v3 + 2) > 63 )
    v11 = 63;
  v12 = v10 << 24;
  v13 = v12 >> 24;
  v14 = v11 << 24;
  v11 = (char)v11;
  v15 = v12;
  v16 = v14;
  if ( v12 >> 24 < (char)v11 && v2 )
  {
    do
    {
      v17 = *(_BYTE **)(4 * (v13 >> 1) + ((v2 - 1) << 7) + 0x20188C4);
      if ( v13 & 1 )
      {
        v18 = *v17;
        v19 = 240;
      }
      else
      {
        v18 = *v17;
        v19 = 15;
      }
      if ( v19 & v18 )
        return 1;
    }
    while ( ++v13 < v11 && v2 );
  }
  for ( i = v15 >> 24; i < v16 >> 24 && v2 != 63; ++i )
  {
    v22 = *(_BYTE **)(4 * (i >> 1) + ((v2 + 1) << 7) + 0x20188C4);
    if ( i & 1 )
    {
      if ( *v22 & 0xF0 )
        return 1;
    }
    else if ( *v22 & 0xF )
    {
      return 1;
    }
  }
  return 0;
}
