int __fastcall sub_80B1FD0(unsigned __int8 a1)
{
  int v1; // r8@1
  signed int v2; // r5@1
  signed int v3; // r4@1
  signed int v4; // r7@1
  int v5; // r0@4
  char *v6; // r0@4
  char v7; // r1@4
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 33657656;
  v4 = 33657440;
  do
  {
    if ( *(_BYTE *)(v4 + 16) & 0xC0 && v1 )
    {
      v5 = sub_80B208C((unsigned __int8)v2);
      CpuSet(v5, (32 * *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 1) + 4] & 0x7FFF) + 100728992, 67108880);
      *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 1) + 34] = gUnknown_083CA33C[*(_BYTE *)(v2 + 33785494)];
      v6 = &gSprites[68 * *(_BYTE *)(v3 + 1) + 62];
      v7 = *v6 & 0xFB;
    }
    else
    {
      v6 = &gSprites[68 * *(_BYTE *)(v3 + 1) + 62];
      v7 = *v6 | 4;
    }
    *v6 = v7;
    v3 += 4;
    v4 += 28;
    ++v2;
  }
  while ( v2 <= 3 );
  return v9;
}
