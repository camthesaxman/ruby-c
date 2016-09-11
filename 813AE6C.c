int __fastcall sub_813AE6C(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r6@1
  int v3; // r4@1
  char *v4; // r5@1
  int v5; // r0@1
  int v7; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &byte_3004B28[40 * a1];
  sub_80F944C();
  v5 = InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
  sub_813AF04(v5);
  MenuDrawTextWindow(0xFu, 0);
  MenuDrawTextWindow(0, 0xCu);
  MenuDrawTextWindow(0, 0);
  sub_813AD58(v2025BCC);
  MenuPrint((int)(&gUnknown_084062C0)[8 * v3], 1, 1u);
  sub_813ABE8(v2);
  InitMenu(0, 16, 2, v4[8], *v4, 13);
  return v7;
}
