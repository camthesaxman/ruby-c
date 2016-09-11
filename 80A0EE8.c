int sub_80A0EE8()
{
  unsigned int v0; // r3@1
  int v1; // r4@6
  int v2; // r1@10
  signed __int16 *v3; // r2@10
  signed __int16 v4; // r0@10
  int v5; // r1@15
  signed __int16 *v6; // r2@15
  signed __int16 v7; // r0@15
  unsigned int v8; // r3@19
  int v10; // [sp+0h] [bp-30h]@3
  int v11; // [sp+2Ch] [bp-4h]@21

  v0 = 0;
  do
  {
    if ( v0 >= v2018075 )
    {
      if ( v0 <= v2018076 )
      {
        v1 = v201800B;
        if ( v0 < v201800B )
        {
          *((_WORD *)&v10 + 2 * v0) = 16454;
          *((_WORD *)&v10 + 2 * v0 + 1) = 16455;
        }
        if ( v0 == v1 )
        {
          if ( v0 == v2018076 )
          {
            v2 = 2 * v0;
            v3 = (signed __int16 *)(&v10 + v0);
            v4 = 16459;
          }
          else
          {
            v2 = 2 * v0;
            v3 = (signed __int16 *)(&v10 + v0);
            v4 = 16449;
          }
          *v3 = v4;
          *((_WORD *)&v10 + v2 + 1) = v4 + 1;
        }
        if ( v0 > v201800B )
        {
          if ( v0 == v2018076 )
          {
            v5 = 2 * v0;
            v6 = (signed __int16 *)(&v10 + v0);
            v7 = 16456;
          }
          else
          {
            v5 = 2 * v0;
            v6 = (signed __int16 *)(&v10 + v0);
            v7 = 16451;
          }
          *v6 = v7;
          *((_WORD *)&v10 + v5 + 1) = v7 + 1;
        }
      }
      else
      {
        *((_WORD *)&v10 + 2 * v0) = 16458;
        *((_WORD *)&v10 + 2 * v0 + 1) = 16458;
      }
    }
    else
    {
      *((_WORD *)&v10 + 2 * v0) = 16448;
      *((_WORD *)&v10 + 2 * v0 + 1) = 16448;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  v40000D4 = &v10;
  v40000D8 = 100720662;
  v40000DC = -2147483640;
  v8 = 0;
  do
  {
    *((_WORD *)&v10 + v8) += 16;
    v8 = (v8 + 1) & 0xFF;
  }
  while ( v8 <= 7 );
  v40000D4 = &v10;
  v40000D8 = 100720726;
  v40000DC = -2147483640;
  return v11;
}
