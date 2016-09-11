int __fastcall atkB7_presentdamagecalculation(int a1)
{
  signed int v1; // r4@1
  void *v2; // r0@11
  int v4; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int8)Random(a1);
  if ( v1 > 101 )
  {
    if ( v1 > 177 )
    {
      if ( v1 > 203 )
      {
        v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AAC) >> 2;
        if ( !v2024BEC )
          v2024BEC = 1;
        v2024BEC = -v2024BEC;
      }
      else
      {
        v2024DEC = 120;
      }
    }
    else
    {
      v2024DEC = 80;
    }
  }
  else
  {
    v2024DEC = 40;
  }
  if ( v1 > 203 )
  {
    if ( *(_WORD *)(88 * v2024C08 + 0x2024AAC) == *(_WORD *)(88 * v2024C08 + 0x2024AA8) )
      v2 = &BattleScript_1D83B5;
    else
      v2 = &BattleScript_1D839B;
  }
  else
  {
    v2 = &BattleScript_1D6F44;
  }
  v2024C10 = v2;
  return v4;
}
