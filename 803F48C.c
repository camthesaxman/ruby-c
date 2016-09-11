int __fastcall GetEvolutionTargetSpecies(int a1, unsigned __int8 a2, unsigned __int16 a3)
{
  int v3; // r8@1
  signed int v4; // r5@1
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r7@1
  unsigned int v8; // r4@1
  int v9; // r0@2
  unsigned int v11; // r9@14
  int v12; // r4@15
  char *v13; // r0@18
  char *v14; // r1@26
  char *v15; // r5@28
  unsigned int v16; // r4@29
  int v17; // r4@32
  unsigned int v18; // r4@35
  char *v19; // r4@37
  char *v20; // r4@8
  int v21; // r0@49
  char *v22; // r1@57
  unsigned __int16 v23; // [sp+0h] [bp-34h]@1
  int v24; // [sp+4h] [bp-30h]@8
  unsigned int v25; // [sp+8h] [bp-2Ch]@14
  unsigned int v26; // [sp+Ch] [bp-28h]@1
  unsigned int v27; // [sp+10h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = (unsigned __int16)GetMonData(a1, 11, 0);
  v23 = GetMonData(v3, 12, 0);
  v8 = GetMonData(v3, 0, 0);
  v26 = (unsigned __int8)GetMonData(v3, 23, 0);
  v27 = v8 >> 16;
  if ( v23 == 175 )
    v9 = v2028DBC;
  else
    v9 = (unsigned __int8)itemid_get_x12(v23);
  if ( v9 == 38 && v4 != 3 )
    return 0;
  if ( v4 == 1 )
  {
    v20 = (char *)&gEvolutionTable[20 * v7];
    v24 = 4;
    while ( 1 )
    {
      v21 = *(_WORD *)v20;
      if ( v21 != 5 )
      {
        if ( v21 != 6 || *((_WORD *)v20 + 1) != v23 )
          goto _0803F768;
        v23 = 0;
        SetMonData(v3, 12, (int)&v23);
      }
      v6 = *((_WORD *)v20 + 2);
_0803F768:
      v20 += 8;
      if ( --v24 < 0 )
        return v6;
    }
  }
  if ( v4 > 1 )
  {
    if ( v4 <= 3 )
    {
      v24 = 0;
      while ( 1 )
      {
        v22 = (char *)&gEvolutionTable[4 * (5 * v7 + v24)];
        if ( *(_WORD *)v22 == 7 && *((_WORD *)v22 + 1) == v5 )
          break;
        if ( ++v24 > 4 )
          return v6;
      }
      v6 = *((_WORD *)v22 + 2);
    }
  }
  else if ( !v4 )
  {
    v11 = (unsigned __int8)GetMonData(v3, 56, 0);
    v25 = (unsigned __int16)GetMonData(v3, 32, 0);
    v24 = 0;
    do
    {
      v12 = 8 * v24;
      if ( (unsigned int)*(&gEvolutionTable[20 * v7] + 4 * v24) - 1 <= 0xE )
      {
        switch ( *(&gEvolutionTable[20 * v7] + 4 * v24) )
        {
          case 1:
            if ( v25 > 0xDB )
            {
              v13 = (char *)&gEvolutionTable[20 * v7] + v12;
              goto _0803F61C;
            }
            break;
          case 2:
            RtcCalcLocalTime();
            if ( (((unsigned __int8)byte_300403A - 12) & 0xFFu) <= 0xB && v25 > 0xDB )
              goto _0803F612;
            break;
          case 3:
            RtcCalcLocalTime();
            if ( (unsigned __int8)byte_300403A <= 0xBu && v25 > 0xDB )
            {
_0803F612:
              v13 = (char *)&gEvolutionTable[20 * v7] + v12;
_0803F61C:
              v6 = *((_WORD *)v13 + 2);
            }
            break;
          case 4:
            v14 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v14 + 1) <= v11 )
              goto _0803F722;
            break;
          case 8:
            v15 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v15 + 1) <= v11 )
            {
              v16 = GetMonData(v3, 59, 0);
              if ( v16 > GetMonData(v3, 60, 0) )
                goto _0803F6B8;
            }
            break;
          case 9:
            v15 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v15 + 1) <= v11 )
            {
              v17 = GetMonData(v3, 59, 0);
              if ( v17 == GetMonData(v3, 60, 0) )
                goto _0803F6B8;
            }
            break;
          case 0xA:
            v15 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v15 + 1) <= v11 )
            {
              v18 = GetMonData(v3, 59, 0);
              if ( v18 < GetMonData(v3, 60, 0) )
_0803F6B8:
                v6 = *((_WORD *)v15 + 2);
            }
            break;
          case 0xB:
            v19 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v19 + 1) <= v11 && (v27 % 0xA & 0xFFFF) <= 4 )
              goto _0803F6FC;
            break;
          case 0xC:
            v19 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v19 + 1) <= v11 && (v27 % 0xA & 0xFFFF) > 4 )
_0803F6FC:
              v6 = *((_WORD *)v19 + 2);
            break;
          case 0xD:
            v14 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v14 + 1) <= v11 )
              goto _0803F722;
            break;
          case 0xF:
            v14 = (char *)&gEvolutionTable[20 * v7] + v12;
            if ( *((_WORD *)v14 + 1) <= v26 )
_0803F722:
              v6 = *((_WORD *)v14 + 2);
            break;
          default:
            break;
        }
      }
      ++v24;
    }
    while ( v24 <= 4 );
  }
  return v6;
}
