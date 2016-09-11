int __fastcall SetTVMetatilesOnMap(int a1, int a2, __int16 a3)
{
  int v3; // r9@1
  int v4; // r10@1
  int v5; // r5@1
  __int16 v6; // r8@2
  int v7; // r4@3
  int i; // r7@3
  int v10; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = 0;
  if ( a2 > 0 )
  {
    v6 = a3 | 0xC00;
    do
    {
      v7 = 0;
      for ( i = v5 + 1; v7 < v3; ++v7 )
      {
        if ( MapGridGetMetatileBehaviorAt(v7, v5) == 134 )
          MapGridSetMetatileIdAt(v7, v5, v6);
      }
      ++v5;
    }
    while ( i < v4 );
  }
  return v10;
}
