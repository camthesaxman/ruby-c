int __fastcall BuyMenuDrawMapMetatile(int a1, int a2, int a3, signed int a4)
{
  int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  __int16 *v7; // r5@7
  __int16 v8; // r6@9
  __int16 v9; // r4@9
  __int16 v10; // r6@10
  __int16 v11; // r4@10
  int v13; // [sp+10h] [bp-4h]@0

  v4 = a3;
  a4 = (unsigned __int8)a4;
  v5 = 2 * a1 & 0xFFFF;
  v6 = (unsigned int)((a2 << 22) + 0x400000) >> 16;
  if ( (unsigned __int8)a4 == 1 )
  {
    v7 = gBG3TilemapBuffer;
_080B3366:
    v8 = v5;
    v9 = v6;
    BuyMenuDrawMapMetatileLayer((int)v7, v5, v6, a3);
    BuyMenuDrawMapMetatileLayer((int)(v7 - 1024), v8, v9, v4 + 8);
    return v13;
  }
  if ( a4 <= 1 )
  {
    if ( a4 )
      return v13;
    v7 = gBG2TilemapBuffer;
    goto _080B3366;
  }
  if ( a4 == 2 )
  {
    v10 = v5;
    v11 = v6;
    BuyMenuDrawMapMetatileLayer((int)gBG3TilemapBuffer, v5, v6, a3);
    BuyMenuDrawMapMetatileLayer((int)gBG1TilemapBuffer, v10, v11, v4 + 8);
  }
  return v13;
}
