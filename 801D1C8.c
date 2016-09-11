int __fastcall b_attack_effectivity_adapt(unsigned __int8 a1, unsigned __int16 a2, char *a3)
{
  char v3; // r0@10
  char v4; // r1@12
  char v5; // r0@15
  int v7; // [sp+10h] [bp-4h]@0

  v2024BEC = v2024BEC * a1 / 10;
  if ( !v2024BEC && a1 )
    v2024BEC = 1;
  if ( a1 == 5 )
  {
    if ( *((_BYTE *)&gBattleMoves + 12 * a2 + 1) )
    {
      v4 = *a3;
      if ( !(*a3 & 0x29) )
      {
        if ( *a3 & 2 )
        {
          v3 = v4 & 0xFD;
_0801D278:
          *a3 = v3;
          return v7;
        }
        v5 = 4;
_0801D276:
        v3 = v5 | v4;
        goto _0801D278;
      }
    }
  }
  else
  {
    if ( (signed int)a1 <= 5 )
    {
      if ( a1 )
        return v7;
      v3 = (*a3 | 8) & 0xF9;
      goto _0801D278;
    }
    if ( a1 == 20 )
    {
      if ( *((_BYTE *)&gBattleMoves + 12 * a2 + 1) )
      {
        v4 = *a3;
        if ( !(*a3 & 0x29) )
        {
          if ( *a3 & 4 )
          {
            v3 = v4 & 0xFB;
            goto _0801D278;
          }
          v5 = 2;
          goto _0801D276;
        }
      }
    }
  }
  return v7;
}
