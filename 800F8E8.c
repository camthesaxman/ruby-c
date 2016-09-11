int __fastcall sub_800F8E8(int a1, unsigned __int16 a2)
{
  int v2; // r9@1
  int result; // r0@2
  char *v4; // r2@4
  int v5; // r1@4
  char *v6; // r0@4
  int v7; // r4@4
  int v8; // r1@5
  int v9; // r6@7
  int v10; // r1@9
  signed int v11; // r0@9
  int v12; // r4@16
  int v13; // r6@16
  int v14; // r1@17
  int v15; // r7@19
  int v16; // r6@19
  int v17; // r8@19
  int v18; // r1@20
  int v19; // r5@21
  signed int v20; // r6@21
  _WORD *v21; // r4@21
  int v22; // r4@24
  int v23; // r6@24
  int v24; // r1@25
  int v25; // r5@26
  int v26; // r7@27
  int v27; // r6@27
  int v28; // r8@27
  int v29; // r1@28
  signed int v30; // r6@29
  int v31; // r5@29
  _WORD *v32; // r4@29
  int v33; // [sp+10h] [bp-34h]@1
  int v34; // [sp+14h] [bp-30h]@1
  int v35; // [sp+18h] [bp-2Ch]@4

  v33 = a1;
  v34 = a2;
  v2 = 0;
  if ( a2 == 1024 )
  {
    result = 0;
  }
  else
  {
    if ( (v20239F8 & 0x908) == 8 )
    {
      ZeroEnemyPartyMons(8);
      v35 = 0;
      v4 = (char *)&gTrainers;
      v5 = 4 * v34;
      v6 = (char *)&gTrainers + 40 * v34 + 32;
      v7 = 0;
      while ( v7 < (unsigned __int8)*v6 )
      {
        v8 = (int)&v4[8 * (v5 + v34)];
        if ( *(_BYTE *)(v8 + 24) != 1 )
          *(_BYTE *)(v8 + 2);
        v9 = 0;
        if ( *((_BYTE *)&unk_81F0500 + 40 * v34) != 255 )
        {
          do
            v2 += *((_BYTE *)&unk_81F0500 + 40 * v34 + v9++);
          while ( *((_BYTE *)&unk_81F0500 + 40 * v34 + v9) != 255 );
        }
        v10 = 40 * v34;
        v11 = *((_BYTE *)&gTrainers + 40 * v34);
        if ( v11 == 1 )
        {
          v15 = *(_DWORD *)((char *)&unk_81F0520 + v10);
          v16 = 0;
          v17 = 16 * v35;
          if ( (unsigned __int8)gSpeciesNames[11 * *(_WORD *)(16 * v35 + v15 + 4)] != 255 )
          {
            do
            {
              v18 = 11 * *(_WORD *)(16 * v35 + v15 + 4);
              v2 += (unsigned __int8)*(&gSpeciesNames[v16++] + v18);
            }
            while ( (unsigned __int8)*(&gSpeciesNames[v16] + v18) != 255 );
          }
          v19 = v33 + 100 * v35;
          CreateMon(
            v33 + 100 * v35,
            *(_WORD *)(v17 + v15 + 4),
            *(_BYTE *)(v17 + v15 + 2),
            31 * *(_WORD *)(v17 + v15) / 255 & 0xFF);
          v20 = 0;
          v21 = (_WORD *)(v15 + v17 + 6);
          do
          {
            SetMonData(v19, v20 + 13, v21);
            SetMonData(v19, v20 + 17, (char *)&unk_81FB130 + 12 * *v21);
            ++v21;
            ++v20;
          }
          while ( v20 <= 3 );
        }
        else if ( v11 > 1 )
        {
          if ( v11 == 2 )
          {
            v22 = *(_DWORD *)((char *)&unk_81F0520 + v10);
            v23 = 0;
            if ( (unsigned __int8)gSpeciesNames[11 * *(_WORD *)(8 * v35 + v22 + 4)] != 255 )
            {
              do
              {
                v24 = 11 * *(_WORD *)(8 * v35 + v22 + 4);
                v2 += (unsigned __int8)*(&gSpeciesNames[v23++] + v24);
              }
              while ( (unsigned __int8)*(&gSpeciesNames[v23] + v24) != 255 );
            }
            v25 = 8 * v35 + v22;
            CreateMon(v33 + 100 * v35, *(_WORD *)(v25 + 4), *(_BYTE *)(v25 + 2), 31 * *(_WORD *)v25 / 255 & 0xFF);
            SetMonData(v33 + 100 * v35, 12, v25 + 6);
          }
          else if ( v11 == 3 )
          {
            v26 = *(_DWORD *)((char *)&unk_81F0520 + v10);
            v27 = 0;
            v28 = 16 * v35;
            if ( (unsigned __int8)gSpeciesNames[11 * *(_WORD *)(16 * v35 + v26 + 4)] != 255 )
            {
              do
              {
                v29 = 11 * *(_WORD *)(16 * v35 + v26 + 4);
                v2 += (unsigned __int8)*(&gSpeciesNames[v27++] + v29);
              }
              while ( (unsigned __int8)*(&gSpeciesNames[v27] + v29) != 255 );
            }
            CreateMon(
              v33 + 100 * v35,
              *(_WORD *)(v28 + v26 + 4),
              *(_BYTE *)(v28 + v26 + 2),
              31 * *(_WORD *)(v28 + v26) / 255 & 0xFF);
            SetMonData(v33 + 100 * v35, 12, v28 + v26 + 6);
            v30 = 0;
            v31 = v33 + 100 * v35;
            v32 = (_WORD *)(v26 + v28 + 8);
            do
            {
              SetMonData(v31, v30 + 13, v32);
              SetMonData(v31, v30 + 17, (char *)&unk_81FB130 + 12 * *v32);
              ++v32;
              ++v30;
            }
            while ( v30 <= 3 );
          }
        }
        else if ( !*((_BYTE *)&gTrainers + v10) )
        {
          v12 = *(_DWORD *)((char *)&unk_81F0520 + v10);
          v13 = 0;
          if ( (unsigned __int8)gSpeciesNames[11 * *(_WORD *)(8 * v35 + v12 + 4)] != 255 )
          {
            do
            {
              v14 = 11 * *(_WORD *)(8 * v35 + v12 + 4);
              v2 += (unsigned __int8)*(&gSpeciesNames[v13++] + v14);
            }
            while ( (unsigned __int8)*(&gSpeciesNames[v13] + v14) != 255 );
          }
          CreateMon(
            v33 + 100 * v35,
            *(_WORD *)(8 * v35 + v12 + 4),
            *(_BYTE *)(8 * v35 + v12 + 2),
            31 * *(_WORD *)(8 * v35 + v12) / 255 & 0xFF);
        }
        v7 = v35++ + 1;
        v4 = (char *)&gTrainers;
        v5 = 4 * v34;
        v6 = (char *)&gTrainers + 40 * v34 + 32;
      }
      v20239F8 |= *((_BYTE *)&gTrainers + 40 * v34 + 24);
    }
    result = *((_BYTE *)&gTrainers + 40 * v34 + 32);
  }
  return result;
}
