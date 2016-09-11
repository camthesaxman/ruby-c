int __fastcall sub_80C40D4(int a1, unsigned __int8 a2)
{
  signed int v2; // r7@1
  int v3; // r10@1
  signed int v4; // r8@2
  signed int v5; // r4@2
  signed int v6; // r6@2
  unsigned int v7; // r0@3
  int v8; // r5@4
  unsigned int v9; // r3@4
  int *v10; // r0@6
  signed int v11; // r8@9
  int v12; // r9@9
  char v13; // r1@10
  signed __int16 v14; // r2@10
  int v15; // r5@13
  unsigned int v16; // r3@13
  int *v17; // r4@15
  int *v18; // r0@19
  int v19; // r1@19
  int v21; // [sp+0h] [bp-28h]@1
  signed int v22; // [sp+4h] [bp-24h]@9
  int v23; // [sp+24h] [bp-4h]@0

  v2 = a2;
  v3 = 0;
  v21 = 0;
  if ( a1 << 24 )
  {
    v11 = 0;
    v12 = 0;
    v22 = 192;
    do
    {
      v13 = *(_BYTE *)(v12 + 33652778);
      v14 = 24739;
      if ( *(_BYTE *)(v12 + 33652776) )
        v14 = 24741;
      if ( v2 < v13 )
      {
        *(_WORD *)(2 * (v22 + v13 + 19 - v2) + 0x600BFFE) = v14;
        v15 = (unsigned __int8)CreateTask((int)sub_80C42C0, 10);
        v16 = (*(_DWORD *)(v12 + 33652772) << 16) / (unsigned int)*(_BYTE *)(v12 + 33652778) * (v2 + 1);
        if ( (unsigned __int16)v16 > 0x7FFFu )
          v16 += 0x10000;
        v17 = &dword_3004B20[10 * v15];
        *((_WORD *)v17 + 4) = v11;
        if ( *(_BYTE *)(v12 + 33652776) )
        {
          *((_WORD *)v17 + 6) = 1;
          v21 = (v21 + 1) & 0xFF;
        }
        else
        {
          v3 = (v3 + 1) & 0xFF;
        }
        if ( *(_BYTE *)(v12 + 33652776) )
        {
          v18 = &dword_3004B20[10 * v15];
          v19 = *(_DWORD *)(v12 + 33652768) - (v16 >> 16);
        }
        else
        {
          v18 = &dword_3004B20[10 * v15];
          v19 = *(_DWORD *)(v12 + 33652768) + (v16 >> 16);
        }
        *((_WORD *)v18 + 5) = v19;
        ++v2018014;
      }
      v12 += 20;
      v22 += 96;
      ++v11;
    }
    while ( v11 <= 3 );
  }
  else
  {
    v4 = 0;
    v5 = 33652768;
    v6 = 160;
    do
    {
      v7 = *(_BYTE *)(v5 + 9);
      if ( v2 < v7 )
      {
        *(_WORD *)(2 * (v6 + v7 + 19 - v2) + 0x600BFFE) = 24755;
        v8 = (unsigned __int8)CreateTask((int)sub_80C42C0, 10);
        v9 = (*(_DWORD *)v5 << 16) / (unsigned int)*(_BYTE *)(v5 + 9) * (v2 + 1);
        if ( (unsigned __int16)v9 > 0x7FFFu )
          v9 += 0x10000;
        v10 = &dword_3004B20[10 * v8];
        *((_WORD *)v10 + 4) = v4;
        *((_WORD *)v10 + 5) = HIWORD(v9);
        ++v2018014;
        v3 = (v3 + 1) & 0xFF;
      }
      v5 += 20;
      v6 += 96;
      ++v4;
    }
    while ( v4 <= 3 );
  }
  if ( v21 )
    audio_play(0x16u);
  if ( v3 )
    audio_play(0x15u);
  return v23;
}
