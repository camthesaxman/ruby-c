int sub_8013FE8()
{
  char v0; // r0@2
  char v1; // r0@4
  int v2; // r1@4
  int v3; // r2@5
  int v4; // r4@8
  int v5; // r3@9
  int v6; // r0@9
  char v7; // r0@10
  __int16 v8; // r0@13
  int v9; // r3@15
  int v10; // r6@21
  int v11; // r4@23
  int v12; // r2@24
  unsigned int v13; // r7@27
  char *v14; // r4@28
  int v15; // r6@32
  int v16; // r0@42
  signed int v17; // r0@44
  int v18; // r4@52
  int v19; // r0@53
  int v20; // r0@54
  unsigned __int8 v21; // r0@54
  int v22; // r1@54
  int v23; // r2@54
  int *v24; // r0@54
  int v25; // r1@40
  int v26; // r0@57
  signed int v27; // r0@59
  int v28; // r4@65
  int v29; // r4@68
  int v30; // r0@70
  unsigned __int8 v31; // r0@70
  int v32; // r0@73
  unsigned int v34; // [sp+0h] [bp-2Ch]@1
  int v35; // [sp+28h] [bp-4h]@0

  v34 = 4;
  v2024C07 = *(_BYTE *)(v2024A7E + 0x2024A7A);
  if ( !(v20160A6 & gBitTable[v2024C07]) )
  {
    v2024C0D = 1;
    v201601F = 1;
    v20160E7 = 0;
    v2024C68 = 0;
    v2024C0E = 0;
    v2024D24 = 0;
    v2024BE5 = *(_BYTE *)(v2024C07 + 0x201608C);
    v2024BE4 = v2024BE5;
    if ( *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 4 )
    {
      *(_BYTE *)(16 * v2024C07 + 0x2024D28) &= 0xFBu;
      v2024BE8 = 165;
      v2024BE6 = 165;
      v2024C6C |= 0x800u;
      v1 = sub_801B5C0(165, 0);
      v2 = v2024C07 + 90128;
_08014200:
      *(_BYTE *)(v2 + 0x2000000) = v1;
_08014280:
      if ( battle_side_get_owner(v2024C07) << 24 )
        word_3004304 = v2024BE6;
      else
        word_3004302 = v2024BE6;
      v10 = (battle_side_get_owner(v2024C07) ^ 1) & 0xFF;
      if ( *(_BYTE *)(12 * v10 + 0x2024C88) )
      {
        if ( !*((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 6) )
        {
          v11 = battle_side_get_owner(v2024C07);
          if ( v11 << 24 != battle_side_get_owner(*(_BYTE *)(12 * v10 + 0x2024C89)) << 24 )
          {
            v12 = *(_BYTE *)(12 * v10 + 0x2024C89);
            if ( *(_WORD *)(88 * v12 + 0x2024AA8) )
            {
              v2024C08 = *(_BYTE *)(12 * v10 + 0x2024C89);
_080146AC:
              v2024C10 = *(&gUnknown_081D6BBC + *((_BYTE *)&gBattleMoves + 12 * v2024BE6));
              v0 = 10;
              goto _080146CC;
            }
          }
        }
      }
      if ( v20239F8 & 1 )
      {
        v13 = *(_BYTE *)(12 * v10 + 0x2024C88);
        if ( !*(_BYTE *)(12 * v10 + 0x2024C88) )
        {
          v14 = (char *)&gBattleMoves + 12 * v2024BE6;
          if ( (v14[1] || v14[6] != 16)
            && *(_BYTE *)(88 * *(_BYTE *)(v2024C07 + 0x2016010) + 0x2024AA0) != 31
            && v14[2] == 13 )
          {
            v15 = (unsigned __int8)battle_side_get_owner(v2024C07);
            v2024A60 = v13;
            if ( v13 < v2024A68 )
            {
              do
              {
                if ( v15 != (unsigned __int8)battle_side_get_owner(v2024A60)
                  && *(_BYTE *)(v2024C07 + 0x2016010) != v2024A60
                  && *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == 31
                  && (unsigned __int8)sub_801E3B4(v2024A60) < v34 )
                {
                  v34 = sub_801E3B4(v2024A60) & 0xFF;
                }
                ++v2024A60;
              }
              while ( v2024A60 < (unsigned int)v2024A68 );
            }
            if ( v34 != 4 )
            {
              v2024A60 = *(_BYTE *)(v34 + 33704570);
              v25 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
              sub_81074C4();
              *(_BYTE *)(20 * v2024A60 + 0x2024D68) |= 2u;
              v2024C08 = v2024A60;
              goto _080146AC;
            }
            if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE8 + 6) & 4 )
            {
              v16 = battle_side_get_owner(v2024C07) << 24;
              if ( v16 )
              {
                if ( Random(v16) & 1 )
                  v17 = 0;
                else
                  v17 = 2;
              }
              else if ( Random(0) & 1 )
              {
                v17 = 1;
              }
              else
              {
                v17 = 3;
              }
              v2024C08 = battle_get_side_with_given_state(v17);
            }
            else
            {
              v2024C08 = *(_BYTE *)(v2024C07 + 0x2016010);
            }
            if ( !(v2024C0C & gBitTable[v2024C08]) )
              goto _080146AC;
            v18 = battle_side_get_owner(v2024C07);
            if ( v18 << 24 != battle_side_get_owner(v2024C08) << 24 )
            {
              v19 = v2024C08;
              goto _0801469A;
            }
            v20 = battle_get_per_side_status(v2024C07);
            v21 = battle_get_side_with_given_state((v20 ^ 1) & 0xFF);
            v2024C08 = v21;
            v22 = v2024C0C;
            v23 = v21;
            v24 = &gBitTable[v21];
_08014690:
            if ( !(v22 & *v24) )
              goto _080146AC;
            v19 = v23;
_0801469A:
            v32 = battle_get_per_side_status(v19);
            v2024C08 = battle_get_side_with_given_state((v32 ^ 2) & 0xFF);
            goto _080146AC;
          }
        }
        if ( v20239F8 & 1 && *((_BYTE *)&gBattleMoves + 12 * v2024BE8 + 6) & 4 )
        {
          v26 = battle_side_get_owner(v2024C07) << 24;
          if ( v26 )
          {
            if ( Random(v26) & 1 )
              v27 = 0;
            else
              v27 = 2;
          }
          else if ( Random(0) & 1 )
          {
            v27 = 1;
          }
          else
          {
            v27 = 3;
          }
          v2024C08 = battle_get_side_with_given_state(v27);
          if ( !(v2024C0C & gBitTable[v2024C08]) )
            goto _080146AC;
          v28 = battle_side_get_owner(v2024C07);
          if ( v28 << 24 == battle_side_get_owner(v2024C08) << 24 )
            goto _080146AC;
          v19 = v2024C08;
          goto _0801469A;
        }
      }
      v2024C08 = *(_BYTE *)(v2024C07 + 0x2016010);
      if ( !(v2024C0C & gBitTable[v2024C08]) )
        goto _080146AC;
      v29 = battle_side_get_owner(v2024C07);
      if ( v29 << 24 != battle_side_get_owner(v2024C08) << 24 )
      {
        v19 = v2024C08;
        goto _0801469A;
      }
      v30 = battle_get_per_side_status(v2024C07);
      v31 = battle_get_side_with_given_state((v30 ^ 1) & 0xFF);
      v2024C08 = v31;
      v22 = v2024C0C;
      v23 = v31;
      v24 = &gBitTable[v31];
      goto _08014690;
    }
    v3 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0);
    if ( v3 & 0x1000 || v3 & 0x400000 )
    {
      v2024BE8 = *(_WORD *)(2 * v2024C07 + 0x2024C54);
      v2024BE6 = v2024BE8;
      goto _08014280;
    }
    v4 = *(_WORD *)(28 * v2024C07 + 0x2024CAE);
    if ( *(_WORD *)(28 * v2024C07 + 0x2024CAE) )
    {
      v5 = *(_BYTE *)(28 * v2024C07 + 0x2024CB4);
      v6 = *(_WORD *)(2 * v5 + 88 * v2024C07 + 0x2024A8C);
      if ( v4 == v6 )
      {
        v2024BE8 = *(_WORD *)(28 * v2024C07 + 0x2024CAE);
        v2024BE6 = v4;
        v7 = *(_BYTE *)(28 * v2024C07 + 0x2024CB4);
        v2024BE5 = v7;
        v2024BE4 = v7;
        v1 = sub_801B5C0((unsigned __int16)v4, 0);
        v2 = v2024C07 + 90128;
        goto _08014200;
      }
      if ( *(_WORD *)(28 * v2024C07 + 0x2024CAE) && v4 != v6 )
      {
        v2024BE5 = *(_BYTE *)(28 * v2024C07 + 0x2024CB4);
        v2024BE4 = v5;
        v8 = *(_WORD *)(2 * (unsigned __int8)v5 + 88 * v2024C07 + 0x2024A8C);
        v2024BE8 = v8;
        v2024BE6 = v8;
        *(_WORD *)(28 * v2024C07 + 0x2024CAE) = 0;
        *(_BYTE *)(28 * v2024C07 + 0x2024CB4) = 0;
        *(_BYTE *)(28 * v2024C07 + 0x2024CB6) &= 0xF0u;
        v1 = sub_801B5C0(v2024BE6, 0);
        v2 = v2024C07 + 90128;
        goto _08014200;
      }
    }
    v9 = *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C);
    if ( v9 == *(_WORD *)(2 * v2024C07 + 0x2024C60) )
    {
      v2024BE8 = *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C);
      v2024BE6 = v9;
    }
    else
    {
      v2024BE8 = *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C);
      v2024BE6 = v9;
      *(_BYTE *)(v2024C07 + 0x2016010) = sub_801B5C0((unsigned __int16)v9, 0);
    }
    goto _08014280;
  }
  v0 = 12;
_080146CC:
  v2024A7F = v0;
  return v35;
}
