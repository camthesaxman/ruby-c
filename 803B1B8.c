int __fastcall CalculateMonStats(int a1)
{
  int v1; // r5@1
  int v2; // r8@1
  int v3; // r6@1
  signed int v4; // r4@1
  int v5; // r10@1
  signed int v6; // r9@1
  int v7; // r7@1
  int v8; // r6@2
  int v9; // r1@3
  char *v10; // r6@6
  int v11; // r1@6
  unsigned __int8 v12; // r0@6
  int v13; // r1@6
  unsigned __int8 v14; // r0@6
  int v15; // r1@6
  unsigned __int8 v16; // r0@6
  int v17; // r1@6
  unsigned __int8 v18; // r0@6
  int v19; // r1@6
  unsigned __int8 v20; // r0@6
  int v21; // r0@9
  int v23; // [sp+0h] [bp-60h]@1
  int v24; // [sp+4h] [bp-5Ch]@2
  int v25; // [sp+8h] [bp-58h]@6
  int v26; // [sp+Ch] [bp-54h]@6
  int v27; // [sp+10h] [bp-50h]@6
  int v28; // [sp+14h] [bp-4Ch]@6
  int v29; // [sp+18h] [bp-48h]@6
  int v30; // [sp+1Ch] [bp-44h]@1
  int v31; // [sp+20h] [bp-40h]@1
  int v32; // [sp+24h] [bp-3Ch]@1
  int v33; // [sp+28h] [bp-38h]@1
  int v34; // [sp+2Ch] [bp-34h]@1
  int v35; // [sp+30h] [bp-30h]@1
  int v36; // [sp+34h] [bp-2Ch]@1
  int v37; // [sp+38h] [bp-28h]@1
  int v38; // [sp+3Ch] [bp-24h]@1
  int v39; // [sp+5Ch] [bp-4h]@15

  v1 = a1;
  v2 = GetMonData(a1, 58);
  v30 = GetMonData(v1, 57);
  v3 = GetMonData(v1, 39);
  v4 = GetMonData(v1, 26);
  v5 = GetMonData(v1, 40);
  v6 = GetMonData(v1, 27);
  v31 = GetMonData(v1, 41);
  v32 = GetMonData(v1, 28);
  v33 = GetMonData(v1, 42);
  v34 = GetMonData(v1, 29);
  v35 = GetMonData(v1, 43);
  v36 = GetMonData(v1, 30);
  v37 = GetMonData(v1, 44);
  v38 = GetMonData(v1, 31);
  v7 = (unsigned __int16)GetMonData(v1, 11);
  v23 = (unsigned __int8)GetLevelFromMonExp(v1);
  SetMonData(v1, 56, &v23);
  if ( v7 == 303 )
  {
    v24 = 1;
    v8 = 2424;
  }
  else
  {
    v9 = 2 * *((_BYTE *)&gBaseStats + 28 * v7) + v3;
    v8 = 8 * v7;
    v24 = (v9 + v4 / 4) * v23 / 100 + v23 + 10;
  }
  v20160FA = v24 - v2;
  if ( !(((unsigned __int8)v24 - v2) << 24) )
    v20160FA = 1;
  SetMonData(v1, 58, &v24);
  v10 = (char *)&gBaseStats + 4 * (v8 - v7);
  v25 = (2 * (unsigned __int8)v10[1] + v5 + v6 / 4) * v23 / 100 + 5;
  v12 = GetNature(v1, v11);
  LOWORD(v25) = nature_stat_mod(v12, (unsigned __int16)v25, 1);
  v25 = (unsigned __int16)v25;
  SetMonData(v1, 59, &v25);
  v26 = (2 * (unsigned __int8)v10[2] + v31 + v32 / 4) * v23 / 100 + 5;
  v14 = GetNature(v1, v13);
  LOWORD(v26) = nature_stat_mod(v14, (unsigned __int16)v26, 2);
  v26 = (unsigned __int16)v26;
  SetMonData(v1, 60, &v26);
  v27 = (2 * (unsigned __int8)v10[3] + v33 + v34 / 4) * v23 / 100 + 5;
  v16 = GetNature(v1, v15);
  LOWORD(v27) = nature_stat_mod(v16, (unsigned __int16)v27, 3);
  v27 = (unsigned __int16)v27;
  SetMonData(v1, 61, &v27);
  v28 = (2 * (unsigned __int8)v10[4] + v35 + v36 / 4) * v23 / 100 + 5;
  v18 = GetNature(v1, v17);
  LOWORD(v28) = nature_stat_mod(v18, (unsigned __int16)v28, 4);
  v28 = (unsigned __int16)v28;
  SetMonData(v1, 62, &v28);
  v29 = (2 * (unsigned __int8)v10[5] + v37 + v38 / 4) * v23 / 100 + 5;
  v20 = GetNature(v1, v19);
  LOWORD(v29) = nature_stat_mod(v20, (unsigned __int16)v29, 5);
  v29 = (unsigned __int16)v29;
  SetMonData(v1, 63, &v29);
  if ( v7 == 303 )
  {
    if ( v30 || !v2 )
    {
      v21 = 1;
LABEL_14:
      v30 = v21;
      SetMonData(v1, 57, &v30);
      return v39;
    }
  }
  else
  {
    if ( v30 )
    {
      v21 = v30 + v24 - v2;
      goto LABEL_14;
    }
    if ( !v2 )
    {
      v21 = v24;
      goto LABEL_14;
    }
  }
  return v39;
}
