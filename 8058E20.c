signed int __fastcall CheckForFieldObjectCollision(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int v5; // r1@1
  unsigned int v6; // r2@1
  int v7; // r6@1
  unsigned int v8; // r7@1
  signed int v9; // r5@1
  unsigned int v10; // r9@1
  signed int v11; // r4@1
  int v12; // r0@1
  unsigned __int8 v14; // [sp+0h] [bp-24h]@1

  v5 = a2 << 16;
  v6 = a3 << 16;
  v7 = a4;
  v8 = v5 >> 16;
  v9 = (signed int)v5 >> 16;
  v10 = v6 >> 16;
  v11 = (signed int)v6 >> 16;
  v12 = (unsigned __int8)npc_block_way();
  v14 = v12;
  if ( v12 == 3 && sub_8058EF0(v9, v11, v7) << 24 )
    return 5;
  if ( ShouldJumpLedge() << 24 )
  {
    sav12_xor_increment(0x2Bu);
    return 6;
  }
  if ( v14 == 4 && sub_8058F6C((signed __int16)v8, (signed __int16)v10, v7) << 24 )
    return 7;
  if ( !v14 )
  {
    if ( CheckForRotatingGatePuzzleCollision(v7, (signed __int16)v8, (signed __int16)v10) )
      return 8;
    check_acro_bike_metatile((signed __int16)v8, (signed __int16)v10, a5, &v14);
  }
  return v14;
}
