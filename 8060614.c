int __fastcall FieldObjectClearAnimIfSpecialAnimFinished(_BYTE *a1)
{
  _BYTE *v1; // r5@1
  int v2; // r4@1

  v1 = a1;
  v2 = (unsigned __int8)FieldObjectCheckIfSpecialAnimFinishedOrInactive(a1);
  if ( v2 && v2 != 16 )
    FieldObjectClearAnimIfSpecialAnimActive(v1);
  return v2;
}
