int __fastcall sub_810535C(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r0@1
  char v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (signed __int16)(*(_WORD *)(a1 + 60) + v2000014) % 40;
  *(_WORD *)(v1 + 34) = v2 + 59;
  v3 = sub_8102C48(v2 / 20);
  StartSpriteAnimIfDifferent(v1, v3);
  return v5;
}
