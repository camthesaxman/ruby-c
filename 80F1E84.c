int sub_80F1E84()
{
  int v0; // r2@1
  unsigned __int16 v1; // r5@2
  unsigned int v2; // r1@3
  int v3; // r0@4
  int v5; // [sp+14h] [bp-4h]@0

  v200030F = 0;
  sub_80F2148();
  v0 = 0;
  if ( v200030E > 0 )
  {
    do
    {
      v1 = v0 + 1;
      if ( v0 != v2006DAD )
      {
        v2 = 0;
        do
        {
          v3 = *(_DWORD *)(4 * v2 + 16 * v0 + 0x2000320);
          if ( v3 )
            *(_DWORD *)(v3 + 28) = sub_80F2240;
          v2 = (v2 + 1) & 0xFFFF;
        }
        while ( v2 <= 3 );
      }
      v0 = (unsigned __int16)(v0 + 1);
    }
    while ( v1 < (signed int)v200030E );
  }
  return v5;
}
