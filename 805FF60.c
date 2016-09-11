signed int __fastcall npc_block_way(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  unsigned int v5; // r1@1
  unsigned int v6; // r2@1
  unsigned int v7; // r3@1
  unsigned int v8; // r7@1
  int v9; // r8@1
  unsigned int v10; // r9@1
  int v11; // r5@1
  unsigned int v12; // r10@1
  int v13; // r4@1
  signed int result; // r0@2

  v4 = a1;
  v5 = a2 << 16;
  v6 = a3 << 16;
  v7 = a4 << 24;
  v8 = v7 >> 24;
  v9 = v7 >> 24;
  v10 = v5 >> 16;
  v11 = (signed int)v5 >> 16;
  v12 = v6 >> 16;
  v13 = (signed int)v6 >> 16;
  if ( IsCoordOutsideFieldObjectMovementRect() << 24 )
  {
    result = 1;
  }
  else if ( MapGridIsImpassableAt(v11, v13) << 24
         || GetMapBorderIdAt(v11, v13) == -1
         || IsMetatileDirectionallyImpassable(v4, v11, v13, v8) << 24
         || (unsigned int)*(_BYTE *)(v4 + 1) >> 7 && !CanCameraMoveInDirection(v9) )
  {
    result = 2;
  }
  else if ( IsZCoordMismatchAt(*(_BYTE *)(v4 + 11) & 0xF, (signed __int16)v10, (signed __int16)v12) << 24 )
  {
    result = 3;
  }
  else if ( CheckForCollisionBetweenFieldObjects(v4, (signed __int16)v10, (signed __int16)v12) << 24 )
  {
    result = 4;
  }
  else
  {
    result = 0;
  }
  return result;
}
