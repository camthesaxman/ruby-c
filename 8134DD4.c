int sub_8134DD4()
{
  signed int v0; // r6@18
  signed int v1; // r6@21
  char *v2; // r10@25
  int v3; // r6@27
  int v4; // r7@28
  int v5; // r5@30
  char *v6; // r3@30
  int v7; // r4@30
  int v8; // r0@33
  int v9; // r5@35
  _WORD *v10; // r3@36
  char *v11; // r4@37
  int v12; // r0@37
  int v13; // r3@37
  int v14; // r0@38
  int v15; // r5@41
  __int16 *v16; // r1@43
  signed int v17; // r5@47
  unsigned __int16 *v18; // r4@47
  char *v19; // r3@47
  unsigned __int16 v20; // r1@48
  __int16 v22[4]; // [sp+4h] [bp-44h]@42
  char v23; // [sp+Ch] [bp-3Ch]@1
  int v24; // [sp+10h] [bp-38h]@25
  int v25; // [sp+14h] [bp-34h]@2
  int v26; // [sp+18h] [bp-30h]@1
  int v27; // [sp+1Ch] [bp-2Ch]@1
  int v28; // [sp+20h] [bp-28h]@27
  char *v29; // [sp+24h] [bp-24h]@33
  int v30; // [sp+44h] [bp-4h]@53

  v26 = 0;
  v27 = 60;
  v23 = -1;
  ZeroEnemyPartyMons();
  if ( v2025408 > 0x13u )
  {
    if ( v2025408 > 0x1Du )
    {
      if ( v2025408 > 0x27u )
      {
        if ( v2025408 > 0x31u )
        {
          if ( v2025408 > 0x3Bu )
          {
            if ( v2025408 > 0x45u )
            {
              if ( v2025408 > 0x4Fu )
              {
                if ( v2025408 > 0x63u )
                {
                  if ( v2025408 == 200 )
                  {
                    v0 = 0;
                    do
                    {
                      sub_803ADE8((int)&unk_30045C0 + 100 * v0, 44 * v0 + 33706864);
                      ++v0;
                    }
                    while ( v0 <= 2 );
                  }
                  else
                  {
                    v1 = 0;
                    do
                    {
                      sub_803ADE8((int)&unk_30045C0 + 100 * v1, 164 * v2025408 + 33689596 + 44 * v1);
                      ++v1;
                    }
                    while ( v1 <= 2 );
                  }
                  return v30;
                }
                v25 = 31;
                v26 = 200;
                v27 = 100;
              }
              else
              {
                v25 = 31;
                v26 = 180;
              }
            }
            else
            {
              v25 = 21;
              v26 = 150;
            }
          }
          else
          {
            v25 = 18;
            v26 = 120;
          }
        }
        else
        {
          v25 = 15;
          v26 = 90;
        }
      }
      else
      {
        v25 = 12;
        v26 = 60;
      }
    }
    else
    {
      v25 = 9;
      v26 = 30;
    }
  }
  else
  {
    v25 = 6;
  }
  if ( v20253F8 & 1 )
  {
    v2 = (char *)&gBattleTowerLevel100Mons;
    v24 = 100;
  }
  else
  {
    v2 = (char *)&gBattleTowerLevel50Mons;
    v24 = 50;
  }
  v28 = *((_BYTE *)&gBattleTowerTrainers + 24 * v2025408 + 9);
  v3 = 0;
  do
  {
    v4 = ((unsigned __int8)Random() * v27 >> 8) + v26;
    if ( !v28 || (unsigned __int8)(v2[16 * v4 + 3] & v28) == v28 )
    {
      v5 = 0;
      v6 = &v2[16 * v4];
      v7 = 0;
      while ( v5 < v3 )
      {
        v29 = v6;
        v8 = GetMonData((int)&unk_30045C0 + v7, 11, 0);
        v6 = v29;
        if ( v8 == *(_WORD *)v29 )
          break;
        v7 += 100;
        ++v5;
      }
      if ( v5 == v3 )
      {
        v9 = 0;
        if ( v3 > 0 )
        {
          v10 = 0;
          do
          {
            v11 = (char *)(v10 + 25174752);
            v29 = (char *)v10;
            v12 = GetMonData((int)(v10 + 25174752), 12, 0);
            v13 = (int)v29;
            if ( v12 )
            {
              v14 = GetMonData((int)v11, 12, 0);
              v13 = (int)v29;
              if ( v14 == gBattleTowerHeldItems[(unsigned __int8)v2[16 * v4 + 2]] )
                break;
            }
            v10 = (_WORD *)(v13 + 100);
            ++v9;
          }
          while ( v9 < v3 );
        }
        if ( v9 == v3 )
        {
          v15 = 0;
          if ( v3 > 0 && (unsigned __int16)v22[0] != v4 )
          {
            v16 = v22;
            do
            {
              ++v16;
              ++v15;
            }
            while ( v15 < v3 && (unsigned __int16)*v16 != v4 );
          }
          if ( v15 == v3 )
          {
            v22[v3] = v4;
            CreateMonWithEVSpread((int)&unk_30045C0 + 100 * v3, *(_WORD *)&v2[16 * v4], v24, v25, v2[16 * v4 + 12]);
            v17 = 0;
            v18 = (unsigned __int16 *)&v2[16 * v4 + 4];
            v19 = (char *)&unk_30045C0;
            do
            {
              v20 = *v18;
              v29 = v19;
              SetMonMoveSlot((int)&v19[100 * v3], v20, v17);
              v19 = v29;
              if ( *v18 == 218 )
                v23 = 0;
              ++v18;
              ++v17;
            }
            while ( v17 <= 3 );
            SetMonData((int)&unk_30045C0 + 100 * v3, 32, (int)&v23);
            SetMonData(
              (int)&unk_30045C0 + 100 * v3++,
              12,
              (int)&gBattleTowerHeldItems[(unsigned __int8)v2[16 * v4 + 2]]);
          }
        }
      }
    }
  }
  while ( v3 != 3 );
  return v30;
}
