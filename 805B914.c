int __fastcall sub_805B914(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFD | 4;
  *(_BYTE *)(a1 + 2) &= 0x81u;
  FieldObjectClearAnim(a1);
  return v2;
}
