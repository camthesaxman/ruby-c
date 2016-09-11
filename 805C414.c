int CameraObjectGetFollowedObjectId()
{
  char *v0; // r0@1
  int result; // r0@2

  v0 = FindCameraObject();
  if ( v0 )
    result = *((_WORD *)v0 + 23) & 0xFF;
  else
    result = 64;
  return result;
}
