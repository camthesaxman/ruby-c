int __fastcall objc_dp11b_pingpong(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) & 0xFF;
  *(_WORD *)&gSprites[68 * v2 + 38] = sine(*(_WORD *)(a1 + 46), *(_WORD *)(a1 + 50)) + *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 46) = (unsigned __int8)(*(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 46));
  return v4;
}
