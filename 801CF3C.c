int b_wonderguard_and_levitate()
{
  int v0; // r6@1
  int v1; // r5@1
  char *v2; // r1@2
  int v3; // r12@4
  int i; // r0@9
  int v5; // r3@11
  int v6; // r2@14
  int v7; // r2@21
  int v8; // r2@28
  int v10; // [sp+18h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  if ( v2024BE6 != 165 )
  {
    v2 = (char *)&gBattleMoves + 12 * v2024BE6;
    if ( v2[1] )
    {
      if ( v201601C )
        v3 = v201601C & 0x3F;
      else
        v3 = (unsigned __int8)v2[2];
      if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) != 26 || v3 != 4 )
      {
        for ( i = (unsigned __int8)gTypeEffectiveness[0]; i != 255; i = (unsigned __int8)gTypeEffectiveness[v1] )
        {
          if ( i == 254 )
          {
            if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x20000000 )
              break;
          }
          else if ( (unsigned __int8)gTypeEffectiveness[v1] == v3 )
          {
            v5 = v1 + 1;
            if ( (unsigned __int8)gTypeEffectiveness[v1 + 1] == *(_BYTE *)(88 * v2024C08 + 0x2024AA1)
              && !gTypeEffectiveness[v1 + 2] )
            {
              v2024C68 |= 8u;
              *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 2u;
            }
            v6 = (unsigned __int8)gTypeEffectiveness[v5];
            if ( v6 == *(_BYTE *)(88 * v2024C08 + 0x2024AA2)
              && *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != v6
              && !gTypeEffectiveness[v1 + 2] )
            {
              v2024C68 |= 8u;
              *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 2u;
            }
            if ( (unsigned __int8)gTypeEffectiveness[v5] == *(_BYTE *)(88 * v2024C08 + 0x2024AA1)
              && gTypeEffectiveness[v1 + 2] == 20 )
            {
              v0 |= 1u;
            }
            v7 = (unsigned __int8)gTypeEffectiveness[v5];
            if ( v7 == *(_BYTE *)(88 * v2024C08 + 0x2024AA2)
              && *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != v7
              && gTypeEffectiveness[v1 + 2] == 20 )
            {
              v0 |= 1u;
            }
            if ( (unsigned __int8)gTypeEffectiveness[v5] == *(_BYTE *)(88 * v2024C08 + 0x2024AA1)
              && gTypeEffectiveness[v1 + 2] == 5 )
            {
              v0 = (v0 | 2) & 0xFF;
            }
            v8 = (unsigned __int8)gTypeEffectiveness[v5];
            if ( v8 == *(_BYTE *)(88 * v2024C08 + 0x2024AA2)
              && *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != v8
              && gTypeEffectiveness[v1 + 2] == 5 )
            {
              v0 = (v0 | 2) & 0xFF;
            }
          }
          v1 += 3;
        }
        if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 25
          && (unsigned __int8)move_weather_interaction(v2024C07, v2024BE6) == 2
          && (v0 & 3) != 1
          && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 1) )
        {
          v2024C06 = 25;
          v2024D24 = 3;
          sub_81074C4(v2024C08, 25);
        }
      }
      else
      {
        v2024C06 = 26;
        v2024D24 = 4;
        sub_81074C4(v2024C08, 26);
      }
    }
  }
  return v10;
}
