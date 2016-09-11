int __fastcall sub_8040574(int a1)
{
  int v1; // r6@1
  int v2; // r10@1
  int v3; // r4@1
  int result; // r0@2
  signed int v5; // r5@3
  __int16 *v6; // r4@3
  int v7; // r5@5
  void ***v8; // r9@6
  __int16 v9; // r3@7
  int v10; // r7@7
  int v11; // r12@7
  signed int v12; // r4@8
  __int16 *v13; // r3@9
  int v14; // r4@13
  char *v15; // r3@15
  __int16 v16; // [sp+0h] [bp-5Ch]@3
  char v17; // [sp+8h] [bp-54h]@6
  int v18; // [sp+30h] [bp-2Ch]@1
  char *v19; // [sp+34h] [bp-28h]@6
  unsigned int v20; // [sp+38h] [bp-24h]@3

  v1 = a1;
  v2 = 0;
  v3 = (unsigned __int16)GetMonData(a1, 65, 0);
  v18 = (unsigned __int8)GetMonData(v1, 56, 0);
  if ( v3 == 412 )
  {
    result = 0;
  }
  else
  {
    v5 = 0;
    v20 = 4 * v3;
    v6 = &v16;
    do
    {
      *v6 = GetMonData(v1, v5 + 13, 0);
      ++v6;
      ++v5;
    }
    while ( v5 <= 3 );
    v7 = 0;
    if ( *(_WORD *)gLevelUpLearnsets[v20 / 4] != 0xFFFF )
    {
      v8 = &gLevelUpLearnsets[v20 / 4];
      v19 = &v17;
      do
      {
        v9 = *((_WORD *)*v8 + v7);
        v10 = 2 * v7;
        v11 = v7 + 1;
        if ( (unsigned __int16)(v9 & 0xFE00) <= v18 << 9 )
        {
          v12 = 0;
          if ( v16 != (v9 & 0x1FF) )
          {
            v13 = &v16;
            do
            {
              ++v13;
              ++v12;
            }
            while ( v12 <= 3 && *v13 != (*(_WORD *)((char *)gLevelUpLearnsets[v20 / 4] + v10) & 0x1FF) );
          }
          if ( v12 == 4 )
          {
            v14 = 0;
            if ( v2 > 0 && *(_WORD *)v19 != (*(_WORD *)((char *)*v8 + v10) & 0x1FF) )
            {
              v15 = &v17;
              do
              {
                v15 += 2;
                ++v14;
              }
              while ( v14 < v2 && *(_WORD *)v15 != (*(_WORD *)((char *)gLevelUpLearnsets[v20 / 4] + v10) & 0x1FF) );
            }
            if ( v14 == v2 )
            {
              v2 = (v2 + 1) & 0xFF;
              *(_WORD *)&v19[2 * v14] = *(_WORD *)((char *)*v8 + v10) & 0x1FF;
            }
          }
        }
        ++v7;
      }
      while ( v11 <= 19 && *((_WORD *)*v8 + v11) != 0xFFFF );
    }
    result = v2;
  }
  return result;
}
