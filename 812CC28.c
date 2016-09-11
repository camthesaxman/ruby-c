int __fastcall sub_812CC28(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xF3 | 8;
  *(_WORD *)(a1 + 52) = 255;
  sub_812CAFC(a1);
  return v2;
}
