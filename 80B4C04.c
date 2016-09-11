int __fastcall PlantBerryTree(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r6@1
  int v9; // [sp+10h] [bp-4h]@0

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = GetBerryTreeInfo(a1);
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_BYTE *)v7 = v4;
  *(_WORD *)(v7 + 2) = GetStageDurationByBerryType(v4);
  *(_BYTE *)(v7 + 1) = *(_BYTE *)(v7 + 1) & 0x80 | v5 & 0x7F;
  if ( v5 == 5 )
  {
    *(_BYTE *)(v7 + 4) = CalcBerryYield(v7);
    *(_WORD *)(v7 + 2) *= 4;
  }
  if ( !v6 )
    *(_BYTE *)(v7 + 1) |= 0x80u;
  return v9;
}
