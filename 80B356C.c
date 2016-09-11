int sub_80B356C()
{
  int v0; // r8@1
  unsigned int v1; // r5@1
  __int16 v2; // r5@3
  unsigned int v3; // r4@4
  unsigned __int8 v4; // r10@4
  int v5; // r2@5
  int *v6; // r2@6
  __int16 v8; // [sp+0h] [bp-28h]@1
  __int16 v9; // [sp+2h] [bp-26h]@1
  unsigned int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+24h] [bp-4h]@17

  v0 = 0;
  GetXYCoordsOneStepInFrontOfPlayer(&v8, &v9);
  v10 = PlayerGetZCoord() & 0xFF;
  v1 = 0;
  do
  {
    *(_WORD *)(8 * v1 + 0x20386A4) = 16;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  v2 = 0;
  do
  {
    v3 = 0;
    v4 = v2 + 1;
    do
    {
      v5 = (unsigned __int8)GetFieldObjectIdByXYZ(v8 - 3 + v3, v9 - 2 + v2, v10);
      if ( v5 != 16 )
      {
        *(_WORD *)(8 * v0 + 0x20386A4) = v5;
        *(_WORD *)(8 * v0 + 0x20386A6) = v3;
        *(_WORD *)(8 * v0 + 0x20386A8) = v2;
        v6 = &dword_30048A0[9 * v5];
        if ( (*((_BYTE *)v6 + 24) & 0xF) == 1 )
          *(_WORD *)(8 * v0 + 0x20386AA) = 0;
        if ( (*((_BYTE *)v6 + 24) & 0xF) == 2 )
          *(_WORD *)(8 * v0 + 0x20386AA) = 1;
        if ( (*((_BYTE *)v6 + 24) & 0xF) == 3 )
          *(_WORD *)(8 * v0 + 0x20386AA) = 2;
        if ( (*((_BYTE *)v6 + 24) & 0xF) == 4 )
          *(_WORD *)(8 * v0 + 0x20386AA) = 3;
        v0 = (v0 + 1) & 0xFF;
      }
      v3 = (v3 + 1) & 0xFF;
    }
    while ( v3 <= 6 );
    v2 = (unsigned __int8)(v2 + 1);
  }
  while ( v4 <= 4u );
  return v11;
}
