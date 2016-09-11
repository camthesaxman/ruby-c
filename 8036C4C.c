int __fastcall sub_8036C4C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, _BYTE *a4)
{
  int v4; // r7@1
  char *v5; // r5@2
  int v6; // r0@3
  int v7; // r4@5
  int v9; // [sp+0h] [bp-24h]@1
  int v10; // [sp+20h] [bp-4h]@0

  v9 = a1;
  v4 = 0;
  if ( (unsigned __int8)gTypeEffectiveness[0] != 255 )
  {
    v5 = gTypeEffectiveness;
    do
    {
      v6 = (unsigned __int8)*v5;
      if ( v6 != 254 && v6 == v9 )
      {
        v7 = (unsigned __int8)v5[1];
        if ( v7 == a2 )
          *a4 = (unsigned __int8)v5[2] * *a4 / 10;
        if ( v7 == a3 && a2 != a3 )
          *a4 = (unsigned __int8)v5[2] * *a4 / 10;
      }
      v5 += 3;
      v4 += 3;
    }
    while ( (unsigned __int8)gTypeEffectiveness[v4] != 255 );
  }
  return v10;
}
