int __fastcall RemoveFieldObject(_BYTE *a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *a1 &= 0xFEu;
  RemoveFieldObjectInternal();
  return v2;
}
