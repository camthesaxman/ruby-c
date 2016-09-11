int __fastcall CameraObjectSetFollowedObjectId(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  char *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = FindCameraObject();
  if ( v2 )
  {
    *((_WORD *)v2 + 23) = v1;
    CameraObjectReset1();
  }
  return v4;
}
