int __fastcall UpdateFieldObjectsForCameraUpdate(__int16 a1, __int16 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  UpdateFieldObjectCoordsForCameraUpdate();
  sub_805B55C(v2, v3);
  RemoveFieldObjectsOutsideView();
  return v5;
}
