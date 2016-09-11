int __fastcall FieldObjectIsTrainerAndCloseToPlayer(int a1)
{
  int v1; // r5@1
  int v2; // r0@2
  int v3; // r2@4
  int v4; // r4@4
  int v5; // r1@4
  signed __int16 v6; // r3@4
  int v7; // r5@4
  int v8; // r2@4
  int v9; // r6@4
  int result; // r0@8
  signed __int16 v11; // [sp+0h] [bp-18h]@4

  v1 = a1;
  result = 0;
  if ( TestPlayerAvatarFlags(0x80u) << 24 )
  {
    v2 = *(_BYTE *)(v1 + 7);
    if ( v2 == 1 || v2 == 3 )
    {
      PlayerGetDestCoords(&v11, &v11 + 1);
      v3 = *(_WORD *)(v1 + 16);
      v4 = *(_WORD *)(v1 + 18);
      v5 = *(_BYTE *)(v1 + 29);
      v6 = v3 - v5;
      v7 = (v4 - v5) & 0xFFFF;
      v8 = (v5 + v3) & 0xFFFF;
      v9 = (v5 + v4) & 0xFFFF;
      if ( v6 <= v11
        && (signed __int16)v8 >= v11
        && (signed __int16)v7 <= *(&v11 + 1)
        && (signed __int16)v9 >= *(&v11 + 1) )
      {
        result = 1;
      }
    }
  }
  return result;
}
