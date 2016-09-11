int sub_80BBDD0()
{
  int v0; // r4@1
  int v1; // r6@4
  unsigned int v2; // r5@7
  unsigned int v3; // r3@7
  unsigned int v4; // r0@12
  unsigned int v5; // r4@12
  int v7; // [sp+4h] [bp-30h]@2
  int v8; // [sp+8h] [bp-2Ch]@2
  unsigned int v9; // [sp+Ch] [bp-28h]@2
  unsigned __int8 v10; // [sp+10h] [bp-24h]@5
  int v11; // [sp+30h] [bp-4h]@0

  v0 = (unsigned __int16)VarGet(16468);
  if ( CurrentMapIsSecretBase() << 24 )
  {
    v7 = 160 * v0 + 33714510;
    v8 = 160 * v0 + 33714526;
    v9 = 16;
  }
  else
  {
    v7 = 33717692;
    v8 = 33717704;
    v9 = 12;
  }
  v1 = 0;
  if ( v9 > 0 )
  {
    do
    {
      v10 = v1 + 1;
      if ( *(_BYTE *)(v7 + v1) && *((_BYTE *)&gDecorations + 32 * *(_BYTE *)(v7 + v1) + 17) == 4 )
      {
        v2 = 0;
        v3 = *v202E82C;
        if ( v3 > 0 && *(_WORD *)(*(_DWORD *)(v202E82C + 4) + 20) != v202E8CC + 174 )
        {
          do
            v2 = (v2 + 1) & 0xFF;
          while ( v2 < v3 && *(_WORD *)(24 * v2 + *(_DWORD *)(v202E82C + 4) + 20) != v202E8CC + 174 );
        }
        if ( v2 != *v202E82C )
        {
          v202E8D0 = (unsigned int)*(_BYTE *)(v8 + v1) >> 4;
          v202E8D2 = *(_BYTE *)(v8 + v1) & 0xF;
          v4 = MapGridGetMetatileBehaviorAt(v202E8D0 + 7, v202E8D2 + 7) << 24;
          v5 = v4 >> 24;
          if ( (unsigned __int8)sub_80572D8(BYTE3(v4)) == 1 || (unsigned __int8)sub_80572EC(v5) == 1 )
          {
            v202E8DC = *(_BYTE *)(24 * v2 + *(_DWORD *)(v202E82C + 4) + 1) + 16160;
            VarSet(v202E8DC, *(_WORD *)*(&off_83EB6E0 + 8 * *(_BYTE *)(v7 + v1)));
            v202E8DC = *(_BYTE *)(24 * v2 + *(_DWORD *)(v202E82C + 4));
            FlagReset(v202E8CC + 174);
            show_sprite(v202E8DC, v2025739, v2025738);
            sub_805C0F8(v202E8DC, v2025739, v2025738, v202E8D0, v202E8D2);
            sub_805C78C(v202E8DC, v2025739, v2025738);
            ++v202E8CC;
          }
        }
      }
      v1 = (unsigned __int8)(v1 + 1);
    }
    while ( v10 < v9 );
  }
  return v11;
}
