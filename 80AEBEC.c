int __fastcall sub_80AEBEC(unsigned __int16 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r5@6
  _WORD *v5; // r4@6
  _WORD *v6; // r3@6
  signed int v7; // r2@6
  _BYTE *v8; // r1@8
  unsigned int v9; // r0@9
  signed int v10; // r2@13
  _WORD *v11; // r1@13
  _BYTE *v12; // r1@18
  unsigned int v13; // r0@19
  signed int v14; // r2@23
  _WORD *v15; // r1@23
  int v17; // [sp+20h] [bp-4h]@0

  v1 = a1;
  FillWindowRect_DefaultPalette((int)&unk_3004210, 0, 0xBu, 0x1Fu, 0x10u, 0x22u);
  v2 = gContestMoves[8 * v1 + 1] & 7;
  v3 = 16448;
  if ( gContestMoves[8 * v1 + 1] & 7 )
  {
    v3 = 16453;
    if ( v2 != 1 )
    {
      v3 = 16458;
      if ( v2 != 2 )
      {
        v3 = 16522;
        if ( v2 == 3 )
          v3 = 16490;
      }
    }
  }
  v4 = 8 * v1;
  v5 = (_WORD *)100714518;
  v6 = (_WORD *)100714454;
  v7 = 4;
  do
  {
    *v6 = v3;
    *v5 = v3 + 16;
    v3 = (v3 + 1) & 0xFFFF;
    ++v5;
    ++v6;
    --v7;
  }
  while ( v7 >= 0 );
  v8 = &gContestEffects[4 * gContestMoves[v4]];
  if ( v8[1] == 255 )
    v9 = 0;
  else
    v9 = v8[1] / 0xAu;
  if ( v9 > 8 )
    v9 = 8;
  v10 = 0;
  v11 = (_WORD *)100714474;
  do
  {
    if ( v10 >= (signed int)v9 )
      *v11 = 20533;
    else
      *v11 = 20498;
    ++v11;
    ++v10;
  }
  while ( v10 <= 7 );
  v12 = &gContestEffects[4 * gContestMoves[v4]];
  if ( v12[2] == 255 )
    v13 = 0;
  else
    v13 = v12[2] / 0xAu;
  if ( v13 > 8 )
    v13 = 8;
  v14 = 0;
  v15 = (_WORD *)100714538;
  do
  {
    if ( v14 >= (signed int)v13 )
      *v15 = 20534;
    else
      *v15 = 20500;
    ++v15;
    ++v14;
  }
  while ( v14 <= 7 );
  sub_8003460((int)&unk_3004210, (int)*(&gUnknown_083CADD4 + gContestMoves[v4]), 868, 11, 0x23u);
  sub_8003460((int)&unk_3004210, (int)&gUnknown_083CC5A2, 866, 16, 0x1Fu);
  return v17;
}
