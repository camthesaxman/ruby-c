int __fastcall sub_8077DD8(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  unsigned int v3; // r1@1
  unsigned int v4; // r4@1
  unsigned int v5; // r7@1
  int v6; // r5@1
  _BYTE *v7; // r0@6

  v2 = a1;
  v3 = a2 << 16;
  v4 = v3 >> 16;
  v5 = v3 >> 16;
  v6 = 0;
  if ( (unsigned __int8)battle_side_get_owner(a1) == 1 && !(sub_8076BE0() << 24) )
  {
    if ( v4 == 385 )
    {
      v6 = gUnknownCastformData_0837F5A8[*(_BYTE *)(v2 + 33705604)];
    }
    else
    {
      if ( v4 <= 0x19C )
        v7 = &gEnemyMonElevation[v5];
      else
        v7 = gEnemyMonElevation;
      v6 = *v7;
    }
  }
  return v6;
}
