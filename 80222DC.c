int atk4A_damagecalc2()
{
  int v0; // r4@1
  int v1; // r5@1
  int v2; // r8@1
  int i; // r0@5
  int v4; // r3@7
  char *v5; // r0@8
  int v6; // r1@8
  int v7; // r2@13
  int v8; // r1@14
  int v9; // r2@19
  int v11; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = gBattleMoves[12 * v2024BE6 + 2];
  if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) != 26 || v2 != 4 )
  {
    for ( i = (unsigned __int8)gTypeEffectiveness[0]; i != 255; i = (unsigned __int8)gTypeEffectiveness[v1] )
    {
      if ( i == 254 )
      {
        if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x20000000 )
          break;
      }
      else if ( (unsigned __int8)gTypeEffectiveness[v1] == v2 )
      {
        v4 = v1 + 1;
        if ( (unsigned __int8)gTypeEffectiveness[v1 + 1] == *(_BYTE *)(88 * v2024C08 + 0x2024AA1) )
        {
          v5 = &gTypeEffectiveness[v1 + 2];
          v6 = (unsigned __int8)*v5;
          if ( !*v5 )
            goto _08022360;
          if ( v6 == 5 )
            v0 |= 4u;
          if ( v6 == 20 )
            v0 = (v0 | 2) & 0xFF;
        }
        v7 = (unsigned __int8)gTypeEffectiveness[v4];
        if ( v7 == *(_BYTE *)(88 * v2024C08 + 0x2024AA2) )
        {
          v8 = *(_BYTE *)(88 * v2024C08 + 0x2024AA1);
          if ( v8 != v7 && !gTypeEffectiveness[v1 + 2] )
          {
_08022360:
            v2024C68 |= 8u;
            break;
          }
          if ( v8 != v7 && gTypeEffectiveness[v1 + 2] == 5 )
            v0 = (v0 | 4) & 0xFF;
          v9 = (unsigned __int8)gTypeEffectiveness[v4];
          if ( v9 == *(_BYTE *)(88 * v2024C08 + 0x2024AA2)
            && *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != v9
            && gTypeEffectiveness[v1 + 2] == 20 )
          {
            v0 = (v0 | 2) & 0xFF;
          }
        }
      }
      v1 += 3;
    }
  }
  else
  {
    v2024C06 = 26;
    v2024C68 |= 9u;
    *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
    v2024D24 = 4;
    sub_81074C4(v2024C08, v2024C06);
  }
  if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 25
    && !(v0 & 0x29)
    && (unsigned __int8)move_weather_interaction(v2024C07, v2024BE6) == 2
    && (!(v0 & 2) || (v0 & 6) == 6)
    && gBattleMoves[12 * v2024BE6 + 1] )
  {
    v2024C06 = 25;
    v2024C68 |= 1u;
    *(_WORD *)(2 * v2024C08 + 0x2024C3C) = 0;
    v2024D24 = 3;
    sub_81074C4(v2024C08, v2024C06);
  }
  if ( v2024C68 & 8 )
    *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 2u;
  ++v2024C10;
  return v11;
}
