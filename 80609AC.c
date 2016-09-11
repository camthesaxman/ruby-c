int __fastcall FieldObjectFaceOppositeDirection(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE *v2; // r4@1
  unsigned __int8 v3; // r0@1
  char v4; // r0@1

  v2 = a1;
  v3 = GetOppositeDirection(a2);
  v4 = GetFaceDirectionAnimId(v3);
  return (unsigned __int8)FieldObjectSetSpecialAnim(v2, v4);
}
