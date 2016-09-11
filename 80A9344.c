signed int __fastcall sub_80A9344(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r6@1
  unsigned int v3; // r4@1
  int v4; // r1@2
  int v5; // r5@2
  unsigned int v6; // r3@4
  int v7; // r2@4
  int v8; // r9@4
  unsigned int v9; // r7@5
  int v10; // r1@6
  int v11; // r1@7
  unsigned int i; // r3@12
  signed int result; // r0@18

  v2 = a1;
  v3 = a2;
  if ( !(itemid_get_pocket_number(a1) << 24) )
    goto _080A9408;
  v4 = (itemid_get_pocket_number(v2) - 1) & 0xFF;
  v5 = 999;
  if ( v4 != 3 )
    v5 = 99;
  v6 = 0;
  v7 = 2 * v4;
  v8 = 2 * v4;
  if ( (unsigned int)LOBYTE(gUnknown_083C1618[2 * v4 + 1]) > 0 )
  {
    v9 = (v4 - 2) & 0xFF;
    do
    {
      v10 = 4 * v6 + gUnknown_083C1618[v7];
      if ( *(_WORD *)v10 == v2 )
      {
        v11 = *(_WORD *)(v10 + 2);
        if ( (signed int)(v11 + v3) <= v5 )
          goto _080A9414;
        if ( v9 <= 1 )
          goto _080A9408;
        v3 = (v3 - (v5 - v11)) & 0xFFFF;
        if ( !v3 )
          goto _080A9414;
      }
      v6 = (v6 + 1) & 0xFF;
    }
    while ( v6 < LOBYTE(gUnknown_083C1618[v7 + 1]) );
  }
  if ( !v3 )
    goto _080A9414;
  for ( i = 0; i < LOBYTE(gUnknown_083C1618[v8 + 1]); i = (i + 1) & 0xFF )
  {
    if ( !*(_WORD *)(4 * i + gUnknown_083C1618[v8]) )
    {
      if ( v3 <= v5 )
        goto _080A9414;
      v3 = (v3 - v5) & 0xFFFF;
    }
  }
  if ( v3 )
_080A9408:
    result = 0;
  else
_080A9414:
    result = 1;
  return result;
}
