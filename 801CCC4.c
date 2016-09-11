int sub_801CCC4()
{
  int v0; // r3@1
  int v1; // r8@3
  int v2; // r0@11
  char *v3; // r2@11
  signed int v4; // r2@14
  int v5; // r4@14
  int v6; // ST04_4@15
  int v7; // ST04_4@18
  int v9; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  if ( v2024BE6 != 165 )
  {
    if ( v201601C )
      v1 = v201601C & 0x3F;
    else
      v1 = *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 2);
    if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) == v1 || *(_BYTE *)(88 * v2024C07 + 0x2024AA2) == v1 )
    {
      v2024BEC *= 15;
      v2024BEC /= 10;
      v0 = 0;
    }
    if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) != 26 || v1 != 4 )
    {
      v2 = (unsigned __int8)gTypeEffectiveness[v0];
      v3 = gTypeEffectiveness;
      while ( v2 != 255 )
      {
        if ( v2 == 254 )
        {
          if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x20000000 )
            break;
          v0 += 3;
        }
        else
        {
          if ( (unsigned __int8)gTypeEffectiveness[v0] == v1 )
          {
            v4 = 33704576;
            v5 = (unsigned __int8)gTypeEffectiveness[v0 + 1];
            if ( v5 == *(_BYTE *)(88 * v2024C08 + 0x2024AA1) )
            {
              v6 = v0;
              battle_attack_damage_modulate_by_effectivity(gTypeEffectiveness[v0 + 2]);
              v0 = v6;
              v4 = 33704576;
            }
            if ( v5 == *(_BYTE *)(88 * v2024C08 + v4 + 34) && *(_BYTE *)(88 * v2024C08 + v4 + 33) != v5 )
            {
              v7 = v0;
              battle_attack_damage_modulate_by_effectivity(gTypeEffectiveness[v0 + 2]);
              v0 = v7;
            }
          }
          v0 += 3;
          v3 = gTypeEffectiveness;
        }
        v2 = (unsigned __int8)v3[v0];
      }
    }
    else
    {
      v2024C06 = 26;
      v2024C68 |= 9u;
      *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
      *(_WORD *)(2 * v2024C08 + 0x2024C44) = 0;
      v2024D24 = 4;
      sub_81074C4(v2024C08, v2024C06);
    }
    if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 25
      && (move_weather_interaction(v2024C07, v2024BE6) & 0xFF) == 2
      && (!(v2024C68 & 2) || (v2024C68 & 6) == 6)
      && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 1) )
    {
      v2024C06 = 25;
      v2024C68 |= 1u;
      *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
      *(_WORD *)(2 * v2024C08 + 0x2024C44) = 0;
      v2024D24 = 3;
      sub_81074C4(v2024C08, v2024C06);
    }
    if ( v2024C68 & 8 )
      *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 2u;
  }
  ++v2024C10;
  return v9;
}
