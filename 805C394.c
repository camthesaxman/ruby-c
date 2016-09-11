char *FindCameraObject()
{
  unsigned int v0; // r3@1

  v0 = 0;
  do
  {
    if ( (unsigned __int8)gSprites[68 * v0 + 62] << 31
      && (int (__fastcall *)(int))dword_2020020[17 * v0] == ObjectCB_CameraObject )
    {
      return &gSprites[68 * v0];
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  return 0;
}
