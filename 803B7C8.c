int __fastcall sub_803B7C8(int a1, unsigned __int8 a2)
{
  int v2; // r8@1
  int v3; // r4@1
  int v4; // r9@1
  int v5; // r10@1
  int v6; // r3@2
  void ***v7; // r5@2
  void ***v8; // r12@2
  int v9; // r1@3
  int v11; // [sp+0h] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  v11 = 0;
  v4 = (unsigned __int16)GetMonData(a1, 11);
  v5 = (unsigned __int8)GetMonData(v2, 56);
  if ( !v3 )
  {
LABEL_6:
    v8 = gLevelUpLearnsets;
    v6 = v4;
    if ( (*((_WORD *)gLevelUpLearnsets[v4] + v2024E88) & 0xFE00) != v5 << 9 )
      return v11;
LABEL_7:
    v2024E82 = *((_WORD *)v8[v6] + v2024E88) & 0x1FF;
    ++v2024E88;
    return GiveMoveToMon() & 0xFFFF;
  }
  v2024E88 = 0;
  v6 = v4;
  v7 = &gLevelUpLearnsets[v4];
  v8 = gLevelUpLearnsets;
  if ( (*(_WORD *)*v7 & 0xFE00) == v5 << 9 )
    goto LABEL_7;
  while ( 1 )
  {
    ++v2024E88;
    v9 = *((_WORD *)*v7 + v2024E88);
    if ( v9 == 0xFFFF )
      return 0;
    if ( (v9 & 0xFE00) == v5 << 9 )
      goto LABEL_6;
  }
}
