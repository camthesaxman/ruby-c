int sub_8069D78()
{
  int v0; // r9@1
  int v1; // r7@1
  int v2; // r5@1
  int v3; // r4@2
  int i; // r8@2
  int v6; // [sp+18h] [bp-4h]@0

  v0 = *v202E828;
  v1 = *(_DWORD *)(v202E828 + 4);
  v2 = 0;
  if ( *v202E828 > 0 )
  {
    do
    {
      v3 = 0;
      for ( i = v2 + 1; v3 < v1; ++v3 )
      {
        if ( sub_8069D34(v2, v3) == 1 )
          MapGridSetMetatileIdAt(v2 + 7, v3 + 7, 526);
      }
      ++v2;
    }
    while ( i < v0 );
  }
  return v6;
}
