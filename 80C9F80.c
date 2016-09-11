int __fastcall sub_80C9F80(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  DisplayYesNoMenu(7u, 7u, 1);
  sub_80A3FA0((int)gBG1TilemapBuffer, 8u, 8, 5, 4u, 1);
  sub_80F914C(v1, &gUnknown_083D61F4);
  return v3;
}
