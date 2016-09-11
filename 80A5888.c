int __fastcall sub_80A5888(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  char *v4; // r4@3
  char v5; // r0@4
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( rfu_lacks_rfufunc() )
  {
    if ( word_30017A0 & 0x40 )
    {
      v4 = &byte_3000700;
      if ( byte_3000700 )
      {
        audio_play(5u);
        v5 = -1;
_080A58E2:
        *v4 = MoveMenuCursor(v5);
        return v7;
      }
    }
    else if ( word_30017A0 & 0x80 )
    {
      v4 = &byte_3000700;
      if ( (unsigned __int8)byte_3000700 != v2038564 - 1 )
      {
        audio_play(5u);
        v5 = 1;
        goto _080A58E2;
      }
    }
    else if ( word_300179E & 1 )
    {
      LOWORD(dword_3004B20[10 * v2 + 7]) = 0;
      sub_80A48E8(v2, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
      sub_80A4DA4((int)gBG1TilemapBuffer);
      call_via_r1(v2, *(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + (unsigned __int8)byte_3000700)));
    }
    else if ( word_300179E & 2 )
    {
      LOWORD(dword_3004B20[10 * v3 + 7]) = 0;
      sub_80A4DA4((int)gBG1TilemapBuffer);
      call_via_r1(v3, 134897537);
    }
  }
  return v7;
}
