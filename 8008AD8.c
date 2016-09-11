int __fastcall DequeueRecvCmds(int a1)
{
  int v1; // r3@2
  unsigned int v2; // r6@2
  unsigned int v3; // r2@3
  unsigned __int8 v4; // r5@3
  int v5; // r3@4
  unsigned int v6; // r1@4
  int v7; // r3@8
  unsigned int v8; // r9@8
  unsigned int v9; // r2@9
  unsigned __int8 v10; // r5@9
  int v11; // r6@10
  unsigned int v12; // r4@10
  int v13; // r3@10
  int v15; // [sp+1Ch] [bp-4h]@0

  gLinkSavedIme = v4000208;
  v4000208 = 0;
  if ( byte_300402D )
  {
    v7 = 0;
    v8 = (unsigned __int8)byte_3003073;
    do
    {
      v9 = 0;
      v10 = v7 + 1;
      if ( v8 > 0 )
      {
        v11 = 8 * v7 + a1;
        v12 = (unsigned __int8)byte_3003073;
        v13 = 2 * (unsigned __int8)byte_300402C + 100 * v7;
        do
        {
          *(_WORD *)(2 * v9 + v11) = *(_WORD *)((char *)&word_30033AC[400 * v9] + v13);
          v9 = (v9 + 1) & 0xFF;
        }
        while ( v9 < v12 );
      }
      v7 = v10;
    }
    while ( v10 <= 7u );
    --byte_300402D;
    if ( (unsigned __int8)++byte_300402C > 0x31u )
      byte_300402C = 0;
    byte_300307C = 0;
  }
  else
  {
    v1 = 0;
    v2 = (unsigned __int8)byte_3003073;
    do
    {
      v3 = 0;
      v4 = v1 + 1;
      if ( v2 > 0 )
      {
        v5 = 8 * v1 + a1;
        v6 = (unsigned __int8)byte_3003073;
        do
        {
          *(_WORD *)(2 * v3 + v5) = 0;
          v3 = (v3 + 1) & 0xFF;
        }
        while ( v3 < v6 );
      }
      v1 = v4;
    }
    while ( v4 <= 7u );
    byte_300307C = 1;
  }
  v4000208 = gLinkSavedIme;
  return v15;
}
