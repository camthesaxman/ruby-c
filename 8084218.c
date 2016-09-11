int __fastcall CheckPathBetweenTrainerAndPlayer(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r9@1
  int v5; // r7@1
  int v6; // r4@2
  char v7; // r0@3
  unsigned int v8; // r4@6
  char v9; // r0@6
  __int16 v11; // [sp+0h] [bp-20h]@2
  __int16 v12; // [sp+2h] [bp-1Eh]@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( !a2 )
    return 0;
  v11 = *(_WORD *)(a1 + 16);
  v12 = *(_WORD *)(a1 + 18);
  v6 = 0;
  if ( a2 - 1 >= 0 )
  {
    do
    {
      v7 = sub_8060024(v3, v11, v12, v5);
      if ( v7 )
      {
        if ( v7 & 1 )
          return 0;
      }
      v6 = (v6 + 1) & 0xFF;
      MoveCoords(v5, &v11, &v12);
    }
    while ( v6 <= v4 - 1 );
  }
  v8 = *(_BYTE *)(v3 + 25);
  *(_BYTE *)(v3 + 25) = 0;
  v9 = npc_block_way(v3, v11, v12, v5);
  *(_BYTE *)(v3 + 25) = v8 & 0xF | 16 * (v8 >> 4);
  if ( v9 != 4 )
    return 0;
  return v4;
}
