int sub_80BF20C()
{
  int v0; // r2@1
  unsigned int v1; // r5@2
  unsigned __int8 v2; // r7@2
  int v3; // r4@3
  __int16 v4; // r1@5
  __int16 v5; // r2@5
  int v7; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (v0 + 1) & 0xFF;
    v2 = v0 + 1;
    if ( v1 <= 2 )
    {
      v3 = 4 * v0 + 33785636;
      do
      {
        if ( *(_WORD *)(v3 + 2) < (unsigned int)*(_WORD *)(4 * v1 + 0x2038726) )
        {
          v4 = *(_WORD *)v3;
          v5 = *(_WORD *)(v3 + 2);
          *(_WORD *)v3 = *(_WORD *)(4 * v1 + 0x2038724);
          *(_WORD *)(v3 + 2) = *(_WORD *)(4 * v1 + 0x2038726);
          *(_WORD *)(4 * v1 + 0x2038724) = v4;
          *(_WORD *)(4 * v1 + 0x2038726) = v5;
        }
        v1 = (v1 + 1) & 0xFF;
      }
      while ( v1 <= 2 );
    }
    v0 = v2;
  }
  while ( v2 <= 1u );
  return v7;
}
