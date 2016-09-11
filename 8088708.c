signed int __fastcall sub_8088708(int a1)
{
  signed int result; // r0@2
  int v2; // r3@3
  int v3; // r3@4
  int v4; // r12@4
  int v5; // r8@4
  unsigned int v6; // r4@4

  if ( (signed int)*(_WORD *)(a1 + 16) <= 31 )
  {
    v2 = (*(_WORD *)(a1 + 14) << 16 >> 19) & 0x1F;
    if ( v2 >= *(_WORD *)(a1 + 16) )
    {
      v3 = (32 - v2) & 0x1F;
      v4 = (32 - *(_WORD *)(a1 + 16)) & 0x1F;
      v5 = *(_WORD *)(a1 + 32) + 100663616;
      v6 = 0;
      do
      {
        *(_WORD *)(2 * (32 * v6 + v3) + v5) = gDarknessFieldMoveStreaksTilemap[v4 + 32 * v6] | 0xF000;
        *(_WORD *)(2 * (32 * v6 + ((v3 + 1) & 0x1F)) + v5) = gDarknessFieldMoveStreaksTilemap[((v4 + 1) & 0x1F)
                                                                                            + 32 * v6] | 0xF000;
        v6 = (v6 + 1) & 0xFFFF;
      }
      while ( v6 <= 9 );
      *(_WORD *)(a1 + 16) += 2;
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
