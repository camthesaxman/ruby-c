signed int __fastcall daycare_relationship_score(unsigned int *a1)
{
  unsigned int v1; // r8@1
  unsigned __int16 *v2; // r5@1
  __int16 *v3; // r7@1
  __int16 *v4; // r6@1
  int *v5; // r2@1
  unsigned int *v6; // r4@1
  _BYTE *v7; // r2@2
  unsigned int v8; // r0@2
  int v9; // r1@2
  _BYTE *v10; // r2@2
  unsigned __int8 v11; // r0@2
  unsigned __int8 v12; // r0@2
  int v13; // r2@2
  int v15; // r1@11
  __int16 v16; // [sp+0h] [bp-4Ch]@1
  __int16 v17; // [sp+2h] [bp-4Ah]@1
  __int16 v18; // [sp+4h] [bp-48h]@4
  int v19; // [sp+8h] [bp-44h]@1
  int v20; // [sp+Ch] [bp-40h]@1
  int v21; // [sp+10h] [bp-3Ch]@9
  int v22; // [sp+14h] [bp-38h]@1
  int *v23; // [sp+1Ch] [bp-30h]@1
  int *v24; // [sp+20h] [bp-2Ch]@1
  int *v25; // [sp+24h] [bp-28h]@1
  int *v26; // [sp+28h] [bp-24h]@1

  v1 = 0;
  v23 = &v19;
  v24 = &v22;
  v2 = (unsigned __int16 *)&v19;
  v3 = &v17;
  v4 = &v16;
  v25 = &v22;
  v5 = &v20;
  v26 = &v20;
  v6 = a1;
  do
  {
    *v2 = GetBoxMonData(v6, 11, v5);
    v8 = GetBoxMonData(v6, 1, v7);
    v9 = (int)v26;
    *v26 = v8;
    v26 = (int *)(v9 + 4);
    v11 = GetBoxMonData(v6, 0, v10);
    v12 = GetGenderFromSpeciesAndPersonality(*v2, v11);
    v13 = (int)v25;
    *v25 = v12;
    v5 = (int *)(v13 + 4);
    v25 = v5;
    *v4 = *((_BYTE *)&gBaseStats + 28 * *v2 + 20);
    *v3 = *((_BYTE *)&gBaseStats + 28 * *v2 + 21);
    ++v2;
    v3 += 2;
    v4 += 2;
    v6 += 20;
    ++v1;
  }
  while ( v1 <= 1 );
  if ( v16 == 15 || v18 == 15 )
    return 0;
  if ( v16 == 13 )
  {
    if ( v18 == 13 )
      return 0;
_08042490:
    if ( v20 != v21 )
      return 50;
    return 20;
  }
  if ( v18 == 13 )
    goto _08042490;
  v15 = v24[1];
  if ( v22 == v15 || v22 == 255 || v15 == 255 || !(sub_80423A8(&v16, &v18) << 24) )
    return 0;
  if ( *(_WORD *)v23 == *((_WORD *)v23 + 1) )
  {
    if ( v20 != v21 )
      return 70;
    return 50;
  }
  if ( v20 == v21 )
    return 20;
  return 50;
}
