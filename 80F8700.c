int __fastcall sub_80F8700(int a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r0@1
  _BYTE *v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 33719500);
  v3 = sub_80F84C8(a1);
  ConvertIntToDecimalStringN(&gStringVar1, v3, 0, 10);
  v4 = (_BYTE *)sub_80F8490(v2);
  StringCopy(&gStringVar2, v4);
  sub_80F8534(v1, (int)&gStringVar3);
  v5 = sub_80F8484(v2);
  box_related_two__2(v5);
  return v7;
}
