int __fastcall sub_80A6EB8(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  char *v4; // r4@2
  char v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  v3 = word_30017A0 & 0xF0;
  if ( v3 == 64 )
  {
    v4 = &byte_3000700;
    if ( byte_3000700 == 1 )
    {
      audio_play(5u);
      v5 = -1;
_080A6F02:
      *v4 = MoveMenuCursor(v5);
      return v7;
    }
  }
  else if ( v3 == 128 )
  {
    v4 = &byte_3000700;
    if ( (unsigned __int8)byte_3000700 + 1 < v2038564 )
    {
      audio_play(5u);
      v5 = 1;
      goto _080A6F02;
    }
  }
  else if ( word_300179E & 1 )
  {
    LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
    sub_80A48E8(a1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
    sub_80A4DA4((int)gBG1TilemapBuffer);
    call_via_r1(v1, *(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + (unsigned __int8)byte_3000700)));
  }
  else if ( word_300179E & 2 )
  {
    LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
    sub_80A48E8(a1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
    sub_80A4DA4((int)gBG1TilemapBuffer);
    call_via_r1(v2, 134902053);
  }
  return v7;
}
