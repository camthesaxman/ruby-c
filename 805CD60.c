int __fastcall sub_805CD60(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int result; // r0@2
  int v5; // r3@3
  int v6; // r2@3
  int v7; // r4@7
  __int16 v8; // [sp+0h] [bp-14h]@3
  signed int v9; // [sp+2h] [bp-12h]@3

  v2 = a1;
  v3 = a2;
  if ( FieldObjectIsTrainerAndCloseToPlayer(a1) << 24 )
  {
    PlayerGetDestCoords(&v8, &v9);
    v8 -= *(_WORD *)(v2 + 16);
    LOWORD(v9) = v9 - *(_WORD *)(v2 + 18);
    LOWORD(v5) = v9;
    LOWORD(v6) = v8;
    if ( v8 < 0 )
      v6 = 0xFFFF * v8 & 0xFFFF;
    if ( (signed __int16)v9 < 0 )
      v5 = 0xFFFF * (signed __int16)v9 & 0xFFFF;
    v7 = (int)*(&gUnknown_08375244 + v3);
    result = (unsigned __int8)call_via_r4(v8, (signed __int16)v9, (signed __int16)v6, (signed __int16)v5);
  }
  else
  {
    result = 0;
  }
  return result;
}
