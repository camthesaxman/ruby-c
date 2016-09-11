int __fastcall sub_80A3BD0(int a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r7@1
  int v3; // r6@1
  int i; // r3@1
  unsigned int v5; // r4@2
  unsigned __int16 v6; // r8@2
  int v7; // r5@3
  unsigned int v8; // r2@3
  unsigned int v9; // ST00_4@5
  int v11; // [sp+18h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  for ( i = 0; i < v2 - 1; i = v6 )
  {
    v5 = (i + 1) & 0xFFFF;
    v6 = i + 1;
    if ( v5 < v2 )
    {
      v7 = 4 * i + v3;
      v8 = v2;
      do
      {
        if ( !*(_WORD *)(v7 + 2) )
        {
          v9 = v8;
          swap32((int *)v7, (int *)(4 * v5 + v3));
          v8 = v9;
        }
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 < v8 );
    }
  }
  return v11;
}
