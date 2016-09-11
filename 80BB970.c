int __fastcall sub_80BB970(int a1)
{
  int v1; // r5@1
  unsigned int i; // r2@1
  int v3; // r1@2
  int v4; // r3@2
  unsigned __int16 v5; // r7@2
  unsigned int v6; // r2@3
  int v7; // r6@3
  __int16 v8; // r0@5
  unsigned int v9; // r3@5
  __int16 *v10; // r2@6
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  for ( i = 0; i < *(_BYTE *)(v1 + 3); i = v5 )
  {
    v3 = 12 * i;
    v4 = 12 * i + *(_DWORD *)(v1 + 16);
    v5 = i + 1;
    if ( *(_BYTE *)(v4 + 5) == 8 )
    {
      v6 = 0;
      v7 = v3;
      while ( *(_BYTE *)(160 * v6 + 0x202713C) != *(_DWORD *)(v4 + 8) )
      {
        v6 = (v6 + 1) & 0xFFFF;
        if ( v6 > 0x13 )
          goto _080BBA02;
      }
      v8 = MapGridGetMetatileIdAt(*(_WORD *)v4 + 7, *(_WORD *)(v4 + 2) + 7);
      v9 = 0;
      while ( 1 )
      {
        v10 = &gUnknown_083D1358[2 * v9];
        if ( (unsigned __int16)*v10 == v8 )
          break;
        v9 = (v9 + 1) & 0xFFFF;
        if ( v9 > 6 )
          goto _080BBA02;
      }
      MapGridSetMetatileIdAt(
        *(_WORD *)(v7 + *(_DWORD *)(v1 + 16)) + 7,
        *(_WORD *)(v7 + *(_DWORD *)(v1 + 16) + 2) + 7,
        v10[1] | 0xC00);
    }
_080BBA02:
    ;
  }
  return v12;
}
