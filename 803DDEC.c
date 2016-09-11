int __fastcall CalcPPWithPPUps(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  int v3; // r4@1

  v3 = gBattleMoves[12 * a1 + 4];
  return (v3 + 20 * ((signed int)(unsigned __int8)(gUnknown_08208238[a3] & a2) >> 2 * a3) * v3 / 100) & 0xFF;
}
