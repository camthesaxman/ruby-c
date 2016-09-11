int __fastcall SpawnSpecialFieldObjectParametrized(char a1, char a2, char a3, int a4, int a5, char a6)
{
  char v7; // [sp+0h] [bp-2Ch]@1
  char v8; // [sp+1h] [bp-2Bh]@1
  char v9; // [sp+2h] [bp-2Ah]@1
  __int16 v10; // [sp+4h] [bp-28h]@1
  __int16 v11; // [sp+6h] [bp-26h]@1
  char v12; // [sp+8h] [bp-24h]@1
  char v13; // [sp+9h] [bp-23h]@1
  char v14; // [sp+Ah] [bp-22h]@1
  __int16 v15; // [sp+Ch] [bp-20h]@1
  __int16 v16; // [sp+Eh] [bp-1Eh]@1

  v7 = a3;
  v8 = a1;
  v9 = 0;
  v10 = (unsigned int)((a4 << 16) - 458752) >> 16;
  v11 = (unsigned int)((a5 << 16) - 458752) >> 16;
  v12 = a6;
  v13 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  return (unsigned __int8)SpawnSpecialFieldObject((int)&v7);
}
