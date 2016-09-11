int __fastcall CreateBoxMon(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, int a6, char a7, int a8)
{
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r0@3
  unsigned int v11; // r0@4
  int v12; // r0@5
  int v13; // r0@10
  unsigned __int16 v14; // r0@12
  int v15; // r0@12
  unsigned __int16 v16; // r0@12
  int v18; // [sp+0h] [bp-40h]@10
  __int16 v19; // [sp+Ch] [bp-34h]@10
  unsigned __int16 v20; // [sp+Eh] [bp-32h]@1
  unsigned __int8 v21; // [sp+10h] [bp-30h]@1
  unsigned __int8 v22; // [sp+11h] [bp-2Fh]@1
  int v23; // [sp+14h] [bp-2Ch]@2
  int v24; // [sp+18h] [bp-28h]@4
  unsigned int v25; // [sp+1Ch] [bp-24h]@12
  int v26; // [sp+3Ch] [bp-4h]@15

  v8 = a1;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v9 = ZeroBoxMonData(a1);
  if ( a5 )
  {
    v23 = a6;
  }
  else
  {
    v10 = Random(v9);
    v23 = (unsigned __int16)v10 | (Random(v10) << 16);
  }
  SetBoxMonData(v8, 0, &v23);
  v11 = (unsigned int)&v24;
  if ( a7 == 2 )
  {
    do
    {
      v12 = Random(v11);
      v24 = (unsigned __int16)v12 | (Random(v12) << 16);
      v11 = (v23 & 0xFFFF0000) >> 16;
    }
    while ( (((v24 & 0xFFFF0000) >> 16) ^ (unsigned __int16)v24 ^ v11 ^ (unsigned __int16)v23) <= 7 );
  }
  else if ( a7 == 1 )
  {
    v24 = a8;
  }
  else
  {
    v24 = v2024EAE | (v2024EAF << 8) | (v2024EB0 << 16) | (v2024EB1 << 24);
  }
  SetBoxMonData(v8, 1, &v24);
  v19 = CalculateBoxMonChecksum(v8);
  SetBoxMonData(v8, 9, &v19);
  EncryptBoxMon(v8);
  GetSpeciesName();
  SetBoxMonData(v8, 2, &v18);
  SetBoxMonData(v8, 3, &gGameLanguage);
  SetBoxMonData(v8, 7, 33705636);
  SetBoxMonData(v8, 11, &v20);
  SetBoxMonData(v8, 25, &gExperienceTables[101 * *((_BYTE *)&gBaseStats + 28 * v20 + 19)] + v21);
  v13 = SetBoxMonData(v8, 32, (char *)&unk_81FEC2A + 28 * v20);
  LOBYTE(v24) = sav1_map_get_name(v13);
  v24 = (unsigned __int8)v24;
  SetBoxMonData(v8, 35, &v24);
  SetBoxMonData(v8, 36, &v21);
  SetBoxMonData(v8, 37, &gGameVersion);
  v24 = 4;
  SetBoxMonData(v8, 38, &v24);
  SetBoxMonData(v8, 49, 33705644);
  if ( v22 > 0x1Fu )
  {
    v14 = Random(v22);
    v24 = v14;
    v25 = v14 & 0x1F;
    SetBoxMonData(v8, 39, &v25);
    v25 = (v24 & 0x3E0u) >> 5;
    SetBoxMonData(v8, 40, &v25);
    v25 = (v24 & 0x7C00u) >> 10;
    v15 = SetBoxMonData(v8, 41, &v25);
    v16 = Random(v15);
    v24 = v16;
    v25 = v16 & 0x1F;
    SetBoxMonData(v8, 42, &v25);
    v25 = (v24 & 0x3E0u) >> 5;
    SetBoxMonData(v8, 43, &v25);
    v25 = (v24 & 0x7C00u) >> 10;
    SetBoxMonData(v8, 44, &v25);
  }
  else
  {
    SetBoxMonData(v8, 39, &v22);
    SetBoxMonData(v8, 40, &v22);
    SetBoxMonData(v8, 41, &v22);
    SetBoxMonData(v8, 42, &v22);
    SetBoxMonData(v8, 43, &v22);
    SetBoxMonData(v8, 44, &v22);
  }
  if ( *((_BYTE *)&gBaseStats + 28 * v20 + 23) )
  {
    v24 = v23 & 1;
    SetBoxMonData(v8, 46, &v24);
  }
  GiveBoxMonInitialMoveset(v8);
  return v26;
}
