int __fastcall sub_80FF1EC(__int16 a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int16 a5)
{
  int v5; // r2@1
  unsigned int v6; // r10@3
  signed int v7; // r0@5
  unsigned int v8; // r4@5
  signed __int16 v9; // r8@8
  unsigned __int8 v10; // r0@11
  signed __int16 v11; // r6@11
  int v12; // r4@13
  int v13; // r5@13
  __int16 v15; // [sp+0h] [bp-54h]@1
  int v16; // [sp+4h] [bp-50h]@1
  unsigned int v17; // [sp+8h] [bp-4Ch]@1
  int v18; // [sp+Ch] [bp-48h]@1
  int v19; // [sp+14h] [bp-40h]@3
  void **v20; // [sp+1Ch] [bp-38h]@4
  int v21; // [sp+20h] [bp-34h]@4
  char *v22; // [sp+24h] [bp-30h]@4
  unsigned int v23; // [sp+2Ch] [bp-28h]@2
  unsigned __int16 v24; // [sp+30h] [bp-24h]@3
  int v25; // [sp+50h] [bp-4h]@0

  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v5 = 0;
  if ( a4 > 0u )
  {
    v23 = a4 << 16;
    do
    {
      v19 = (v16 - v18 + (signed __int16)v5 + 1) & 0xFFFF;
      v6 = 0;
      v24 = v5 + 1;
      if ( v17 > 0 )
      {
        v20 = &off_83EB6E0 + 8 * a5;
        v22 = (char *)&gDecorations + 32 * a5;
        v21 = v5 * v17;
        do
        {
          v7 = GetBehaviorByMetatileId(*((_WORD *)*v20 + v21 + v6) + 512);
          v8 = v7 << 16;
          if ( (unsigned __int8)sub_8057288(v7) == 1 || v22[17] != 1 && v8 >> 28 )
            v9 = 3072;
          else
            v9 = 0;
          if ( v22[17] == 3
            || (v10 = MapGridGetMetatileBehaviorAt((signed __int16)(v15 + v6), (signed __int16)v19),
                v11 = 1,
                (unsigned __int8)sub_80572B0(v10) != 1) )
          {
            v11 = 0;
          }
          v12 = v21 + v6;
          v13 = (unsigned __int16)sub_80FF1B0(*((_BYTE *)&gDecorations + 32 * a5), (v21 + v6) & 0xFF);
          if ( v13 == 0xFFFF )
            MapGridSetMetatileIdAt(
              (signed __int16)(v15 + v6),
              (signed __int16)v19,
              v9 | ((v11 | 0x200) + *((_WORD *)*v20 + v12)));
          else
            MapGridSetMetatileEntryAt(
              (signed __int16)(v15 + v6),
              (signed __int16)v19,
              v9 | ((v11 | 0x200) + *((_WORD *)*v20 + v12)) | v13);
          v6 = (v6 + 1) & 0xFFFF;
        }
        while ( v6 < v17 );
      }
      v5 = v24;
    }
    while ( v24 < v23 >> 16 );
  }
  return v25;
}
