int __fastcall FieldObjectClearAnimIfSpecialAnimActive(_BYTE *a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( *a1 & 0x40 )
    FieldObjectClearAnim(a1);
  return v2;
}
