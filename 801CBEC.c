int __fastcall battle_attack_damage_modulate_by_effectivity(unsigned __int8 a1)
{
  char v1; // r0@10
  char v2; // r1@12
  char v3; // r0@15
  int v5; // [sp+8h] [bp-4h]@0

  v2024BEC = v2024BEC * a1 / 10;
  if ( !v2024BEC && a1 )
    v2024BEC = 1;
  if ( a1 == 5 )
  {
    if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 1) )
    {
      v2 = v2024C68;
      if ( !(v2024C68 & 0x29) )
      {
        if ( v2024C68 & 2 )
        {
          v1 = v2024C68 & 0xFD;
_0801CCBC:
          v2024C68 = v1;
          return v5;
        }
        v3 = 4;
_0801CCBA:
        v1 = v3 | v2;
        goto _0801CCBC;
      }
    }
  }
  else
  {
    if ( (signed int)a1 <= 5 )
    {
      if ( a1 )
        return v5;
      v1 = (v2024C68 | 8) & 0xF9;
      goto _0801CCBC;
    }
    if ( a1 == 20 )
    {
      if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 1) )
      {
        v2 = v2024C68;
        if ( !(v2024C68 & 0x29) )
        {
          if ( v2024C68 & 4 )
          {
            v1 = v2024C68 & 0xFB;
            goto _0801CCBC;
          }
          v3 = 2;
          goto _0801CCBA;
        }
      }
    }
  }
  return v5;
}
