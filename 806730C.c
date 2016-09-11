int __fastcall sub_806730C(int a1)
{
  int v1; // r0@1
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r7@1

  v1 = script_read_word(a1);
  v2 = *(_BYTE *)v1;
  v3 = *(_BYTE *)(v1 + 1);
  v4 = *(_BYTE *)(v1 + 2);
  v5 = *(_BYTE *)(v1 + 3);
  v6 = *(_BYTE *)(v1 + 4);
  v7 = *(_BYTE *)(v1 + 5);
  StringBraille(&gStringVar4, (_BYTE *)(v1 + 6));
  MenuDrawTextWindow(v2, v3, v4, v5);
  MenuPrint(&gStringVar4, v6, v7);
  return 0;
}
