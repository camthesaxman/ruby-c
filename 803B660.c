signed int __fastcall GiveMoveToBattleMon(int a1, unsigned __int16 a2)
{
  int v2; // r4@1
  signed int v3; // r3@1
  _BYTE *v4; // r2@1
  _WORD *v5; // r1@1

  v2 = a2;
  v3 = 0;
  v4 = &gBattleMoves[12 * a2];
  v5 = (_WORD *)(a1 + 12);
  do
  {
    if ( !*v5 )
    {
      *v5 = v2;
      *(_BYTE *)(a1 + 36 + v3) = v4[4];
      return v2;
    }
    ++v5;
    ++v3;
  }
  while ( v3 <= 3 );
  return 0xFFFF;
}
