int __fastcall CameraObject_1(int a1)
{
  char *v1; // r1@1
  __int16 v2; // r3@1
  __int16 v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &gSprites[68 * *(_WORD *)(a1 + 46)];
  v2 = *((_WORD *)v1 + 17);
  v3 = *((_WORD *)v1 + 16);
  *(_WORD *)(a1 + 50) = *((_WORD *)v1 + 16) - *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 52) = v2 - *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 32) = v3;
  *(_WORD *)(a1 + 34) = v2;
  return v5;
}
