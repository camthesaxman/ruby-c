int __fastcall move_effectiveness_something(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r10@1
  int v4; // r9@1
  int v5; // r7@1
  int result; // r0@2
  int v7; // r0@3
  char *v8; // r2@9
  int v9; // r0@11
  signed int v10; // r3@14
  int v11; // r4@14
  unsigned __int8 v12; // r0@15
  int v13; // r0@20
  unsigned __int8 v14; // [sp+0h] [bp-34h]@1
  int v15; // [sp+4h] [bp-30h]@1
  int v16; // [sp+8h] [bp-2Ch]@3
  int v17; // [sp+Ch] [bp-28h]@3
  int v18; // [sp+10h] [bp-24h]@15

  v3 = a1;
  v15 = a2;
  v4 = a3;
  v5 = 0;
  v14 = 0;
  if ( a1 == 165 )
  {
    result = 0;
  }
  else
  {
    v16 = gBattleMoves[12 * a1 + 2];
    v7 = *(_BYTE *)(88 * v15 + 0x2024AA1);
    v17 = 2 * v3;
    if ( v7 == v16 || *(_BYTE *)(88 * v15 + 0x2024AA2) == v16 )
    {
      v2024BEC *= 15;
      v2024BEC /= 10;
    }
    if ( *(_BYTE *)(88 * a3 + 0x2024AA0) != 26 || v16 != 4 )
    {
      v8 = gTypeEffectiveness;
      if ( (unsigned __int8)gTypeEffectiveness[0] != 255 )
      {
        if ( (unsigned __int8)gTypeEffectiveness[0] != 254 )
          goto _0801D34C;
        v9 = 88 * v4;
_0801D3CA:
        if ( !(*(_DWORD *)(v9 + 33704656) & 0x20000000) )
        {
          v5 += 3;
          while ( 1 )
          {
            v13 = (unsigned __int8)v8[v5];
            if ( v13 == 255 )
              break;
            if ( v13 == 254 )
            {
              v9 = 88 * v4;
              goto _0801D3CA;
            }
_0801D34C:
            if ( (unsigned __int8)gTypeEffectiveness[v5] == v16 )
            {
              v10 = 88;
              v11 = (unsigned __int8)gTypeEffectiveness[v5 + 1];
              if ( v11 == *(_BYTE *)(88 * v4 + 0x2024AA1) )
              {
                v12 = gTypeEffectiveness[v5 + 2];
                v18 = 88;
                b_attack_effectivity_adapt(v12, v3, (char *)&v14);
                v10 = v18;
              }
              if ( v11 == *(_BYTE *)(88 * v4 + 0x2024AA2) && *(_BYTE *)(v2024C08 * v10 + 0x2024AA1) != v11 )
                b_attack_effectivity_adapt(gTypeEffectiveness[v5 + 2], v3, (char *)&v14);
            }
            v5 += 3;
            v8 = gTypeEffectiveness;
          }
        }
      }
    }
    else
    {
      v14 |= 9u;
    }
    if ( *(_BYTE *)(88 * v4 + 0x2024AA0) == 25
      && !(v14 & 1)
      && (unsigned __int8)move_weather_interaction(v15, v3) == 2
      && (!(v14 & 2) || (v14 & 6) == 6) )
    {
      if ( gBattleMoves[4 * (v17 + v3) + 1] )
        v14 |= 1u;
    }
    result = v14;
  }
  return result;
}
