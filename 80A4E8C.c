int __fastcall sub_80A4E8C(char a1, unsigned __int8 a2)
{
  char v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  audio_play(5u);
  sub_80F979C(0, 1);
  sub_80F979C(1, 1);
  sub_80F979C(2, 1);
  sub_80F979C(3, 1);
  sub_80F996C(0);
  sub_80F996C(1);
  sub_80F996C(2);
  sub_80F996C(3);
  sub_80A3B04((int)gBG2TilemapBuffer, v2);
  sub_80A3AC0((int)gBG2TilemapBuffer, v2038559);
  v4 = sub_80A3770();
  sub_80A7C64(v4);
  sub_80A7C20(v3);
  return v6;
}
