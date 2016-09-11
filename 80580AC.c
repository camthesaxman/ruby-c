int __fastcall InitCameraUpdateCallback(unsigned __int8 a1)
{
  int v1; // r5@1

  v1 = a1;
  if ( dword_3004884 )
    DestroySprite((int)&gSprites[68 * dword_3004884]);
  LOBYTE(dword_3004884) = AddCameraObject(v1);
  dword_3004884 = (unsigned __int8)dword_3004884;
  dword_3004880 = (int)CameraUpdateCallback;
  return 0;
}
