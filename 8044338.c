int __fastcall sub_8044338(unsigned __int8 a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int v4; // r0@1
  signed int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r1@2
  int v8; // r0@4
  char *v9; // r0@9
  signed int v10; // r7@10
  char *v11; // r8@10
  int v12; // r5@11
  int v13; // r6@11
  int v14; // r5@12
  signed int v15; // r7@12
  char *v16; // r5@12
  signed int v17; // r4@12
  int v19; // [sp+0h] [bp-40h]@1
  char v20; // [sp+5h] [bp-3Bh]@12
  __int16 v21; // [sp+6h] [bp-3Ah]@1
  char v22; // [sp+8h] [bp-38h]@12
  _BYTE v23[3]; // [sp+9h] [bp-37h]@1
  int v24; // [sp+14h] [bp-2Ch]@1
  int v25; // [sp+18h] [bp-28h]@10
  char *v26; // [sp+1Ch] [bp-24h]@1
  int v27; // [sp+3Ch] [bp-4h]@17

  v2 = a2;
  v24 = a1;
  memcpy(&v19, &gUnknown_0820A864, 20);
  v3 = 384 * (unsigned __int8)battle_get_per_side_status(*(_WORD *)&gSprites[68 * v24 + 58] & 0xFF) + 33555744;
  v4 = GetNature(v2);
  StringCopy(&v21, *(void **)((char *)&gNatureNames + (4 * v4 & 0x3FF)));
  sub_80034D4(v3, (int)&v19);
  v5 = 6;
  v6 = 0;
  v26 = v23;
  do
  {
    v7 = *((_BYTE *)&v19 + v5);
    if ( ((v7 - 55) & 0xFFu) > 0x13 && ((v7 + 121) & 0xFFu) > 0x13 )
    {
      if ( ((v7 - 75) & 0xFFu) > 4 && ((v7 + 101) & 0xFFu) > 4 )
        v8 = 43;
      else
        v8 = 45;
    }
    else
    {
      v8 = 44;
    }
    v9 = sub_8043CDC(v8);
    CpuSet(v9, v3 + (v6 << 6), 67108872);
    v6 = (v6 + 1) & 0xFF;
    ++v5;
  }
  while ( v6 < 5 );
  v10 = 1;
  v25 = 16 * v24;
  v11 = &gSprites[68 * v24];
  do
  {
    v12 = v10 / 8 << 6;
    CpuSet(v3, 32 * ((*((_WORD *)v11 + 2) & 0x3FF) + v10 % 8 + v12) + 100728832, 67108872);
    v13 = v3 + 32;
    CpuSet(v13, 32 * ((*((_WORD *)v11 + 2) & 0x3FF) + v10 % 8 + 8 + v12) + 100728832, 67108872);
    v3 = v13 + 32;
    ++v10;
  }
  while ( v10 < 6 );
  v14 = *(_WORD *)&gSprites[4 * (v25 + v24) + 56] & 0xFF;
  ConvertIntToDecimalStringN((char *)&v21, v2016089, 1, 2);
  ConvertIntToDecimalStringN(v26, v2016088, 1, 2);
  v20 = 0;
  v22 = -70;
  sub_80034D4(0x2000000, (int)&v19);
  v15 = 0;
  v16 = &gSprites[68 * v14];
  v17 = 33554464;
  do
  {
    if ( v15 > 1 )
      CpuSet(v17, 32 * (v15 + (*((_WORD *)v16 + 2) & 0x3FF)) + 100729024, 67108872);
    else
      CpuSet(v17, 32 * ((*((_WORD *)v16 + 2) & 0x3FF) + v15 + 2) + 100728832, 67108872);
    v17 += 64;
    ++v15;
  }
  while ( v15 <= 4 );
  return v27;
}
