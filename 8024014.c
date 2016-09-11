int sub_8024014()
{
  int v0; // r6@1
  int v1; // r5@1
  int v2; // r4@2
  int v3; // r3@3
  char *v4; // r4@3
  signed int v5; // r1@3
  int v6; // r0@10
  unsigned __int8 *v7; // r1@15
  int v8; // r3@18
  int v9; // r2@18
  int v11; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  if ( v202FF5E == 1024 )
  {
    v2 = v2017094 * 20 * v2016056;
    goto _08024140;
  }
  v3 = 40 * v202FF5E;
  v4 = (char *)&gTrainers + v3;
  v5 = *((_BYTE *)&gTrainers + v3);
  if ( v5 == 1 )
    goto _080240AE;
  if ( v5 > 1 )
  {
    if ( v5 == 2 )
    {
      v6 = 8 * (unsigned __int8)v4[32] + *(_DWORD *)((char *)&unk_81F0520 + v3) - 8;
      goto _080240C2;
    }
    if ( v5 != 3 )
      goto _080240C4;
_080240AE:
    v6 = 16 * (unsigned __int8)v4[32] + *(_DWORD *)((char *)&unk_81F0520 + v3) - 16;
    goto _080240C2;
  }
  if ( *((_BYTE *)&gTrainers + v3) )
    goto _080240C4;
  v6 = 8 * (unsigned __int8)v4[32] + *(_DWORD *)((char *)&unk_81F0520 + v3) - 8;
_080240C2:
  v1 = *(_BYTE *)(v6 + 2);
_080240C4:
  if ( gTrainerMoney[0] != 255 )
  {
    v7 = gTrainerMoney;
    do
    {
      if ( *v7 == *((_BYTE *)&gTrainers + 40 * v202FF5E + 1) )
        break;
      v7 += 4;
      ++v0;
    }
    while ( *v7 != 255 );
  }
  v8 = 4 * v1 * v2016056;
  v9 = gTrainerMoney[4 * v0 + 1];
  if ( v20239F8 & 1 )
    v2 = v8 * 2 * v9;
  else
    v2 = v8 * v9;
_08024140:
  sub_80B79B8(33708996, v2);
  byte_30041C0[0] = -3;
  byte_30041C1 = 1;
  word_30041C2 = 1284;
  byte_30041C4 = v2;
  byte_30041C5 = (unsigned __int16)(v2 & 0xFF00) >> 8;
  byte_30041C6 = (v2 & 0xFF0000u) >> 16;
  byte_30041C7 = BYTE3(v2);
  byte_30041C8 = -1;
  ++v2024C10;
  return v11;
}
