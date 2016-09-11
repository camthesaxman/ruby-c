int __fastcall sub_804151C(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  unsigned __int8 v3; // r6@3
  int v4; // r0@6
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( !(sub_8040300(v1) << 24) )
      break;
    v3 = 1;
    ++v2;
    while ( 1 )
    {
      v4 = (unsigned __int16)sub_803B7C8(v1, v3);
      if ( !v4 )
        break;
      v3 = 0;
      if ( v4 == 0xFFFF )
        DeleteFirstMoveAndGiveMoveToMon(v1, v2024E82);
    }
  }
  while ( v2 <= 99 );
  CalculateMonStats(v1);
  return v6;
}
