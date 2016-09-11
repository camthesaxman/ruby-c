int __fastcall ai_rate_move(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r7@1
  char *v5; // r0@1
  int v6; // r8@1
  int result; // r0@2
  int v8; // r0@3
  int v9; // r9@3
  char *v10; // r4@7
  int v11; // r0@8
  int v12; // r5@10
  unsigned __int8 v13; // [sp+0h] [bp-30h]@1
  int v14; // [sp+4h] [bp-2Ch]@1
  int v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+Ch] [bp-24h]@3

  v3 = a1;
  v14 = a3;
  v4 = 0;
  v13 = 0;
  v5 = (char *)&gBaseStats + 28 * a2;
  v15 = (unsigned __int8)v5[6];
  v6 = (unsigned __int8)v5[7];
  if ( v3 == 165 )
  {
    result = 0;
  }
  else
  {
    v8 = gBattleMoves[12 * v3 + 2];
    v9 = gBattleMoves[12 * v3 + 2];
    v16 = 2 * v3;
    if ( v14 != 26 || v8 != 4 )
    {
      if ( (unsigned __int8)gTypeEffectiveness[0] != 255 )
      {
        v10 = gTypeEffectiveness;
        do
        {
          v11 = (unsigned __int8)*v10;
          if ( v11 != 254 && v11 == v9 )
          {
            v12 = (unsigned __int8)v10[1];
            if ( v12 == v15 )
              b_attack_effectivity_adapt(v10[2], v3, (char *)&v13);
            if ( v12 == v6 && *(_BYTE *)(88 * v2024C08 + 0x2024AA1) != v6 )
              b_attack_effectivity_adapt(v10[2], v3, (char *)&v13);
          }
          v10 += 3;
          v4 += 3;
        }
        while ( (unsigned __int8)gTypeEffectiveness[v4] != 255 );
      }
    }
    else
    {
      v13 = 9;
    }
    if ( v14 == 25 && (!(v13 & 2) || (v13 & 6) == 6) )
    {
      if ( gBattleMoves[4 * (v16 + v3) + 1] )
        v13 |= 8u;
    }
    result = v13;
  }
  return result;
}
