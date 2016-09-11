int __fastcall sub_80C3158(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE *v2; // r9@1
  char *v3; // r2@1
  __int16 *v4; // r1@1
  signed int v5; // r4@1
  int v6; // r0@2
  int v7; // r5@3
  _BYTE *v8; // r2@3
  unsigned int v9; // r1@3
  _BYTE *v10; // r0@5
  int v11; // r4@5
  int v12; // r7@5
  signed int v13; // r5@5
  signed int v14; // r4@5
  signed int v15; // r10@6
  signed int v16; // r9@6
  int v17; // r0@8
  int v18; // r1@8
  unsigned __int16 v20; // [sp+0h] [bp-3Ch]@1
  unsigned __int16 v21; // [sp+2h] [bp-3Ah]@1
  unsigned __int16 v22; // [sp+4h] [bp-38h]@1
  unsigned __int16 v23; // [sp+6h] [bp-36h]@1
  int v24; // [sp+8h] [bp-34h]@2
  int v25; // [sp+Ch] [bp-30h]@6
  int v26; // [sp+10h] [bp-2Ch]@6
  int v27; // [sp+14h] [bp-28h]@6
  int v28; // [sp+18h] [bp-24h]@6
  int v29; // [sp+38h] [bp-4h]@16

  v2 = a1;
  v3 = &gSprites[68 * a2];
  v20 = *((_WORD *)v3 + 2) & 0x3FF;
  v21 = *(_WORD *)&gSprites[68 * *((_WORD *)v3 + 23) + 4] & 0x3FF;
  v22 = *(_WORD *)&gSprites[68 * *((_WORD *)v3 + 24) + 4] & 0x3FF;
  v23 = *(_WORD *)&gSprites[68 * *((_WORD *)v3 + 25) + 4] & 0x3FF;
  v4 = (__int16 *)&v20;
  v5 = 3;
  do
  {
    v6 = 32 * (unsigned __int16)*v4 + 100728832;
    v24 = 0;
    v40000D4 = &v24;
    v40000D8 = v6;
    v40000DC = -2063597312;
    ++v4;
    --v5;
  }
  while ( v5 >= 0 );
  v7 = (unsigned __int8)GetStringWidthGivenWindowConfig((int)&gWindowConfig_81E7278, (int)v2);
  v8 = StringCopy((_BYTE *)0x20238CC, &gUnknown_083D17E2);
  v9 = -v7 & 7;
  if ( v9 )
  {
    *v8 = -4;
    v8[1] = 17;
    v8[2] = v9 >> 1;
    v8 += 3;
  }
  v10 = StringCopy(v8, v2);
  *v10 = -4;
  v10[1] = 19;
  v10[2] = (v7 + 7) & 0xF8;
  v10[3] = -1;
  sub_80034D4(33652840, 33700044);
  v11 = 32 * v20;
  v12 = v11 + 100728832;
  CpuSet(&gUnknown_083D1624, v11 + 100728832, 67108872);
  CpuSet(&unk_83D16A4, v11 + 100729088, 67108872);
  CpuSet(&unk_83D16A4, v11 + 100729344, 67108872);
  CpuSet(&unk_83D1664, v11 + 100729600, 67108872);
  v13 = ((v7 + 7) & 0xFFFFFFF8) << 24 >> 27;
  v14 = 0;
  if ( v13 >= 0 )
  {
    v25 = 33652872;
    v26 = 33652840;
    v27 = 100728096;
    v28 = 100728352;
    v15 = 100728608;
    v16 = 100728864;
    do
    {
      if ( v14 > 6 )
      {
        if ( v14 > 14 )
        {
          if ( v14 > 22 )
          {
            v17 = 32 * v23;
            v18 = v27;
          }
          else
          {
            v17 = 32 * v22;
            v18 = v28;
          }
        }
        else
        {
          v17 = 32 * v21;
          v18 = v15;
        }
      }
      else
      {
        v17 = 32 * v20;
        v18 = v16;
      }
      v12 = v17 + v18;
      if ( v14 == v13 )
        break;
      CpuSet(&gUnknown_083D16E4, v12, 67108872);
      CpuSet(&unk_83D1704, v12 + 768, 67108872);
      CpuSet(v26, v12 + 256, 67108872);
      CpuSet(v25, v12 + 512, 67108872);
      v25 += 64;
      v26 += 64;
      v27 += 32;
      v28 += 32;
      v15 += 32;
      v16 += 32;
      ++v14;
    }
    while ( v14 <= v13 );
  }
  CpuSet(&gUnknown_083D1644, v12, 67108872);
  CpuSet(&unk_83D16C4, v12 + 256, 67108872);
  CpuSet(&unk_83D16C4, v12 + 512, 67108872);
  CpuSet(&unk_83D1684, v12 + 768, 67108872);
  return v29;
}
