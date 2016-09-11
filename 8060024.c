unsigned int __fastcall sub_8060024(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v4; // r7@1
  unsigned int v5; // r1@1
  unsigned int v6; // r2@1
  int v7; // r8@1
  unsigned int v8; // r9@1
  int v9; // r6@1
  unsigned int v10; // r10@1
  int v11; // r5@1
  unsigned __int8 v12; // r0@1
  unsigned int v13; // r4@1

  v4 = a1;
  v5 = a2 << 16;
  v6 = a3 << 16;
  v7 = a4;
  v8 = v5 >> 16;
  v9 = (signed int)v5 >> 16;
  v10 = v6 >> 16;
  v11 = (signed int)v6 >> 16;
  v12 = IsCoordOutsideFieldObjectMovementRect();
  v13 = (-v12 | (unsigned int)v12) >> 31;
  if ( MapGridIsImpassableAt(v9, v11) << 24
    || GetMapBorderIdAt(v9, v11) == -1
    || IsMetatileDirectionallyImpassable(v4, v9, v11, v7) << 24
    || (unsigned int)*(_BYTE *)(v4 + 1) >> 7 && !CanCameraMoveInDirection(v7) )
  {
    v13 |= 2u;
  }
  if ( IsZCoordMismatchAt(*(_BYTE *)(v4 + 11) & 0xF, (signed __int16)v8, (signed __int16)v10) << 24 )
    v13 = (v13 | 4) & 0xFF;
  if ( CheckForCollisionBetweenFieldObjects(v4, (signed __int16)v8, (signed __int16)v10) << 24 )
    v13 = (v13 | 8) & 0xFF;
  return v13;
}
