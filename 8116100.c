int __fastcall sub_8116100(unsigned __int8 a1)
{
  int v1; // r9@1
  unsigned int v2; // r7@1
  int *v3; // r0@1
  signed int v4; // r0@1
  int v5; // r4@1
  signed int v6; // r5@1
  unsigned int v7; // r0@4
  unsigned int v8; // r5@6
  unsigned int v9; // r10@6
  int v10; // r4@6
  int v11; // r0@6
  int v12; // r0@8
  __int16 v13; // r0@8
  __int16 v14; // r8@8
  int v15; // r4@8
  int v16; // r0@8
  int v17; // r4@10
  int v18; // r0@10
  int v19; // r5@10
  int v20; // r0@12
  int v21; // r5@12
  int v22; // r0@12
  int v23; // r2@12
  int v24; // r0@14
  int v25; // r2@14
  int v26; // r0@16
  int v28; // [sp+0h] [bp-28h]@1
  int v29; // [sp+24h] [bp-4h]@16

  v1 = a1;
  memcpy(&v28, (const char *)&gUnknown_083F8ECE, 8);
  v2 = (unsigned __int16)Random();
  v3 = &dword_3004B20[10 * v1];
  v201907C = *((_WORD *)v3 + 10);
  v201907F = 0;
  v201907E = 0;
  v201907D = 0;
  v4 = sub_8115F58(*((_WORD *)v3 + 12), v2);
  v5 = ((signed int)v2 % (unsigned __int8)v4 - ((unsigned int)(v4 << 24) >> 25)) & 0xFF;
  v6 = 1;
  if ( byte_300403A <= 12 )
    v6 = 0;
  if ( (v2 % 0x64 & 0xFFFF) > 0x4F )
    v7 = (1 - (char)v6) << 25;
  else
    v7 = v6 << 25;
  v8 = v7 >> 24;
  v9 = v2019004 << 30;
  v2019080 = (char)v5 + *(_WORD *)&gUnknown_083F8DF4[(32 * v2019004 & 0x7F) + 26];
  v10 = v2019080;
  v11 = _floatsisf(v2019080);
  if ( v10 < 0 )
    v11 = _addsf3(v11, 1199570944);
  v12 = _divsf3(v11, 1084227584);
  v13 = _fixunssfsi(v12);
  v14 = 3 * v13;
  v2019082 = 3 * v13;
  v2019084 = v13;
  v2019086 = v13;
  v15 = *((_WORD *)&v28 + (v2 & 1) + (char)v8);
  v16 = _floatsisf(v15);
  if ( v15 < 0 )
    v16 = _addsf3(v16, 1199570944);
  v2019088 = v16;
  v17 = *(_WORD *)&gUnknown_083F8DF4[(v9 >> 25) + 24];
  v18 = _floatsisf(v17);
  v19 = v18;
  if ( v17 < 0 )
    v19 = _addsf3(v18, 1199570944);
  v201908C = v19;
  v20 = _mulsf3(v19, 1056964608);
  v21 = _subsf3(v20, v19);
  v22 = _floatsisf(v14);
  v23 = v22;
  if ( v14 < 0 )
    v23 = _addsf3(v22, 1199570944);
  v2019090 = _divsf3(v21, v23);
  v2019094 = 1116209152;
  v201909C = 0;
  v24 = _floatsisf(v14);
  v25 = v24;
  if ( v14 < 0 )
    v25 = _addsf3(v24, 1199570944);
  v26 = _divsf3(1090519040, v25);
  v2019098 = _negsf2(v26);
  v20190A0 = 1108344832;
  dword_3004B20[10 * v1] = (int)sub_8116308;
  return v29;
}
