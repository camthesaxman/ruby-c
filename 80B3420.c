int sub_80B3420()
{
  unsigned int v0; // r1@1
  unsigned int v1; // r4@2
  signed int v2; // r8@2
  int v3; // r7@2
  signed int v4; // r4@3
  signed int v5; // r6@3
  unsigned int v6; // r5@3
  signed int v7; // r3@5
  int v8; // r2@6
  signed int v9; // r0@16
  __int16 v11; // [sp+0h] [bp-24h]@1
  __int16 v12; // [sp+2h] [bp-22h]@1
  int v13; // [sp+20h] [bp-4h]@18

  GetXYCoordsOneStepInFrontOfPlayer(&v11, &v12);
  v11 -= 3;
  v12 -= 3;
  v0 = 0;
  do
  {
    v1 = 0;
    v2 = v0 << 16;
    v3 = (signed __int16)v0;
    do
    {
      v4 = v1 << 16;
      v5 = v4 >> 16;
      v6 = (unsigned __int16)MapGridGetMetatileIdAt(v11 + (v4 >> 16), v12 + v3);
      if ( v3 == 5 || v5 == 6 )
      {
        if ( v6 > 0x1FF )
          sub_80B33D0(SHIWORD(v4), v2 >> 16, *(_DWORD *)(*(_DWORD *)(v202E828 + 20) + 12) + 16 * (v6 - 512));
        else
          sub_80B33D0(SHIWORD(v4), v2 >> 16, *(_DWORD *)(*(_DWORD *)(v202E828 + 16) + 12) + 16 * v6);
      }
      else
      {
        v7 = (unsigned __int8)MapGridGetMetatileLayerTypeAt(v11 + v5, v12 + v3);
        if ( v6 > 0x1FF )
          v8 = *(_DWORD *)(*(_DWORD *)(v202E828 + 20) + 12) + 16 * (v6 - 512);
        else
          v8 = *(_DWORD *)(*(_DWORD *)(v202E828 + 16) + 12) + 16 * v6;
        BuyMenuDrawMapMetatile(v4 >> 16, v3, v8, v7);
      }
      if ( !v3 && v4 >> 16 && v4 >> 16 != 6 )
        sub_80B32EC((int)gBG1TilemapBuffer, 2 * HIWORD(v4), 64);
      v9 = v4 + 0x10000;
      v1 = (unsigned int)(v4 + 0x10000) >> 16;
    }
    while ( v9 >> 16 <= 6 );
    v0 = (unsigned int)(v2 + 0x10000) >> 16;
  }
  while ( (v2 + 0x10000) >> 16 <= 5 );
  return v13;
}
