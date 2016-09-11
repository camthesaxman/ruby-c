int __fastcall SpawnSpecialFieldObject(int a1)
{
  int v1; // r5@1
  char v3; // [sp+4h] [bp-14h]@1
  __int16 v4; // [sp+6h] [bp-12h]@1

  v1 = a1;
  GetFieldObjectMovingCameraOffset(&v3, &v4);
  return (unsigned __int8)SpawnFieldObject(v1, v2025739, v2025738, *(__int16 *)&v3, v4);
}
