int __fastcall sub_8134AC0(int a1)
{
  const char *v1; // r8@1
  signed int v2; // r5@1
  _BYTE *v3; // r10@1
  int v4; // r9@1
  signed int v5; // r6@2
  signed int v6; // r3@2
  _BYTE *v7; // r2@3
  int v8; // r1@8
  int v9; // r0@16
  signed int v10; // r5@17
  _WORD *v11; // r1@17
  signed int v12; // r7@23
  signed int v13; // r5@23
  int v14; // r3@24
  int v15; // r12@24
  unsigned int v16; // r1@25
  unsigned int v17; // r0@25
  int v18; // r0@32
  __int16 v20[6]; // [sp+0h] [bp-3Ch]@23
  __int16 v21[6]; // [sp+Ch] [bp-30h]@23
  int v22; // [sp+18h] [bp-24h]@1
  int v23; // [sp+38h] [bp-4h]@33

  v1 = (const char *)a1;
  v2 = 0;
  v22 = *(_BYTE *)(a1 + 12);
  v3 = (_BYTE *)33705976;
  v4 = 0;
  do
  {
    v5 = 0;
    v6 = 0;
    if ( *(_BYTE *)(v4 + 33705980) == v22 )
    {
      v7 = (_BYTE *)(164 * v2 + 33705980);
      do
      {
        ++v7;
        ++v6;
      }
      while ( v6 <= 3 && *v7 == *(_BYTE *)(a1 + 12 + v6) );
    }
    if ( v6 == 4 )
    {
      v5 = 0;
      v6 = *(_BYTE *)(a1 + 8);
      if ( *v3 == v6 )
      {
        v8 = *v3;
        v6 = 33705972;
        while ( v8 != 255 )
        {
          if ( ++v5 > 6 || *(_BYTE *)(164 * v2 + 0x2024FF8) != v8 )
            goto _08134B54;
        }
        v5 = 7;
      }
    }
_08134B54:
    if ( v5 == 7 )
      break;
    v3 += 164;
    v4 += 164;
    ++v2;
  }
  while ( v2 <= 4 );
  if ( v2 > 4 )
  {
    v10 = 0;
    v11 = (_WORD *)33705970;
    while ( *v11 )
    {
      v11 += 82;
      if ( ++v10 > 4 )
        goto _08134BA8;
    }
    if ( v10 <= 4 )
    {
      v9 = 164 * v10 + 33705968;
      goto _08134B9E;
    }
_08134BA8:
    v20[0] = v2024FF2;
    v21[0] = 0;
    v12 = 1;
    v13 = 1;
    do
    {
      v14 = 0;
      v15 = v13 + 1;
      if ( v12 > 0 )
      {
        while ( 1 )
        {
          v16 = *(_WORD *)(164 * v13 + 0x2024FF2);
          v17 = (unsigned __int16)v20[v14];
          if ( v16 < v17 )
            break;
          if ( v16 <= v17 && ++v14 < v12 )
            continue;
          goto _08134C0A;
        }
        v14 = 0;
        v12 = 1;
        v20[0] = *(_WORD *)(164 * v13 + 0x2024FF2);
        v21[0] = v13;
      }
_08134C0A:
      if ( v14 == v12 )
      {
        v20[v12] = *(_WORD *)(164 * v13 + 0x2024FF2);
        v21[v12++] = v13;
      }
      ++v13;
    }
    while ( v15 <= 4 );
    v18 = (unsigned __int16)Random() % v12;
    memcpy(164 * (unsigned __int16)v21[v18] + 33705968, v1, 164);
  }
  else
  {
    v9 = 164 * v2 + 33705968;
_08134B9E:
    memcpy(v9, v1, 164, v6);
  }
  return v23;
}
