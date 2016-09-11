int __fastcall sub_80616CC(int a1, int a2, char a3, char a4, __int16 a5)
{
  int v5; // r8@1
  int v6; // r6@1
  char v7; // r4@1
  int v9; // [sp+10h] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a4;
  FieldObjectSetDirection(a1, a3);
  sub_805FE28(v5, v6, v7);
  *(_BYTE *)(v6 + 44) &= 0xBFu;
  *(_WORD *)(v6 + 50) = 1;
  *(_WORD *)(v6 + 52) = a5;
  return v9;
}
