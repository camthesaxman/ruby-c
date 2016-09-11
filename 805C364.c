int __fastcall CameraObject_2(int a1)
{
  int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 32) = *(_WORD *)&gSprites[68 * v1 + 32];
  *(_WORD *)(a1 + 34) = *(_WORD *)&gSprites[68 * v1 + 34];
  *(_WORD *)(a1 + 50) = 0;
  *(_WORD *)(a1 + 52) = 0;
  return v3;
}
