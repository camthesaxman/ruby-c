int __fastcall sub_80B9038(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r7@1
  signed int v3; // r5@1
  int v4; // r6@1
  signed __int16 v5; // r0@4
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) > (unsigned int)*(_BYTE *)(v3 + 33657552) )
    {
      v5 = v1 == (gContestMoves[8 * *(_WORD *)(v4 + 33657446) + 1] & 7) ? 40 : 10;
      v20192D4 = v5;
      v20192D8 = v3;
      v20192D9 = -1;
      if ( sub_80B9120() << 24 )
        ++v2;
    }
    v4 += 28;
    ++v3;
  }
  while ( v3 <= 3 );
  if ( !v2 )
    sub_80B1404(v20192E1, 54);
  return v7;
}
