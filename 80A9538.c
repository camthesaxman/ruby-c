signed int __fastcall sub_80A9538(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r6@1
  unsigned int v3; // r4@1
  unsigned int v4; // r7@1
  int v5; // r12@3
  unsigned int v6; // r5@3
  int i; // r2@3
  int v8; // r1@4
  signed int result; // r0@8
  int *v10; // r5@9
  int v11; // r7@9
  int v12; // r1@10
  int v13; // r0@11
  int v14; // r1@14
  unsigned int v15; // r5@17
  int j; // r1@17
  int v17; // r2@18
  int v18; // r0@19
  int v19; // r1@22

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( !(itemid_get_pocket_number(a1) << 24) || !v2 )
    goto LABEL_29;
  v5 = (itemid_get_pocket_number(v2) - 1) & 0xFF;
  v6 = 0;
  for ( i = 2 * v5; v6 < LOBYTE(gUnknown_083C1618[i + 1]); v6 = (v6 + 1) & 0xFF )
  {
    v8 = 4 * v6 + gUnknown_083C1618[i];
    if ( *(_WORD *)v8 == v2 )
      v4 = (v4 + *(_WORD *)(v8 + 2)) & 0xFFFF;
  }
  if ( v4 >= v3 )
  {
    v10 = &gUnknown_083C1618[2 * v5];
    v11 = 2 * v5;
    if ( *((_BYTE *)v10 + 4) <= (unsigned int)v2038560 )
      goto LABEL_30;
    v12 = 4 * v2038560 + *v10;
    if ( *(_WORD *)v12 != v2 )
      goto LABEL_30;
    v13 = *(_WORD *)(v12 + 2);
    if ( v13 < v3 )
    {
      v3 = (v3 - v13) & 0xFFFF;
      *(_WORD *)(v12 + 2) = 0;
    }
    else
    {
      *(_WORD *)(v12 + 2) = v13 - v3;
      v3 = 0;
    }
    v14 = 4 * v2038560 + gUnknown_083C1618[v11];
    if ( !*(_WORD *)(v14 + 2) )
      *(_WORD *)v14 = 0;
    if ( v3 )
    {
LABEL_30:
      v15 = 0;
      for ( j = 2 * v5; v15 < LOBYTE(gUnknown_083C1618[v11 + 1]); j = 2 * v5 )
      {
        v17 = 4 * v15 + gUnknown_083C1618[j];
        if ( *(_WORD *)v17 == v2 )
        {
          v18 = *(_WORD *)(v17 + 2);
          if ( v18 < v3 )
          {
            v3 = (v3 - v18) & 0xFFFF;
            *(_WORD *)(v17 + 2) = 0;
          }
          else
          {
            *(_WORD *)(v17 + 2) = v18 - v3;
            v3 = 0;
          }
          v19 = 4 * v15 + gUnknown_083C1618[v11];
          if ( !*(_WORD *)(v19 + 2) )
            *(_WORD *)v19 = 0;
          if ( !v3 )
            break;
        }
        v15 = (v15 + 1) & 0xFF;
      }
    }
    result = 1;
  }
  else
  {
LABEL_29:
    result = 0;
  }
  return result;
}
