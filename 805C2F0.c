int __fastcall CameraObject_0(int a1)
{
  int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 32) = *(_WORD *)&gSprites[68 * v1 + 32];
  *(_WORD *)(a1 + 34) = *(_WORD *)&gSprites[68 * v1 + 34];
  *(_BYTE *)(a1 + 62) |= 4u;
  *(_WORD *)(a1 + 48) = 1;
  CameraObject_1();
  return v3;
}
