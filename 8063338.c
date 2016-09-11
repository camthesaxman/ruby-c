int __fastcall sub_8063338(int a1, int a2, char a3, unsigned __int8 a4)
{
  int v4; // r5@1
  int v5; // r4@1
  char v6; // r0@1
  int v8; // [sp+8h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  sub_8060D20(a1, a2, a3, a4);
  v6 = sub_805FDB8(*(_BYTE *)(v4 + 24) & 0xF);
  StartSpriteAnim(v5, v6);
  SeekSpriteAnim(v5, 0);
  return v8;
}
