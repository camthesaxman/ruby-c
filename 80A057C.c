int __fastcall sub_80A057C(unsigned __int16 a1)
{
  unsigned int v1; // r4@2
  unsigned int v2; // r2@4
  signed __int16 v3; // r3@5
  unsigned int v4; // r4@10
  unsigned int v5; // r2@12
  signed __int16 v6; // r3@13
  int v8; // [sp+1Ch] [bp-4h]@0

  if ( a1 != 0xFFFF )
  {
    v1 = gContestEffects[4 * gContestMoves[8 * a1] + 1];
    if ( v1 != 255 )
      v1 = v1 / 0xA & 0xFF;
    v2 = 0;
    do
    {
      v3 = 4153;
      if ( v1 != 255 && v2 < v1 )
        v3 = 4154;
      *(_WORD *)(2 * ((v2 & 3) + 32 * (v2 >> 2)) + 0x6006BCC) = v3;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 7 );
    if ( a1 != 0xFFFF )
    {
      v4 = gContestEffects[4 * gContestMoves[8 * a1] + 2];
      if ( v4 != 255 )
        v4 = v4 / 0xA & 0xFF;
      v5 = 0;
      do
      {
        v6 = 4157;
        if ( v4 != 255 && v5 < v4 )
          v6 = 4156;
        *(_WORD *)(2 * ((v5 & 3) + 32 * (v5 >> 2)) + 0x6006C4C) = v6;
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 7 );
    }
  }
  return v8;
}
