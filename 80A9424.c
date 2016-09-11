signed int __fastcall sub_80A9424(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r8@1
  unsigned int v3; // r4@1
  int v4; // r6@2
  int *v5; // r5@2
  int v6; // r7@2
  unsigned int i; // r1@4
  int *v8; // r3@5
  int v9; // r2@6
  int *v10; // r9@8
  int v11; // r3@8
  unsigned int v12; // r1@11
  int *v13; // r2@12
  int *v14; // r1@18
  int v16; // [sp+0h] [bp-11Ch]@2

  v2 = a1;
  v3 = a2;
  if ( !(itemid_get_pocket_number(a1) << 24) )
    return 0;
  v4 = (itemid_get_pocket_number(v2) - 1) & 0xFF;
  v5 = &gUnknown_083C1618[2 * v4];
  memcpy(&v16, *v5, 4 * *((_BYTE *)v5 + 4));
  v6 = 999;
  if ( v4 != 3 )
    v6 = 99;
  for ( i = 0; i < *((_BYTE *)v5 + 4); i = (i + 1) & 0xFF )
  {
    v8 = &v16 + i;
    if ( *(_WORD *)v8 == v2 )
    {
      v9 = *((_WORD *)v8 + 1);
      if ( (signed int)(v9 + v3) <= v6 )
      {
        *((_WORD *)v8 + 1) = v9 + v3;
        v14 = &gUnknown_083C1618[2 * v4];
        goto _080A951A;
      }
      if ( ((v4 - 2) & 0xFFu) <= 1 )
        return 0;
      v3 = (v3 - (v6 - v9)) & 0xFFFF;
      *((_WORD *)v8 + 1) = v6;
      v10 = gUnknown_083C1618;
      v11 = 2 * v4;
      if ( !v3 )
        goto _080A9516;
    }
  }
  v10 = gUnknown_083C1618;
  v11 = 2 * v4;
  if ( !v3 )
    goto _080A9516;
  v12 = 0;
  if ( (unsigned int)LOBYTE(gUnknown_083C1618[v11 + 1]) <= 0 )
  {
_080A94F2:
    if ( !v3 )
      goto _080A9516;
    return 0;
  }
  while ( 1 )
  {
    v13 = &v16 + v12;
    if ( !*(_WORD *)v13 )
      break;
_080A94E6:
    v12 = (v12 + 1) & 0xFF;
    if ( v12 >= LOBYTE(gUnknown_083C1618[v11 + 1]) )
      goto _080A94F2;
  }
  *(_WORD *)v13 = v2;
  if ( v3 > v6 )
  {
    v3 = (v3 - v6) & 0xFFFF;
    *((_WORD *)v13 + 1) = v6;
    goto _080A94E6;
  }
  *((_WORD *)v13 + 1) = v3;
_080A9516:
  v14 = &v10[v11];
_080A951A:
  memcpy(*v14, &v16, 4 * *((_BYTE *)v14 + 4));
  return 1;
}
