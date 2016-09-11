int __fastcall GiveBoxMonInitialMoveset(int a1)
{
  int v1; // r8@1
  int v2; // r4@1
  int v3; // r10@1
  int v4; // r6@1
  int v5; // r3@2
  __int16 v6; // r2@3
  int v7; // r4@4
  signed int v8; // r0@4
  int v9; // r3@4
  int v11; // [sp+0h] [bp-24h]@4
  int v12; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)GetBoxMonData(a1, 11, 0);
  v3 = (unsigned __int8)GetLevelFromBoxMonExp(v1);
  v4 = v2;
  if ( *(_WORD *)gLevelUpLearnsets[v2] != 0xFFFF )
  {
    v5 = 0;
    do
    {
      v6 = *(_WORD *)((char *)gLevelUpLearnsets[v4] + v5);
      if ( (unsigned __int16)(v6 & 0xFE00) > v3 << 9 )
        break;
      v7 = v6 & 0x1FF;
      v11 = v5;
      v8 = GiveMoveToBoxMon(v1, v6 & 0x1FF);
      v9 = v11;
      if ( v8 << 16 == -65536 )
      {
        DeleteFirstMoveAndGiveMoveToBoxMon(v1, v7);
        v9 = v11;
      }
      v5 = v9 + 2;
    }
    while ( *(_WORD *)((char *)gLevelUpLearnsets[v4] + v5) != 0xFFFF );
  }
  return v12;
}
