signed int __fastcall sub_8053B60(int a1, unsigned __int8 a2, unsigned __int16 a3, unsigned __int8 a4)
{
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  int v7; // r5@1
  unsigned int v8; // r4@3
  signed int result; // r0@7
  int v10; // r0@13

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  if ( FlagGet(2093) << 24 && v7 == 6 )
    return 4;
  v8 = v6 << 24;
  if ( (sub_8056F24(v8 >> 24) & 0xFF) == 1 )
    return 2;
  if ( (sub_8056F08(v8 >> 24) & 0xFF) == 1 || (sub_8056EAC(v8 >> 24) & 0xFF) == 1 )
    goto LABEL_22;
  if ( (MetatileBehavior_IsSouthArrowWarp(v8 >> 24) & 0xFF) == 1 )
    return 2;
  if ( (MetatileBehavior_IsNorthArrowWarp(v8 >> 24) & 0xFF) == 1 )
    goto LABEL_22;
  if ( (MetatileBehavior_IsWestArrowWarp(v8 >> 24) & 0xFF) == 1 )
    return 4;
  if ( (MetatileBehavior_IsEastArrowWarp(v8 >> 24) & 0xFF) == 1 )
    return 3;
  if ( (v10 = *(_BYTE *)v4, v10 == 16) && v5 == 8
    || v10 == 8 && v5 == 16
    || (MetatileBehavior_IsLadder(v8 >> 24) & 0xFF) == 1 )
  {
    result = *(_BYTE *)(v4 + 1);
  }
  else
  {
LABEL_22:
    result = 1;
  }
  return result;
}
