int sub_810F388()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = GetPlayerAvatarObjectId();
  CameraObjectSetFollowedObjectId(v0);
  RemoveFieldObjectByLocalIdAndMap(0x7Fu, v2025739, v2025738);
  return v2;
}
