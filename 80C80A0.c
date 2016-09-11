signed int __fastcall CheckForRotatingGatePuzzleCollision(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  int v3; // r9@1
  __int16 v4; // r4@1
  __int16 v5; // r8@1
  int v6; // r6@4
  int v7; // r7@5
  int v8; // r0@6
  int v9; // r4@6
  unsigned int v10; // r0@10
  int v11; // r5@11

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( GetCurrentMapRotatingGatePuzzleType() )
  {
    v6 = 0;
    if ( (signed int)v2038804 > 0 )
    {
      v7 = v4;
      while ( 1 )
      {
        v8 = 8 * v6 + v2038800;
        v9 = (signed __int16)(*(_WORD *)v8 + 7);
        if ( v9 - 2 <= v7
          && v7 <= v9 + 1
          && (signed __int16)(*(_WORD *)(v8 + 2) + 7) - 2 <= v5
          && v5 <= (signed __int16)(*(_WORD *)(v8 + 2) + 7) + 1 )
        {
          v10 = (unsigned __int8)sub_80C7FEC(v3, v7 - v9 + 2, (signed __int16)(v5 - (*(_WORD *)(v8 + 2) + 7) + 2));
          if ( v10 != 255 )
          {
            v11 = v10 >> 4;
            if ( sub_80C7F64(v6, v10 & 0xF) )
              break;
          }
        }
        if ( ++v6 >= v2038804 )
          return 0;
      }
      if ( !sub_80C7E8C(v6, v11) )
        return 1;
      sub_80C7FB8(v6, v11);
      sub_80C7A44((unsigned __int8)v6, v11);
    }
  }
  return 0;
}
