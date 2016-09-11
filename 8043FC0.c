int __fastcall sub_8043FC0(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r5@1
  signed int v3; // r6@1
  int v4; // r0@1
  int v5; // r4@2
  int *v6; // r7@2
  char *v7; // r0@7
  signed int v8; // r1@7
  int v9; // r3@7
  char *v10; // r0@9
  int v11; // r3@9
  char *v12; // r6@9
  signed int v13; // r5@9
  signed int v14; // r4@9
  int v15; // r1@10
  int v17; // [sp+0h] [bp-34h]@1
  __int16 v18; // [sp+6h] [bp-2Eh]@7
  char v19; // [sp+8h] [bp-2Ch]@8
  char v20; // [sp+9h] [bp-2Bh]@8
  char v21; // [sp+Ah] [bp-2Ah]@8
  char v22; // [sp+Bh] [bp-29h]@8
  char v23; // [sp+Ch] [bp-28h]@8
  char v24; // [sp+Dh] [bp-27h]@8
  char v25; // [sp+Eh] [bp-26h]@8
  char v26; // [sp+Fh] [bp-25h]@8
  int v27; // [sp+10h] [bp-24h]@8
  int v28; // [sp+30h] [bp-4h]@11

  v2 = a1;
  v3 = a2;
  v4 = memcpy(&v17, &gUnknown_0820A81C, 30);
  if ( battle_type_is_double(v4) << 24 )
  {
    v5 = 16 * v2;
    v6 = (int *)&gUnknown_0820A80C;
    if ( !(battle_side_get_owner(*(_WORD *)&gSprites[68 * v2 + 58] & 0xFF) << 24) )
      v6 = (int *)&gUnknown_0820A814;
  }
  else
  {
    v5 = 16 * v2;
    v6 = (int *)&gUnknown_0820A80C;
    if ( !(battle_side_get_owner(*(_WORD *)&gSprites[68 * v2 + 58] & 0xFF) << 24) )
      v6 = (int *)&gUnknown_0820A804;
  }
  if ( v3 == 100 )
  {
    v7 = (char *)&v18;
    v8 = 100;
    v9 = 3;
  }
  else
  {
    v18 = 4604;
    v19 = 1;
    v20 = -4;
    v21 = 20;
    v22 = 4;
    v23 = -16;
    v24 = -4;
    v25 = 20;
    v26 = 0;
    v7 = (char *)&v27;
    v8 = v3;
    v9 = 2;
  }
  v10 = ConvertIntToDecimalStringN(v7, v8, 0, v9);
  *v10 = -4;
  v10[1] = 19;
  v11 = (int)(v10 + 2);
  *(_BYTE *)v11 = 15;
  *(_BYTE *)(v11 + 1) = -1;
  sub_80034D4(0x2000000, (int)&v17);
  v12 = &gSprites[4 * (v5 + v2)];
  v13 = 33554464;
  v14 = 2;
  do
  {
    v15 = *v6;
    ++v6;
    CpuSet(v13, v15 + (32 * *((_WORD *)v12 + 2) & 0x7FFF), 67108872);
    v13 += 64;
    --v14;
  }
  while ( v14 );
  return v28;
}
