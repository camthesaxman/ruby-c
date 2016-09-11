int __fastcall sub_803C348(signed int a1)
{
  int v1; // r6@1
  signed int v2; // r5@7
  int *v3; // r2@7
  signed int v4; // r5@13
  int v5; // r4@14
  signed int v6; // r5@19
  int v7; // r4@20

  a1 = (unsigned __int8)a1;
  v1 = 0;
  if ( (unsigned __int8)a1 == 1 )
  {
    v4 = 0;
    do
    {
      v5 = battle_side_get_owner((unsigned __int8)v4);
      if ( v5 << 24 == battle_side_get_owner(v2024C07) << 24 && !(v2024C0C & gBitTable[v4]) )
        v1 = (v1 + 1) & 0xFF;
      ++v4;
    }
    while ( v4 <= 3 );
  }
  else if ( a1 > 1 )
  {
    if ( a1 == 2 )
    {
      v6 = 0;
      do
      {
        v7 = battle_side_get_owner((unsigned __int8)v6);
        if ( v7 << 24 == battle_side_get_owner(v2024C08) << 24 && !(v2024C0C & gBitTable[v6]) )
          v1 = (v1 + 1) & 0xFF;
        ++v6;
      }
      while ( v6 <= 3 );
    }
  }
  else if ( !a1 )
  {
    v2 = 0;
    v3 = gBitTable;
    do
    {
      if ( v2 != v2024A60 && !(v2024C0C & *v3) )
        v1 = (v1 + 1) & 0xFF;
      ++v3;
      ++v2;
    }
    while ( v2 <= 3 );
  }
  return v1;
}
