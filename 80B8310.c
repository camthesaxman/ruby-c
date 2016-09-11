int ContestEffect_26()
{
  int v0; // r9@1
  signed int v1; // r6@1
  int v2; // r4@1
  signed int v3; // r7@1
  __int16 *v4; // r0@13
  signed int v5; // r6@15
  int v6; // r7@15
  char *v7; // r4@15
  __int16 v8; // r0@18
  int v9; // r6@22
  unsigned __int8 *v10; // r4@23
  char v12[8]; // [sp+0h] [bp-3Ch]@1
  char v13[8]; // [sp+8h] [bp-34h]@15
  __int16 v14[4]; // [sp+10h] [bp-2Ch]@8
  signed __int16 v15; // [sp+12h] [bp-2Ah]@10
  signed __int16 v16; // [sp+14h] [bp-28h]@12
  __int16 v17[4]; // [sp+16h] [bp-26h]@13
  int v18; // [sp+18h] [bp-24h]@1
  int v19; // [sp+38h] [bp-4h]@33

  v0 = 0;
  v18 = 0;
  memset(v12, 255, 5);
  v1 = 0;
  v2 = 0;
  v3 = 33657440;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) < (unsigned int)*(_BYTE *)(v1 + 33657552)
      && !(*(_BYTE *)(v3 + 12) & 1)
      && !(sub_80AF59C(v1) << 24) )
    {
      v12[v2++] = v1;
    }
    v3 += 28;
    ++v1;
  }
  while ( v1 <= 3 );
  switch ( v2 )
  {
    case 1:
      v14[0] = 60;
      break;
    case 2:
      v14[0] = 30;
      v15 = 30;
      break;
    case 3:
      v14[0] = 20;
      v15 = 20;
      v16 = 20;
      break;
    default:
      v4 = v17;
      do
      {
        *v4 = 0;
        --v4;
      }
      while ( (signed int)v4 >= (signed int)v14 );
      break;
  }
  v5 = 0;
  v6 = 0;
  v7 = v13;
  do
  {
    if ( *(_BYTE *)(v6 + 33657461) & 0x10 && sub_80B214C(v5) << 24 )
      v8 = 10 * gComboStarterLookupTable[gContestMoves[8 * *(_WORD *)(v6 + 33657448) + 2]];
    else
      v8 = 0;
    *(_WORD *)v7 = v8;
    *(_WORD *)v7 -= 10 * (*(_BYTE *)(v6 + 33657453) / 10);
    v6 += 28;
    v7 += 2;
    ++v5;
  }
  while ( v5 <= 3 );
  if ( v14[0] )
  {
    v9 = 0;
    if ( (unsigned __int8)v12[0] != 255 )
    {
      v10 = (unsigned __int8 *)v12;
      do
      {
        if ( (signed int)((unsigned __int16)Random() % 0x64u & 0xFFFF) >= v14[v9] + (signed int)*(_WORD *)&v13[2 * *v10] )
        {
          v18 = 1;
        }
        else
        {
          if ( !(sub_80B90C0(*v10) << 24) )
            goto _080B84A2;
          sub_80B157C(*v10);
          sub_80B13EC(*v10, 10);
          v0 = (v0 + 1) & 0xFF;
        }
        if ( v18 )
        {
_080B84A2:
          v18 = 0;
          sub_80B13EC(*v10, 60);
          v0 = (v0 + 1) & 0xFF;
        }
        *(_BYTE *)(*v10++ + 0x20192DD) = 1;
        ++v9;
      }
      while ( *v10 != 255 );
    }
  }
  sub_80B13EC(v20192E1, 11);
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  return v19;
}
