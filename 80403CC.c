int __fastcall sub_80403CC(int a1, _WORD *a2)
{
  int v2; // r6@1
  int v3; // r10@1
  int v4; // r7@1
  signed int v5; // r5@1
  __int16 *v6; // r4@1
  int v7; // r5@3
  void ***v8; // r2@3
  void **v9; // r3@3
  int v10; // r0@3
  void ***v11; // r9@4
  __int16 v12; // r3@5
  int v13; // r7@5
  int v14; // r12@5
  signed int v15; // r4@6
  __int16 *v16; // r3@7
  int v17; // r4@11
  _WORD *v18; // r3@13
  __int16 v20; // [sp+0h] [bp-38h]@1
  _WORD *v21; // [sp+8h] [bp-30h]@1
  int v22; // [sp+Ch] [bp-2Ch]@1
  void **v23; // [sp+10h] [bp-28h]@4
  unsigned int v24; // [sp+14h] [bp-24h]@3

  v2 = a1;
  v21 = a2;
  v3 = 0;
  v4 = (unsigned __int16)GetMonData(a1, 11, 0);
  v22 = GetMonData(v2, 56, 0) & 0xFF;
  v5 = 0;
  v6 = &v20;
  do
  {
    *v6 = GetMonData(v2, v5 + 13, 0);
    ++v6;
    ++v5;
  }
  while ( v5 <= 3 );
  v7 = 0;
  v8 = &gLevelUpLearnsets[v4];
  v9 = *v8;
  v10 = *(_WORD *)*v8;
  v24 = 4 * v4;
  if ( v10 != 0xFFFF )
  {
    v11 = &gLevelUpLearnsets[v4];
    v23 = v9;
    do
    {
      v12 = *((_WORD *)v23 + v7);
      v13 = 2 * v7;
      v14 = v7 + 1;
      if ( (unsigned __int16)(v12 & 0xFE00) <= v22 << 9 )
      {
        v15 = 0;
        if ( v20 != (v12 & 0x1FF) )
        {
          v16 = &v20;
          do
          {
            ++v16;
            ++v15;
          }
          while ( v15 <= 3 && *v16 != (*(_WORD *)((char *)gLevelUpLearnsets[v24 / 4] + v13) & 0x1FF) );
        }
        if ( v15 == 4 )
        {
          v17 = 0;
          if ( v3 > 0 && *v21 != (*(_WORD *)((char *)*v11 + v13) & 0x1FF) )
          {
            v18 = v21;
            do
            {
              ++v18;
              ++v17;
            }
            while ( v17 < v3 && *v18 != (*(_WORD *)((char *)gLevelUpLearnsets[v24 / 4] + v13) & 0x1FF) );
          }
          if ( v17 == v3 )
          {
            v3 = (v3 + 1) & 0xFF;
            v21[v17] = *(_WORD *)((char *)*v11 + v13) & 0x1FF;
          }
        }
      }
      ++v7;
    }
    while ( v14 <= 19 && *((_WORD *)*v11 + v14) != 0xFFFF );
  }
  return v3;
}
