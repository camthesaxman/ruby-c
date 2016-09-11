int __fastcall sub_80A3C34(int a1, int a2)
{
  unsigned __int8 v2; // r7@1
  int v3; // r6@1
  unsigned int v4; // r2@1
  int v5; // r3@1
  unsigned int v6; // r4@2
  unsigned __int16 v7; // r8@2
  int v8; // r5@3
  int v9; // r1@5
  unsigned int v10; // ST00_4@7
  int v12; // [sp+18h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  LOBYTE(v4) = a2;
  v5 = 0;
  if ( a2 << 24 )
  {
    do
    {
      v6 = (v5 + 1) & 0xFFFF;
      v7 = v5 + 1;
      if ( v6 < (unsigned __int8)v4 )
      {
        v8 = 4 * v5 + v3;
        v4 = (unsigned __int8)v4;
        do
        {
          if ( *(_WORD *)(v8 + 2) )
          {
            v9 = 4 * v6 + v3;
            if ( *(_WORD *)(v9 + 2) )
            {
              if ( *(_WORD *)v8 > (unsigned int)*(_WORD *)v9 )
              {
                v10 = v4;
                swap32((int *)v8, (int *)v9);
                v4 = v10;
              }
            }
          }
          v6 = (v6 + 1) & 0xFFFF;
        }
        while ( v6 < v4 );
      }
      v5 = v7;
      LOBYTE(v4) = v2;
    }
    while ( v7 < (unsigned int)v2 );
  }
  return v12;
}
