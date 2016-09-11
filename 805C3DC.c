int CameraObjectReset1()
{
  char *v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = FindCameraObject();
  if ( v0 )
  {
    *((_WORD *)v0 + 24) = 0;
    call_via_r1(v0, *((_DWORD *)v0 + 7));
  }
  return v2;
}
