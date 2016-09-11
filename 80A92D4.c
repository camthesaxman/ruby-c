signed int __fastcall sub_80A92D4(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  signed int result; // r0@3
  int v5; // r0@4
  unsigned int v6; // r3@4
  int v7; // r2@4
  int v8; // r1@5
  unsigned int v9; // r0@6

  v2 = a1;
  v3 = a2;
  if ( itemid_get_pocket_number(a1) << 24
    && (v5 = itemid_get_pocket_number(v2),
        v6 = 0,
        v7 = 8 * (v5 - 1) & 0x7FF,
        (unsigned int)*((_BYTE *)&gUnknown_083C1618[1] + v7) > 0) )
  {
    while ( 1 )
    {
      v8 = 4 * v6 + *(int *)((char *)gUnknown_083C1618 + v7);
      if ( *(_WORD *)v8 == v2 )
      {
        v9 = *(_WORD *)(v8 + 2);
        if ( v9 >= v3 )
          break;
        v3 = (v3 - v9) & 0xFFFF;
        if ( !v3 )
          break;
      }
      v6 = (v6 + 1) & 0xFF;
      if ( v6 >= *((_BYTE *)&gUnknown_083C1618[1] + v7) )
        goto _080A9336;
    }
    result = 1;
  }
  else
  {
_080A9336:
    result = 0;
  }
  return result;
}
