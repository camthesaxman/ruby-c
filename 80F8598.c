int __fastcall sub_80F8598(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r0@1
  int v5; // r0@1
  _BYTE *v6; // r0@1
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 33719500) = a2;
  sub_80F8560(a1, (_BYTE *)0x2024EA4);
  v4 = sub_80F8438(v3);
  sub_80F84EC(v2, v4);
  v5 = sub_80F8438(v3);
  ConvertIntToDecimalStringN(&gStringVar1, v5, 0, 10);
  v6 = (_BYTE *)sub_80F8490(v3);
  StringCopy(&gStringVar2, v6);
  return v8;
}
