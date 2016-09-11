int __fastcall sub_80FD568(_WORD *a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r12@1
  unsigned int v6; // r4@9
  int v7; // r2@10
  unsigned int v8; // r3@10
  unsigned int v9; // r0@10
  char *v10; // r1@11
  __int16 v11; // r0@11
  unsigned int v12; // r2@16
  __int16 v13; // [sp+0h] [bp-28h]@2
  unsigned __int16 v14; // [sp+2h] [bp-26h]@2
  unsigned __int16 v15; // [sp+4h] [bp-24h]@2
  unsigned __int16 v16; // [sp+6h] [bp-22h]@2
  unsigned __int16 v17; // [sp+8h] [bp-20h]@2
  unsigned __int16 v18; // [sp+Ah] [bp-1Eh]@2
  char v19; // [sp+Ch] [bp-1Ch]@11
  unsigned __int16 v20; // [sp+Eh] [bp-1Ah]@14
  unsigned __int16 v21; // [sp+10h] [bp-18h]@15

  v2 = *a1;
  v3 = *(_WORD *)a2;
  v4 = v3 << 16;
  if ( v2 == v3 )
    return *(_WORD *)a2;
  v13 = *a1 & 0x1F;
  v14 = ((unsigned int)(v2 << 16) >> 21) & 0x1F;
  v15 = ((unsigned int)(v2 << 16) >> 26) & 0x1F;
  v16 = v3 & 0x1F;
  v17 = (v4 >> 21) & 0x1F;
  v18 = (v4 >> 26) & 0x1F;
  if ( (v2 & 0x1Fu) > 0x19 && v14 > 0x19u && v15 > 0x19u )
    return *(_WORD *)a2;
  if ( v16 > 0x19u && v17 > 0x19u && v18 > 0x19u )
    return *(_WORD *)a2;
  v6 = 0;
  do
  {
    v7 = 2 * v6;
    v8 = (unsigned __int16)*(&v13 + v6);
    v9 = *(&v16 + v6);
    if ( v8 <= v9 )
    {
      v10 = &v19 + v7;
      v11 = v9 - v8;
    }
    else
    {
      v10 = &v19 + v7;
      v11 = v8 - v9;
    }
    *(_WORD *)v10 = v11;
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 2 );
  if ( *(unsigned __int16 *)&v19 < (unsigned int)v20 )
  {
    if ( v20 < (unsigned int)v21 )
    {
      if ( v21 < (unsigned int)*(unsigned __int16 *)&v19 )
      {
        v12 = *(unsigned __int16 *)&v19;
        return ((signed int)(v16 * (31 - (v12 >> 1))) / 31 & 0xFFFF | ((signed int)(v18 * (31 - (v12 >> 1))) / 31 << 10) & 0x3FFFFFF | 32 * ((signed int)(v17 * (31 - (v12 >> 1))) / 31 & 0xFFFF)) & 0xFFFF;
      }
      goto _080FD636;
    }
_080FD62E:
    v12 = v20;
    return ((signed int)(v16 * (31 - (v12 >> 1))) / 31 & 0xFFFF | ((signed int)(v18 * (31 - (v12 >> 1))) / 31 << 10) & 0x3FFFFFF | 32 * ((signed int)(v17 * (31 - (v12 >> 1))) / 31 & 0xFFFF)) & 0xFFFF;
  }
  if ( *(unsigned __int16 *)&v19 < (unsigned int)v21 )
  {
    if ( v20 < (unsigned int)v21 )
    {
_080FD636:
      v12 = v21;
      return ((signed int)(v16 * (31 - (v12 >> 1))) / 31 & 0xFFFF | ((signed int)(v18 * (31 - (v12 >> 1))) / 31 << 10) & 0x3FFFFFF | 32 * ((signed int)(v17 * (31 - (v12 >> 1))) / 31 & 0xFFFF)) & 0xFFFF;
    }
    goto _080FD62E;
  }
  v12 = *(unsigned __int16 *)&v19;
  return ((signed int)(v16 * (31 - (v12 >> 1))) / 31 & 0xFFFF | ((signed int)(v18 * (31 - (v12 >> 1))) / 31 << 10) & 0x3FFFFFF | 32 * ((signed int)(v17 * (31 - (v12 >> 1))) / 31 & 0xFFFF)) & 0xFFFF;
}
