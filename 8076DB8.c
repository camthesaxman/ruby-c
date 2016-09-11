int __fastcall sub_8076DB8(unsigned __int16 a1)
{
  int v1; // r6@1
  int v2; // r4@2
  int v3; // r5@2
  int v4; // r0@2
  unsigned __int16 v5; // r5@2
  _BOOL4 v6; // r0@2
  int v7; // r1@2
  _BOOL4 v8; // r0@4
  signed int v9; // r2@4
  char *v10; // r0@6
  int v11; // r4@6
  __int16 v12; // r0@6
  int v14; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    v2 = 12 * v1;
    v3 = (int)*(&off_837F37C + 3 * v1);
    sub_8076BE0();
    v4 = sub_800D238();
    v5 = (unsigned __int8)sub_80789BC(v4);
    v6 = sub_8076BE0();
    v7 = 33652736;
    if ( v6 << 24 )
      v7 = 33638400;
    sub_80763FC(v5, v7, 256, 0);
    v8 = sub_8076BE0();
    v9 = 33652736;
    if ( v8 << 24 )
      v9 = 33638400;
    v40000D4 = v9;
    v40000D8 = 100716544;
    v40000DC = -2080374272;
    LZDecompressVram(*(int *)((char *)&gBattleAnimBackgroundTable + v2), 100671488);
    v10 = (char *)&off_837F378 + v2;
    v11 = *(int *)((char *)&off_837F378 + v2);
    v12 = sub_80789BC(v10);
    LoadCompressedPalette(v11, 16 * v12 & 0xFFF, 32);
  }
  else
  {
    LZDecompressVram((int)*(&off_837F37C + 3 * v1), 100716544);
    LZDecompressVram((int)*(&gBattleAnimBackgroundTable + 3 * v1), 100696064);
    LoadCompressedPalette((int)*(&off_837F378 + 3 * v1), 0x20u, 32);
  }
  return v14;
}
